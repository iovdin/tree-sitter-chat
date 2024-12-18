#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 10
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_role = 1,
  aux_sym__role1_token1 = 2,
  aux_sym__content_token1 = 3,
  sym_source_file = 4,
  sym__next = 5,
  sym__role1 = 6,
  sym__content = 7,
  aux_sym_source_file_repeat1 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_role] = "role",
  [aux_sym__role1_token1] = "_role1_token1",
  [aux_sym__content_token1] = "_content_token1",
  [sym_source_file] = "source_file",
  [sym__next] = "_next",
  [sym__role1] = "_role1",
  [sym__content] = "_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_role] = sym_role,
  [aux_sym__role1_token1] = aux_sym__role1_token1,
  [aux_sym__content_token1] = aux_sym__content_token1,
  [sym_source_file] = sym_source_file,
  [sym__next] = sym__next,
  [sym__role1] = sym__role1,
  [sym__content] = sym__content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__role1_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__next] = {
    .visible = false,
    .named = true,
  },
  [sym__role1] = {
    .visible = false,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          ('s' <= lookahead && lookahead <= 'u')) ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          ('s' <= lookahead && lookahead <= 'u')) ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '\n') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_role);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__role1_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__role1_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym__content_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          ('s' <= lookahead && lookahead <= 'u')) ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '\n') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == ':') ADVANCE(7);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'a' ||
          lookahead == 'c' ||
          ('s' <= lookahead && lookahead <= 'u')) ADVANCE(13);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(10);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == 'c' ||
          lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(10);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_role] = ACTIONS(1),
    [aux_sym__role1_token1] = ACTIONS(1),
    [aux_sym__content_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym__content] = STATE(2),
    [sym_role] = ACTIONS(3),
    [aux_sym__role1_token1] = ACTIONS(5),
    [aux_sym__content_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__next] = STATE(3),
    [sym__role1] = STATE(3),
    [sym__content] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [aux_sym__role1_token1] = ACTIONS(9),
    [aux_sym__content_token1] = ACTIONS(11),
  },
  [3] = {
    [sym__next] = STATE(4),
    [sym__role1] = STATE(4),
    [sym__content] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [aux_sym__role1_token1] = ACTIONS(9),
    [aux_sym__content_token1] = ACTIONS(15),
  },
  [4] = {
    [sym__next] = STATE(4),
    [sym__role1] = STATE(4),
    [sym__content] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym__role1_token1] = ACTIONS(19),
    [aux_sym__content_token1] = ACTIONS(22),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 2,
      aux_sym__role1_token1,
      aux_sym__content_token1,
  [8] = 2,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      aux_sym__role1_token1,
      aux_sym__content_token1,
  [16] = 2,
    ACTIONS(33), 1,
      sym_role,
    ACTIONS(35), 1,
      aux_sym__content_token1,
  [23] = 1,
    ACTIONS(37), 1,
      aux_sym__content_token1,
  [27] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 8,
  [SMALL_STATE(7)] = 16,
  [SMALL_STATE(8)] = 23,
  [SMALL_STATE(9)] = 27,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__content, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__content, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__role1, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__role1, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_chat(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
