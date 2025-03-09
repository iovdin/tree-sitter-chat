#include <tree_sitter/parser.h>
#include <ctype.h>

enum TokenType {
  ROLE_MARKER
};

void *tree_sitter_chat_external_scanner_create() {
  return NULL;
}

void tree_sitter_chat_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_chat_external_scanner_serialize(void *payload, char *buffer) {
  return 0;
}

void tree_sitter_chat_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
}

bool tree_sitter_chat_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[ROLE_MARKER]) {
    // Skip whitespace
    while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
      lexer->advance(lexer, true);
    }

    // Check if we're at the start of a line
    if (lexer->get_column(lexer) == 0) {
      // Look for role markers
      if (lexer->lookahead == 's' || lexer->lookahead == 'u' || 
          lexer->lookahead == 'a' || lexer->lookahead == 't' ||
          lexer->lookahead == 'c' || lexer->lookahead == 'e') {
        
        lexer->result_symbol = ROLE_MARKER;
        lexer->advance(lexer, false);
        
        // Handle two-character roles (tc: and tr:)
        if (lexer->lookahead == 'c' || lexer->lookahead == 'r') {
          lexer->advance(lexer, false);
        }
        
        // Check for colon
        if (lexer->lookahead == ':') {
          lexer->advance(lexer, false);
          return true;
        }
      }
    }
  }
  return false;
}