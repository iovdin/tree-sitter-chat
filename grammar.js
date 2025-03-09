/**
 * @file Chat format grammar
 * @author Assistant
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "chat",

  extras: $ => [],

  rules: {
    // The main file can contain multiple chat entries
    source_file: $ => repeat($.chat_entry),

    newline: $ => /\n/,

    // Each chat entry starts with a role followed by content
    chat_entry: $ => seq(
      $.role,
      optional($.content)
    ),

    // Roles must be at the start of a line and end with ":"
    role: $ => choice(
      'system:',
      's:',
      'user:',
      'u:',
      'assistant:',
      'a:',
      'tool_call:',
      'tc:',
      'tool_result:',
      'tr:',
      'comment:',
      'c:',
      'error:',
      'err:'
    ),


    // Content can contain text, variables, and other elements
    content: $ => repeat1(
      choice(
        $.text,
        $.variable,
        $.escaped_variable,
        $.newline
      )
    ),

    // Text content is anything except variables and role markers
    text: $ => token(prec(-1, /[^@\n]+/)),

    // Variables match the Rouge implementation using @ syntax
    variable: $ => token(/@{1,2}(?:\{[^}]+\}|\S+)/),
    
    // Escaped variables (preceded by backslash)
    escaped_variable: $ => token(/\@/)

  }
});
