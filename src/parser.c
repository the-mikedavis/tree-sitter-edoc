#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 235
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 3
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_EQ_EQ = 1,
  anon_sym_EQ_EQ_EQ = 2,
  anon_sym_EQ_EQ_EQ_EQ = 3,
  anon_sym_LBRACE = 4,
  aux_sym_macro_token1 = 5,
  anon_sym_RBRACE = 6,
  anon_sym_ATlink = 7,
  anon_sym_DOT = 8,
  aux_sym__link_expression_token1 = 9,
  sym_tag = 10,
  aux_sym_argument_token1 = 11,
  anon_sym_LTem_GT = 12,
  anon_sym_LT_SLASHem_GT = 13,
  anon_sym_LTstrong_GT = 14,
  anon_sym_LT_SLASHstrong_GT = 15,
  anon_sym_LT = 16,
  aux_sym_xhtml_tag_token1 = 17,
  anon_sym_GT = 18,
  anon_sym_AT_LBRACE = 19,
  anon_sym_AT_RBRACE = 20,
  anon_sym_AT_AT = 21,
  sym_quote_escape = 22,
  anon_sym_BQUOTE = 23,
  aux_sym__inline_quote_token1 = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_BQUOTE_BQUOTE = 26,
  aux_sym__double_inline_quote_token1 = 27,
  anon_sym_SQUOTE_SQUOTE = 28,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 29,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 30,
  sym_language_identifier = 31,
  aux_sym_quote_content_token1 = 32,
  sym__terminator = 33,
  sym__word = 34,
  sym_source = 35,
  sym__line = 36,
  sym__tag_line = 37,
  aux_sym__text_line = 38,
  sym_section = 39,
  sym_macro = 40,
  sym__link_macro = 41,
  sym__link_expression = 42,
  sym_argument = 43,
  sym__xhtml_tag = 44,
  sym_em_xhtml_tag = 45,
  sym_strong_xhtml_tag = 46,
  sym_xhtml_tag = 47,
  sym_xhtml_tag_content = 48,
  sym_macro_escape = 49,
  sym_inline_quote = 50,
  sym__inline_quote = 51,
  sym__double_inline_quote = 52,
  sym__triple_inline_quote = 53,
  sym_block_quote = 54,
  sym_quote_content = 55,
  aux_sym_source_repeat1 = 56,
  aux_sym_source_repeat2 = 57,
  aux_sym__link_expression_repeat1 = 58,
  aux_sym_argument_repeat1 = 59,
  aux_sym_xhtml_tag_repeat1 = 60,
  aux_sym_xhtml_tag_content_repeat1 = 61,
  aux_sym__double_inline_quote_repeat1 = 62,
  aux_sym_quote_content_repeat1 = 63,
  alias_sym_description = 64,
  alias_sym_quote_marker = 65,
  alias_sym_section_content = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "section_marker",
  [anon_sym_LBRACE] = "{",
  [aux_sym_macro_token1] = "macro_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_ATlink] = "tag",
  [anon_sym_DOT] = ".",
  [aux_sym__link_expression_token1] = "_link_expression_token1",
  [sym_tag] = "tag",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_LTem_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHem_GT] = "close_xhtml_tag",
  [anon_sym_LTstrong_GT] = "open_xhtml_tag",
  [anon_sym_LT_SLASHstrong_GT] = "close_xhtml_tag",
  [anon_sym_LT] = "<",
  [aux_sym_xhtml_tag_token1] = "xhtml_tag_token1",
  [anon_sym_GT] = ">",
  [anon_sym_AT_LBRACE] = "@{",
  [anon_sym_AT_RBRACE] = "@}",
  [anon_sym_AT_AT] = "@@",
  [sym_quote_escape] = "quote_escape",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__inline_quote_token1] = "_inline_quote_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [aux_sym__double_inline_quote_token1] = "_double_inline_quote_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [sym_language_identifier] = "language_identifier",
  [aux_sym_quote_content_token1] = "quote_content_token1",
  [sym__terminator] = "_terminator",
  [sym__word] = "_word",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym__tag_line] = "_tag_line",
  [aux_sym__text_line] = "_text_line",
  [sym_section] = "section",
  [sym_macro] = "macro",
  [sym__link_macro] = "_link_macro",
  [sym__link_expression] = "expression",
  [sym_argument] = "argument",
  [sym__xhtml_tag] = "_xhtml_tag",
  [sym_em_xhtml_tag] = "em_xhtml_tag",
  [sym_strong_xhtml_tag] = "strong_xhtml_tag",
  [sym_xhtml_tag] = "xhtml_tag",
  [sym_xhtml_tag_content] = "xhtml_tag_content",
  [sym_macro_escape] = "macro_escape",
  [sym_inline_quote] = "inline_quote",
  [sym__inline_quote] = "_inline_quote",
  [sym__double_inline_quote] = "_double_inline_quote",
  [sym__triple_inline_quote] = "_triple_inline_quote",
  [sym_block_quote] = "block_quote",
  [sym_quote_content] = "quote_content",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym__link_expression_repeat1] = "_link_expression_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_xhtml_tag_repeat1] = "xhtml_tag_repeat1",
  [aux_sym_xhtml_tag_content_repeat1] = "xhtml_tag_content_repeat1",
  [aux_sym__double_inline_quote_repeat1] = "_double_inline_quote_repeat1",
  [aux_sym_quote_content_repeat1] = "quote_content_repeat1",
  [alias_sym_description] = "description",
  [alias_sym_quote_marker] = "quote_marker",
  [alias_sym_section_content] = "section_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_ATlink] = sym_tag,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym__link_expression_token1] = aux_sym__link_expression_token1,
  [sym_tag] = sym_tag,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_LTem_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHem_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LTstrong_GT] = anon_sym_LTem_GT,
  [anon_sym_LT_SLASHstrong_GT] = anon_sym_LT_SLASHem_GT,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_xhtml_tag_token1] = aux_sym_xhtml_tag_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT_LBRACE] = anon_sym_AT_LBRACE,
  [anon_sym_AT_RBRACE] = anon_sym_AT_RBRACE,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [sym_quote_escape] = sym_quote_escape,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__inline_quote_token1] = aux_sym__inline_quote_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [aux_sym__double_inline_quote_token1] = aux_sym__double_inline_quote_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [sym_language_identifier] = sym_language_identifier,
  [aux_sym_quote_content_token1] = aux_sym_quote_content_token1,
  [sym__terminator] = sym__terminator,
  [sym__word] = sym__word,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym__tag_line] = sym__tag_line,
  [aux_sym__text_line] = aux_sym__text_line,
  [sym_section] = sym_section,
  [sym_macro] = sym_macro,
  [sym__link_macro] = sym__link_macro,
  [sym__link_expression] = sym__link_expression,
  [sym_argument] = sym_argument,
  [sym__xhtml_tag] = sym__xhtml_tag,
  [sym_em_xhtml_tag] = sym_em_xhtml_tag,
  [sym_strong_xhtml_tag] = sym_strong_xhtml_tag,
  [sym_xhtml_tag] = sym_xhtml_tag,
  [sym_xhtml_tag_content] = sym_xhtml_tag_content,
  [sym_macro_escape] = sym_macro_escape,
  [sym_inline_quote] = sym_inline_quote,
  [sym__inline_quote] = sym__inline_quote,
  [sym__double_inline_quote] = sym__double_inline_quote,
  [sym__triple_inline_quote] = sym__triple_inline_quote,
  [sym_block_quote] = sym_block_quote,
  [sym_quote_content] = sym_quote_content,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym__link_expression_repeat1] = aux_sym__link_expression_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_xhtml_tag_repeat1] = aux_sym_xhtml_tag_repeat1,
  [aux_sym_xhtml_tag_content_repeat1] = aux_sym_xhtml_tag_content_repeat1,
  [aux_sym__double_inline_quote_repeat1] = aux_sym__double_inline_quote_repeat1,
  [aux_sym_quote_content_repeat1] = aux_sym_quote_content_repeat1,
  [alias_sym_description] = alias_sym_description,
  [alias_sym_quote_marker] = alias_sym_quote_marker,
  [alias_sym_section_content] = alias_sym_section_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_macro_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATlink] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__link_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LTem_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHem_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LTstrong_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT_SLASHstrong_GT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xhtml_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_quote_escape] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__inline_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_inline_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_language_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_quote_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__text_line] = {
    .visible = false,
    .named = false,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym__link_macro] = {
    .visible = false,
    .named = true,
  },
  [sym__link_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__xhtml_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_em_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_strong_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xhtml_tag_content] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_quote] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__double_inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym__triple_inline_quote] = {
    .visible = false,
    .named = true,
  },
  [sym_block_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quote_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__link_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xhtml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xhtml_tag_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_inline_quote_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quote_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_description] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_quote_marker] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_section_content] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_language = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_language] = "language",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_section_content,
  },
  [2] = {
    [0] = alias_sym_quote_marker,
    [2] = alias_sym_quote_marker,
  },
  [3] = {
    [0] = alias_sym_quote_marker,
    [3] = alias_sym_quote_marker,
  },
  [4] = {
    [4] = alias_sym_description,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__text_line, 2,
    aux_sym__text_line,
    alias_sym_section_content,
  sym_argument, 2,
    sym_argument,
    alias_sym_description,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(60);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(110);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(111);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(104);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(105);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(98);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(103);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(106);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(107);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(99);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(11);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '}') ADVANCE(60);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(65);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(84);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(83);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '}') ADVANCE(60);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(72);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead == '{') ADVANCE(128);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(46)
      END_STATE();
    case 47:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(105);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(108);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(49)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(110);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(50)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__link_expression_token1);
      if (lookahead == '@') ADVANCE(64);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '.' &&
          lookahead != '}') ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'i') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'k') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(71);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LTem_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_SLASHem_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LTstrong_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstrong_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(88);
      if (lookahead == '`') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(98);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(98);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(99);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_language_identifier);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(12);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(106);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(107);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(105);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(110);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(111);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '@') ADVANCE(127);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(126);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '`') ADVANCE(89);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead == '=') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '{') ADVANCE(128);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 50},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 50},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
  [71] = {.lex_state = 18},
  [72] = {.lex_state = 18},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 18},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 18},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 19},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 19},
  [82] = {.lex_state = 19},
  [83] = {.lex_state = 19},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 19},
  [88] = {.lex_state = 19},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 19},
  [93] = {.lex_state = 19},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 18},
  [99] = {.lex_state = 18},
  [100] = {.lex_state = 18},
  [101] = {.lex_state = 18},
  [102] = {.lex_state = 18},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 18},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 16},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 16},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 29},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 29},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 29},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 16},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 48},
  [146] = {.lex_state = 14},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 23},
  [149] = {.lex_state = 48},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 23},
  [154] = {.lex_state = 14},
  [155] = {.lex_state = 14},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 14},
  [158] = {.lex_state = 23},
  [159] = {.lex_state = 23},
  [160] = {.lex_state = 14},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 23},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 48},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 14},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 14},
  [171] = {.lex_state = 23},
  [172] = {.lex_state = 14},
  [173] = {.lex_state = 23},
  [174] = {.lex_state = 48},
  [175] = {.lex_state = 14},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 14},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 23},
  [183] = {.lex_state = 23},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 46},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 46},
  [196] = {.lex_state = 46},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 15},
  [199] = {.lex_state = 15},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 47},
  [213] = {.lex_state = 15},
  [214] = {.lex_state = 15},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 47},
  [220] = {.lex_state = 47},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 15},
  [223] = {.lex_state = 15},
  [224] = {.lex_state = 15},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 47},
  [229] = {.lex_state = 15},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 47},
  [234] = {.lex_state = 47},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [anon_sym_LTem_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHem_GT] = ACTIONS(1),
    [anon_sym_LTstrong_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHstrong_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT_LBRACE] = ACTIONS(1),
    [anon_sym_AT_RBRACE] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [sym_quote_escape] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [sym_language_identifier] = ACTIONS(1),
    [sym__terminator] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(210),
    [sym__line] = STATE(187),
    [sym__tag_line] = STATE(187),
    [aux_sym__text_line] = STATE(13),
    [sym_section] = STATE(187),
    [sym_macro] = STATE(36),
    [sym__link_macro] = STATE(37),
    [sym__xhtml_tag] = STATE(36),
    [sym_em_xhtml_tag] = STATE(36),
    [sym_strong_xhtml_tag] = STATE(36),
    [sym_xhtml_tag] = STATE(36),
    [sym_inline_quote] = STATE(36),
    [sym__inline_quote] = STATE(35),
    [sym__double_inline_quote] = STATE(35),
    [sym__triple_inline_quote] = STATE(35),
    [sym_block_quote] = STATE(36),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [sym_tag] = ACTIONS(13),
    [anon_sym_LTem_GT] = ACTIONS(15),
    [anon_sym_LTstrong_GT] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [sym_quote_escape] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(23),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(25),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(27),
    [sym__terminator] = ACTIONS(29),
    [sym__word] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__terminator,
    STATE(5), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(20), 1,
      aux_sym_source_repeat1,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(187), 3,
      sym__line,
      sym__tag_line,
      sym_section,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [75] = 19,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(187), 3,
      sym__line,
      sym__tag_line,
      sym_section,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [144] = 19,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_EQ_EQ,
    ACTIONS(40), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(43), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(52), 1,
      anon_sym_LTem_GT,
    ACTIONS(55), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(64), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(70), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(61), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(187), 3,
      sym__line,
      sym__tag_line,
      sym_section,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [213] = 19,
    ACTIONS(5), 1,
      anon_sym_EQ_EQ,
    ACTIONS(7), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(187), 3,
      sym__line,
      sym__tag_line,
      sym_section,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [282] = 13,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_LTem_GT,
    ACTIONS(81), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      anon_sym_BQUOTE,
    ACTIONS(93), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(96), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(99), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(87), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [331] = 13,
    ACTIONS(99), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_LTem_GT,
    ACTIONS(107), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(110), 1,
      anon_sym_LT,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    ACTIONS(119), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(122), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(7), 1,
      aux_sym__text_line,
    STATE(99), 1,
      sym__link_macro,
    ACTIONS(113), 2,
      sym_quote_escape,
      sym__word,
    STATE(100), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(98), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [380] = 13,
    ACTIONS(99), 1,
      anon_sym_EQ_EQ,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LTem_GT,
    ACTIONS(131), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(134), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      anon_sym_BQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(146), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(79), 1,
      sym__link_macro,
    ACTIONS(137), 2,
      sym_quote_escape,
      sym__word,
    STATE(80), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(78), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [429] = 13,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(149), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [478] = 13,
    ACTIONS(151), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LTem_GT,
    ACTIONS(157), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(60), 1,
      sym__link_macro,
    ACTIONS(161), 2,
      sym_quote_escape,
      sym__word,
    STATE(55), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(33), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [527] = 13,
    ACTIONS(151), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LTem_GT,
    ACTIONS(173), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(179), 1,
      anon_sym_BQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(7), 1,
      aux_sym__text_line,
    STATE(99), 1,
      sym__link_macro,
    ACTIONS(177), 2,
      sym_quote_escape,
      sym__word,
    STATE(100), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(98), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [576] = 13,
    ACTIONS(99), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_LTem_GT,
    ACTIONS(191), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(194), 1,
      anon_sym_LT,
    ACTIONS(200), 1,
      anon_sym_BQUOTE,
    ACTIONS(203), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(60), 1,
      sym__link_macro,
    ACTIONS(197), 2,
      sym_quote_escape,
      sym__word,
    STATE(55), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(33), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [625] = 13,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(209), 1,
      sym__terminator,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [674] = 13,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LTem_GT,
    ACTIONS(17), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(211), 1,
      sym__terminator,
    STATE(9), 1,
      aux_sym__text_line,
    STATE(37), 1,
      sym__link_macro,
    ACTIONS(21), 2,
      sym_quote_escape,
      sym__word,
    STATE(35), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(36), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [723] = 13,
    ACTIONS(151), 1,
      anon_sym_EQ_EQ,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_LTem_GT,
    ACTIONS(217), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(223), 1,
      anon_sym_BQUOTE,
    ACTIONS(225), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(227), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(79), 1,
      sym__link_macro,
    ACTIONS(221), 2,
      sym_quote_escape,
      sym__word,
    STATE(80), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(78), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [772] = 12,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_LTem_GT,
    ACTIONS(217), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(219), 1,
      anon_sym_LT,
    ACTIONS(223), 1,
      anon_sym_BQUOTE,
    ACTIONS(225), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(227), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(79), 1,
      sym__link_macro,
    ACTIONS(221), 2,
      sym_quote_escape,
      sym__word,
    STATE(80), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(78), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [818] = 12,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      anon_sym_LTem_GT,
    ACTIONS(157), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(159), 1,
      anon_sym_LT,
    ACTIONS(163), 1,
      anon_sym_BQUOTE,
    ACTIONS(165), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(60), 1,
      sym__link_macro,
    ACTIONS(161), 2,
      sym_quote_escape,
      sym__word,
    STATE(55), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(33), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [864] = 12,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      anon_sym_LTem_GT,
    ACTIONS(173), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(175), 1,
      anon_sym_LT,
    ACTIONS(179), 1,
      anon_sym_BQUOTE,
    ACTIONS(181), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(183), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(99), 1,
      sym__link_macro,
    ACTIONS(177), 2,
      sym_quote_escape,
      sym__word,
    STATE(100), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(98), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [910] = 4,
    ACTIONS(33), 1,
      sym__terminator,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(229), 13,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      sym_tag,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [935] = 4,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      sym__terminator,
    STATE(20), 1,
      aux_sym_source_repeat1,
    ACTIONS(233), 13,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      sym_tag,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [960] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(231), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(25), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(108), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [991] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(205), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(25), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(108), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1022] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(227), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(118), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1053] = 8,
    ACTIONS(258), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(266), 1,
      anon_sym_BQUOTE,
    ACTIONS(269), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(272), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(263), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(24), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(108), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1084] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(275), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(277), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(24), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(108), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1115] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(226), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(25), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(108), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1146] = 8,
    ACTIONS(258), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(285), 1,
      anon_sym_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(291), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(282), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(118), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1177] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(218), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(118), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1208] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(275), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(294), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(118), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1239] = 8,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(242), 1,
      anon_sym_BQUOTE,
    ACTIONS(244), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(217), 1,
      sym_xhtml_tag_content,
    ACTIONS(240), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(25), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(108), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1270] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(207), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(118), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1301] = 8,
    ACTIONS(248), 1,
      anon_sym_LT,
    ACTIONS(252), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(256), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(230), 1,
      sym_xhtml_tag_content,
    ACTIONS(250), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(118), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1332] = 1,
    ACTIONS(296), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1345] = 1,
    ACTIONS(298), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1358] = 1,
    ACTIONS(300), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1371] = 1,
    ACTIONS(296), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1384] = 1,
    ACTIONS(302), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1397] = 1,
    ACTIONS(304), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1410] = 1,
    ACTIONS(306), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1423] = 1,
    ACTIONS(308), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1436] = 1,
    ACTIONS(310), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1449] = 1,
    ACTIONS(312), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1462] = 1,
    ACTIONS(314), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1475] = 1,
    ACTIONS(316), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1488] = 1,
    ACTIONS(318), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1501] = 1,
    ACTIONS(320), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1514] = 1,
    ACTIONS(322), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1527] = 1,
    ACTIONS(324), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1540] = 1,
    ACTIONS(326), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1553] = 1,
    ACTIONS(328), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1566] = 1,
    ACTIONS(330), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1579] = 1,
    ACTIONS(320), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1592] = 1,
    ACTIONS(316), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1605] = 1,
    ACTIONS(310), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1618] = 1,
    ACTIONS(300), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1631] = 1,
    ACTIONS(330), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1644] = 1,
    ACTIONS(328), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1657] = 1,
    ACTIONS(326), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1670] = 1,
    ACTIONS(324), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1683] = 1,
    ACTIONS(302), 10,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1696] = 1,
    ACTIONS(322), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1709] = 1,
    ACTIONS(318), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1722] = 1,
    ACTIONS(298), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1735] = 1,
    ACTIONS(304), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1748] = 1,
    ACTIONS(314), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1761] = 1,
    ACTIONS(312), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1774] = 1,
    ACTIONS(306), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1787] = 1,
    ACTIONS(308), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1800] = 1,
    ACTIONS(308), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1813] = 1,
    ACTIONS(312), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1826] = 1,
    ACTIONS(314), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1839] = 1,
    ACTIONS(318), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1852] = 1,
    ACTIONS(306), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1865] = 1,
    ACTIONS(322), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1878] = 1,
    ACTIONS(304), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1891] = 1,
    ACTIONS(324), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1904] = 1,
    ACTIONS(298), 10,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [1917] = 1,
    ACTIONS(296), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1930] = 1,
    ACTIONS(302), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1943] = 1,
    ACTIONS(300), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1956] = 1,
    ACTIONS(310), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1969] = 1,
    ACTIONS(316), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1982] = 1,
    ACTIONS(320), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1995] = 1,
    ACTIONS(326), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2008] = 1,
    ACTIONS(330), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2021] = 1,
    ACTIONS(328), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2034] = 1,
    ACTIONS(326), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2047] = 1,
    ACTIONS(324), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2060] = 1,
    ACTIONS(322), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2073] = 1,
    ACTIONS(318), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2086] = 1,
    ACTIONS(328), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2099] = 1,
    ACTIONS(314), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2112] = 1,
    ACTIONS(312), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2125] = 1,
    ACTIONS(308), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2138] = 1,
    ACTIONS(306), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2151] = 1,
    ACTIONS(304), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2164] = 1,
    ACTIONS(298), 10,
      anon_sym_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2177] = 1,
    ACTIONS(296), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2190] = 1,
    ACTIONS(302), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2203] = 1,
    ACTIONS(300), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2216] = 1,
    ACTIONS(310), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2229] = 1,
    ACTIONS(316), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2242] = 1,
    ACTIONS(320), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2255] = 1,
    ACTIONS(330), 10,
      anon_sym_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [2268] = 4,
    STATE(192), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2285] = 1,
    ACTIONS(310), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2296] = 1,
    ACTIONS(312), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2307] = 1,
    ACTIONS(300), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2318] = 1,
    ACTIONS(322), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2329] = 1,
    ACTIONS(324), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2340] = 4,
    ACTIONS(336), 1,
      anon_sym_RBRACE,
    ACTIONS(338), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(111), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(341), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2357] = 1,
    ACTIONS(320), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2368] = 4,
    STATE(191), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2385] = 4,
    STATE(190), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2402] = 1,
    ACTIONS(316), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2413] = 1,
    ACTIONS(320), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2424] = 4,
    STATE(186), 1,
      sym__link_expression,
    ACTIONS(332), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(119), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2441] = 1,
    ACTIONS(300), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2452] = 4,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 2,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
    STATE(111), 2,
      sym_macro_escape,
      aux_sym__link_expression_repeat1,
    ACTIONS(334), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2469] = 1,
    ACTIONS(318), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2480] = 1,
    ACTIONS(322), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2491] = 1,
    ACTIONS(324), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2502] = 1,
    ACTIONS(318), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2513] = 1,
    ACTIONS(312), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2524] = 1,
    ACTIONS(310), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2535] = 1,
    ACTIONS(316), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2546] = 7,
    ACTIONS(348), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(350), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(352), 1,
      sym_language_identifier,
    ACTIONS(354), 1,
      aux_sym_quote_content_token1,
    STATE(166), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(198), 1,
      sym_quote_content,
  [2568] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(209), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2584] = 4,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      aux_sym_argument_token1,
    STATE(129), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(365), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2600] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(197), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2616] = 7,
    ACTIONS(354), 1,
      aux_sym_quote_content_token1,
    ACTIONS(368), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(370), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(372), 1,
      sym_language_identifier,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(179), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(222), 1,
      sym_quote_content,
  [2638] = 7,
    ACTIONS(354), 1,
      aux_sym_quote_content_token1,
    ACTIONS(374), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(376), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(378), 1,
      sym_language_identifier,
    STATE(163), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(224), 1,
      sym_quote_content,
  [2660] = 7,
    ACTIONS(354), 1,
      aux_sym_quote_content_token1,
    ACTIONS(380), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(382), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(384), 1,
      sym_language_identifier,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(177), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(214), 1,
      sym_quote_content,
  [2682] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(221), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2698] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(232), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2714] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(211), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2730] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(208), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2746] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(201), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2762] = 4,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      aux_sym_argument_token1,
    STATE(129), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2778] = 4,
    ACTIONS(356), 1,
      aux_sym_argument_token1,
    STATE(202), 1,
      sym_argument,
    STATE(139), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(358), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2794] = 1,
    ACTIONS(390), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      aux_sym__link_expression_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2803] = 1,
    ACTIONS(390), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2811] = 3,
    ACTIONS(392), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(394), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [2821] = 3,
    ACTIONS(396), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(398), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(170), 1,
      aux_sym__double_inline_quote_repeat1,
  [2831] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(229), 1,
      sym_quote_content,
  [2841] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(404), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [2851] = 3,
    ACTIONS(406), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(408), 1,
      aux_sym_quote_content_token1,
    STATE(147), 1,
      aux_sym_quote_content_repeat1,
  [2861] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(413), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [2871] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(199), 1,
      sym_quote_content,
  [2881] = 3,
    ACTIONS(415), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(417), 1,
      anon_sym_GT,
    STATE(148), 1,
      aux_sym_xhtml_tag_repeat1,
  [2891] = 3,
    ACTIONS(419), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(421), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(152), 1,
      aux_sym__double_inline_quote_repeat1,
  [2901] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(425), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [2911] = 3,
    ACTIONS(427), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(429), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [2921] = 3,
    ACTIONS(431), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(433), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(161), 1,
      aux_sym__double_inline_quote_repeat1,
  [2931] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(435), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [2941] = 3,
    ACTIONS(437), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(439), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(181), 1,
      aux_sym__double_inline_quote_repeat1,
  [2951] = 3,
    ACTIONS(441), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(444), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [2961] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(446), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [2971] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(448), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [2981] = 3,
    ACTIONS(450), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(452), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(155), 1,
      aux_sym__double_inline_quote_repeat1,
  [2991] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(454), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [3001] = 3,
    ACTIONS(456), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(459), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [3011] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(461), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3021] = 3,
    ACTIONS(463), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(465), 1,
      anon_sym_GT,
    STATE(158), 1,
      aux_sym_xhtml_tag_repeat1,
  [3031] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(213), 1,
      sym_quote_content,
  [3041] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(467), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3051] = 3,
    ACTIONS(469), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(146), 1,
      aux_sym__double_inline_quote_repeat1,
  [3061] = 3,
    ACTIONS(473), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(475), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_xhtml_tag_repeat1,
  [3071] = 3,
    ACTIONS(444), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3081] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(480), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [3091] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(482), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [3101] = 3,
    ACTIONS(484), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(486), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(180), 1,
      aux_sym__double_inline_quote_repeat1,
  [3111] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(488), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [3121] = 3,
    ACTIONS(400), 1,
      aux_sym_quote_content_token1,
    STATE(176), 1,
      aux_sym_quote_content_repeat1,
    STATE(223), 1,
      sym_quote_content,
  [3131] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(490), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [3141] = 3,
    ACTIONS(492), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(494), 1,
      aux_sym_quote_content_token1,
    STATE(147), 1,
      aux_sym_quote_content_repeat1,
  [3151] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(496), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3161] = 3,
    ACTIONS(411), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(498), 1,
      anon_sym_GT,
    STATE(162), 1,
      aux_sym_xhtml_tag_repeat1,
  [3171] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(500), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3181] = 3,
    ACTIONS(402), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(502), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(157), 1,
      aux_sym__double_inline_quote_repeat1,
  [3191] = 3,
    ACTIONS(423), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(504), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3201] = 3,
    ACTIONS(506), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(508), 1,
      anon_sym_GT,
    STATE(171), 1,
      aux_sym_xhtml_tag_repeat1,
  [3211] = 3,
    ACTIONS(510), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(512), 1,
      anon_sym_GT,
    STATE(178), 1,
      aux_sym_xhtml_tag_repeat1,
  [3221] = 2,
    ACTIONS(514), 1,
      anon_sym_ATlink,
    ACTIONS(516), 1,
      sym_tag,
  [3228] = 2,
    ACTIONS(518), 1,
      aux_sym_macro_token1,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [3235] = 2,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      anon_sym_DOT,
  [3242] = 2,
    ACTIONS(526), 1,
      sym__terminator,
    STATE(19), 1,
      aux_sym_source_repeat1,
  [3249] = 2,
    ACTIONS(528), 1,
      anon_sym_ATlink,
    ACTIONS(530), 1,
      sym_tag,
  [3256] = 2,
    ACTIONS(532), 1,
      aux_sym_macro_token1,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [3263] = 2,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      anon_sym_DOT,
  [3270] = 2,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(542), 1,
      anon_sym_DOT,
  [3277] = 2,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(546), 1,
      anon_sym_DOT,
  [3284] = 2,
    ACTIONS(548), 1,
      anon_sym_ATlink,
    ACTIONS(550), 1,
      sym_tag,
  [3291] = 2,
    ACTIONS(552), 1,
      anon_sym_ATlink,
    ACTIONS(554), 1,
      sym_tag,
  [3298] = 2,
    ACTIONS(556), 1,
      aux_sym_macro_token1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [3305] = 2,
    ACTIONS(560), 1,
      aux_sym_macro_token1,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [3312] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [3316] = 1,
    ACTIONS(566), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3320] = 1,
    ACTIONS(568), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3324] = 1,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
  [3328] = 1,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [3332] = 1,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
  [3336] = 1,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
  [3340] = 1,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
  [3344] = 1,
    ACTIONS(580), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3348] = 1,
    ACTIONS(582), 1,
      anon_sym_SQUOTE,
  [3352] = 1,
    ACTIONS(584), 1,
      anon_sym_LT_SLASHem_GT,
  [3356] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [3360] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [3364] = 1,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [3368] = 1,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [3372] = 1,
    ACTIONS(594), 1,
      aux_sym__inline_quote_token1,
  [3376] = 1,
    ACTIONS(596), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3380] = 1,
    ACTIONS(598), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3384] = 1,
    ACTIONS(600), 1,
      sym__terminator,
  [3388] = 1,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
  [3392] = 1,
    ACTIONS(604), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3396] = 1,
    ACTIONS(606), 1,
      anon_sym_LT_SLASHem_GT,
  [3400] = 1,
    ACTIONS(608), 1,
      aux_sym__inline_quote_token1,
  [3404] = 1,
    ACTIONS(610), 1,
      aux_sym__inline_quote_token1,
  [3408] = 1,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
  [3412] = 1,
    ACTIONS(614), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3416] = 1,
    ACTIONS(616), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3420] = 1,
    ACTIONS(618), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3424] = 1,
    ACTIONS(620), 1,
      anon_sym_SQUOTE,
  [3428] = 1,
    ACTIONS(622), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3432] = 1,
    ACTIONS(624), 1,
      anon_sym_LT_SLASHem_GT,
  [3436] = 1,
    ACTIONS(626), 1,
      aux_sym__inline_quote_token1,
  [3440] = 1,
    ACTIONS(628), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3444] = 1,
    ACTIONS(630), 1,
      anon_sym_LT_SLASHem_GT,
  [3448] = 1,
    ACTIONS(632), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3452] = 1,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
  [3456] = 1,
    ACTIONS(636), 1,
      aux_sym__inline_quote_token1,
  [3460] = 1,
    ACTIONS(638), 1,
      aux_sym__inline_quote_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 75,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 213,
  [SMALL_STATE(6)] = 282,
  [SMALL_STATE(7)] = 331,
  [SMALL_STATE(8)] = 380,
  [SMALL_STATE(9)] = 429,
  [SMALL_STATE(10)] = 478,
  [SMALL_STATE(11)] = 527,
  [SMALL_STATE(12)] = 576,
  [SMALL_STATE(13)] = 625,
  [SMALL_STATE(14)] = 674,
  [SMALL_STATE(15)] = 723,
  [SMALL_STATE(16)] = 772,
  [SMALL_STATE(17)] = 818,
  [SMALL_STATE(18)] = 864,
  [SMALL_STATE(19)] = 910,
  [SMALL_STATE(20)] = 935,
  [SMALL_STATE(21)] = 960,
  [SMALL_STATE(22)] = 991,
  [SMALL_STATE(23)] = 1022,
  [SMALL_STATE(24)] = 1053,
  [SMALL_STATE(25)] = 1084,
  [SMALL_STATE(26)] = 1115,
  [SMALL_STATE(27)] = 1146,
  [SMALL_STATE(28)] = 1177,
  [SMALL_STATE(29)] = 1208,
  [SMALL_STATE(30)] = 1239,
  [SMALL_STATE(31)] = 1270,
  [SMALL_STATE(32)] = 1301,
  [SMALL_STATE(33)] = 1332,
  [SMALL_STATE(34)] = 1345,
  [SMALL_STATE(35)] = 1358,
  [SMALL_STATE(36)] = 1371,
  [SMALL_STATE(37)] = 1384,
  [SMALL_STATE(38)] = 1397,
  [SMALL_STATE(39)] = 1410,
  [SMALL_STATE(40)] = 1423,
  [SMALL_STATE(41)] = 1436,
  [SMALL_STATE(42)] = 1449,
  [SMALL_STATE(43)] = 1462,
  [SMALL_STATE(44)] = 1475,
  [SMALL_STATE(45)] = 1488,
  [SMALL_STATE(46)] = 1501,
  [SMALL_STATE(47)] = 1514,
  [SMALL_STATE(48)] = 1527,
  [SMALL_STATE(49)] = 1540,
  [SMALL_STATE(50)] = 1553,
  [SMALL_STATE(51)] = 1566,
  [SMALL_STATE(52)] = 1579,
  [SMALL_STATE(53)] = 1592,
  [SMALL_STATE(54)] = 1605,
  [SMALL_STATE(55)] = 1618,
  [SMALL_STATE(56)] = 1631,
  [SMALL_STATE(57)] = 1644,
  [SMALL_STATE(58)] = 1657,
  [SMALL_STATE(59)] = 1670,
  [SMALL_STATE(60)] = 1683,
  [SMALL_STATE(61)] = 1696,
  [SMALL_STATE(62)] = 1709,
  [SMALL_STATE(63)] = 1722,
  [SMALL_STATE(64)] = 1735,
  [SMALL_STATE(65)] = 1748,
  [SMALL_STATE(66)] = 1761,
  [SMALL_STATE(67)] = 1774,
  [SMALL_STATE(68)] = 1787,
  [SMALL_STATE(69)] = 1800,
  [SMALL_STATE(70)] = 1813,
  [SMALL_STATE(71)] = 1826,
  [SMALL_STATE(72)] = 1839,
  [SMALL_STATE(73)] = 1852,
  [SMALL_STATE(74)] = 1865,
  [SMALL_STATE(75)] = 1878,
  [SMALL_STATE(76)] = 1891,
  [SMALL_STATE(77)] = 1904,
  [SMALL_STATE(78)] = 1917,
  [SMALL_STATE(79)] = 1930,
  [SMALL_STATE(80)] = 1943,
  [SMALL_STATE(81)] = 1956,
  [SMALL_STATE(82)] = 1969,
  [SMALL_STATE(83)] = 1982,
  [SMALL_STATE(84)] = 1995,
  [SMALL_STATE(85)] = 2008,
  [SMALL_STATE(86)] = 2021,
  [SMALL_STATE(87)] = 2034,
  [SMALL_STATE(88)] = 2047,
  [SMALL_STATE(89)] = 2060,
  [SMALL_STATE(90)] = 2073,
  [SMALL_STATE(91)] = 2086,
  [SMALL_STATE(92)] = 2099,
  [SMALL_STATE(93)] = 2112,
  [SMALL_STATE(94)] = 2125,
  [SMALL_STATE(95)] = 2138,
  [SMALL_STATE(96)] = 2151,
  [SMALL_STATE(97)] = 2164,
  [SMALL_STATE(98)] = 2177,
  [SMALL_STATE(99)] = 2190,
  [SMALL_STATE(100)] = 2203,
  [SMALL_STATE(101)] = 2216,
  [SMALL_STATE(102)] = 2229,
  [SMALL_STATE(103)] = 2242,
  [SMALL_STATE(104)] = 2255,
  [SMALL_STATE(105)] = 2268,
  [SMALL_STATE(106)] = 2285,
  [SMALL_STATE(107)] = 2296,
  [SMALL_STATE(108)] = 2307,
  [SMALL_STATE(109)] = 2318,
  [SMALL_STATE(110)] = 2329,
  [SMALL_STATE(111)] = 2340,
  [SMALL_STATE(112)] = 2357,
  [SMALL_STATE(113)] = 2368,
  [SMALL_STATE(114)] = 2385,
  [SMALL_STATE(115)] = 2402,
  [SMALL_STATE(116)] = 2413,
  [SMALL_STATE(117)] = 2424,
  [SMALL_STATE(118)] = 2441,
  [SMALL_STATE(119)] = 2452,
  [SMALL_STATE(120)] = 2469,
  [SMALL_STATE(121)] = 2480,
  [SMALL_STATE(122)] = 2491,
  [SMALL_STATE(123)] = 2502,
  [SMALL_STATE(124)] = 2513,
  [SMALL_STATE(125)] = 2524,
  [SMALL_STATE(126)] = 2535,
  [SMALL_STATE(127)] = 2546,
  [SMALL_STATE(128)] = 2568,
  [SMALL_STATE(129)] = 2584,
  [SMALL_STATE(130)] = 2600,
  [SMALL_STATE(131)] = 2616,
  [SMALL_STATE(132)] = 2638,
  [SMALL_STATE(133)] = 2660,
  [SMALL_STATE(134)] = 2682,
  [SMALL_STATE(135)] = 2698,
  [SMALL_STATE(136)] = 2714,
  [SMALL_STATE(137)] = 2730,
  [SMALL_STATE(138)] = 2746,
  [SMALL_STATE(139)] = 2762,
  [SMALL_STATE(140)] = 2778,
  [SMALL_STATE(141)] = 2794,
  [SMALL_STATE(142)] = 2803,
  [SMALL_STATE(143)] = 2811,
  [SMALL_STATE(144)] = 2821,
  [SMALL_STATE(145)] = 2831,
  [SMALL_STATE(146)] = 2841,
  [SMALL_STATE(147)] = 2851,
  [SMALL_STATE(148)] = 2861,
  [SMALL_STATE(149)] = 2871,
  [SMALL_STATE(150)] = 2881,
  [SMALL_STATE(151)] = 2891,
  [SMALL_STATE(152)] = 2901,
  [SMALL_STATE(153)] = 2911,
  [SMALL_STATE(154)] = 2921,
  [SMALL_STATE(155)] = 2931,
  [SMALL_STATE(156)] = 2941,
  [SMALL_STATE(157)] = 2951,
  [SMALL_STATE(158)] = 2961,
  [SMALL_STATE(159)] = 2971,
  [SMALL_STATE(160)] = 2981,
  [SMALL_STATE(161)] = 2991,
  [SMALL_STATE(162)] = 3001,
  [SMALL_STATE(163)] = 3011,
  [SMALL_STATE(164)] = 3021,
  [SMALL_STATE(165)] = 3031,
  [SMALL_STATE(166)] = 3041,
  [SMALL_STATE(167)] = 3051,
  [SMALL_STATE(168)] = 3061,
  [SMALL_STATE(169)] = 3071,
  [SMALL_STATE(170)] = 3081,
  [SMALL_STATE(171)] = 3091,
  [SMALL_STATE(172)] = 3101,
  [SMALL_STATE(173)] = 3111,
  [SMALL_STATE(174)] = 3121,
  [SMALL_STATE(175)] = 3131,
  [SMALL_STATE(176)] = 3141,
  [SMALL_STATE(177)] = 3151,
  [SMALL_STATE(178)] = 3161,
  [SMALL_STATE(179)] = 3171,
  [SMALL_STATE(180)] = 3181,
  [SMALL_STATE(181)] = 3191,
  [SMALL_STATE(182)] = 3201,
  [SMALL_STATE(183)] = 3211,
  [SMALL_STATE(184)] = 3221,
  [SMALL_STATE(185)] = 3228,
  [SMALL_STATE(186)] = 3235,
  [SMALL_STATE(187)] = 3242,
  [SMALL_STATE(188)] = 3249,
  [SMALL_STATE(189)] = 3256,
  [SMALL_STATE(190)] = 3263,
  [SMALL_STATE(191)] = 3270,
  [SMALL_STATE(192)] = 3277,
  [SMALL_STATE(193)] = 3284,
  [SMALL_STATE(194)] = 3291,
  [SMALL_STATE(195)] = 3298,
  [SMALL_STATE(196)] = 3305,
  [SMALL_STATE(197)] = 3312,
  [SMALL_STATE(198)] = 3316,
  [SMALL_STATE(199)] = 3320,
  [SMALL_STATE(200)] = 3324,
  [SMALL_STATE(201)] = 3328,
  [SMALL_STATE(202)] = 3332,
  [SMALL_STATE(203)] = 3336,
  [SMALL_STATE(204)] = 3340,
  [SMALL_STATE(205)] = 3344,
  [SMALL_STATE(206)] = 3348,
  [SMALL_STATE(207)] = 3352,
  [SMALL_STATE(208)] = 3356,
  [SMALL_STATE(209)] = 3360,
  [SMALL_STATE(210)] = 3364,
  [SMALL_STATE(211)] = 3368,
  [SMALL_STATE(212)] = 3372,
  [SMALL_STATE(213)] = 3376,
  [SMALL_STATE(214)] = 3380,
  [SMALL_STATE(215)] = 3384,
  [SMALL_STATE(216)] = 3388,
  [SMALL_STATE(217)] = 3392,
  [SMALL_STATE(218)] = 3396,
  [SMALL_STATE(219)] = 3400,
  [SMALL_STATE(220)] = 3404,
  [SMALL_STATE(221)] = 3408,
  [SMALL_STATE(222)] = 3412,
  [SMALL_STATE(223)] = 3416,
  [SMALL_STATE(224)] = 3420,
  [SMALL_STATE(225)] = 3424,
  [SMALL_STATE(226)] = 3428,
  [SMALL_STATE(227)] = 3432,
  [SMALL_STATE(228)] = 3436,
  [SMALL_STATE(229)] = 3440,
  [SMALL_STATE(230)] = 3444,
  [SMALL_STATE(231)] = 3448,
  [SMALL_STATE(232)] = 3452,
  [SMALL_STATE(233)] = 3456,
  [SMALL_STATE(234)] = 3460,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(193),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(32),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(21),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(150),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(36),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(219),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(167),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(131),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(193),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(32),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(21),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(150),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(36),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(219),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(167),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(131),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(188),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(28),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(30),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(168),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(98),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(220),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(143),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(133),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(184),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(23),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(26),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(153),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(78),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(212),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(154),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(132),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(194),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(31),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(22),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(182),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(33),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(228),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(144),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(127),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(183),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(24),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(234),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(172),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(156),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag_content, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(164),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(27),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(233),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(160),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(151),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 4, .production_id = 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3, .production_id = 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong_xhtml_tag, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em_xhtml_tag, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2), SHIFT_REPEAT(111),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__link_expression_repeat1, 2), SHIFT_REPEAT(141),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_expression, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(129),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(142),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2), SHIFT_REPEAT(147),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(157),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(162),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(169),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_edoc(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
