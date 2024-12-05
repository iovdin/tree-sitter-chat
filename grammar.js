/**
 * @file llm chat file format
 * @author Ilya Ovdin <iovdin@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "chat",
  rules: {
    source_file: $ => seq(
      choice($.role, $._content), 
      repeat($._next)),
    _next: $ => choice($._role1, $._content, /\n/),
    role: $ => token(seq(choice("s", "u", "a", "tc", "tr", "c", "err"), ":")),
    _role1: $ => seq(/\n/, $.role),
    _content: $  => seq(optional(/\n/), /./),

  }
});

