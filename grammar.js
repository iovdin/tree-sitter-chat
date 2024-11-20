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
    source_file: $ => seq($.role, repeat1($._next)),
    _next: $ => choice($._role1, $._content),
    role: $ => seq(choice("u", "s", "a", "tc", "tr"), ":"),
    _role1: $ => seq(/\n/, $.role),
    _content: $  => seq(optional(/\n/), /./),

  }
});

