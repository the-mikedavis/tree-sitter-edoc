#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 4
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_ATauthor = 1,
  anon_sym_ATsee = 2,
  anon_sym_EQ_EQ = 3,
  anon_sym_EQ_EQ_EQ = 4,
  anon_sym_EQ_EQ_EQ_EQ = 5,
  anon_sym_LBRACE = 6,
  aux_sym_macro_token1 = 7,
  anon_sym_RBRACE = 8,
  anon_sym_TODO_COLON = 9,
  aux_sym_tag_token1 = 10,
  aux_sym_argument_token1 = 11,
  anon_sym_ATlink = 12,
  anon_sym_DOT = 13,
  anon_sym_SLASH = 14,
  anon_sym_COLON = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  sym_arity = 18,
  anon_sym_LTem_GT = 19,
  anon_sym_LT_SLASHem_GT = 20,
  anon_sym_LTstrong_GT = 21,
  anon_sym_LT_SLASHstrong_GT = 22,
  anon_sym_LT = 23,
  aux_sym_xhtml_tag_token1 = 24,
  anon_sym_GT = 25,
  anon_sym_AT_LBRACE = 26,
  anon_sym_AT_RBRACE = 27,
  anon_sym_AT_AT = 28,
  sym_quote_escape = 29,
  anon_sym_BQUOTE = 30,
  aux_sym__inline_quote_token1 = 31,
  anon_sym_SQUOTE = 32,
  anon_sym_BQUOTE_BQUOTE = 33,
  aux_sym__double_inline_quote_token1 = 34,
  anon_sym_SQUOTE_SQUOTE = 35,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 36,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 37,
  sym_language_identifier = 38,
  aux_sym_quote_content_token1 = 39,
  sym__terminator = 40,
  sym__word = 41,
  sym__unquoted_atom = 42,
  sym__escape_sequence = 43,
  sym__quoted_content = 44,
  sym_source = 45,
  sym__line = 46,
  sym__tag_line = 47,
  sym__author_line = 48,
  sym__see_line = 49,
  aux_sym__text_line = 50,
  sym_section = 51,
  sym_macro = 52,
  sym_tag = 53,
  sym_argument = 54,
  sym__link_macro = 55,
  sym_expression = 56,
  sym_module = 57,
  sym_function = 58,
  sym_type = 59,
  sym__xhtml_tag = 60,
  sym_em_xhtml_tag = 61,
  sym_strong_xhtml_tag = 62,
  sym_xhtml_tag = 63,
  sym_xhtml_tag_content = 64,
  sym_macro_escape = 65,
  sym_inline_quote = 66,
  sym__inline_quote = 67,
  sym__double_inline_quote = 68,
  sym__triple_inline_quote = 69,
  sym_block_quote = 70,
  sym_quote_content = 71,
  sym__atom = 72,
  sym__quoted_atom = 73,
  aux_sym_source_repeat1 = 74,
  aux_sym_source_repeat2 = 75,
  aux_sym__author_line_repeat1 = 76,
  aux_sym_argument_repeat1 = 77,
  aux_sym_xhtml_tag_repeat1 = 78,
  aux_sym_xhtml_tag_content_repeat1 = 79,
  aux_sym__double_inline_quote_repeat1 = 80,
  aux_sym_quote_content_repeat1 = 81,
  aux_sym__quoted_atom_repeat1 = 82,
  alias_sym_description = 83,
  alias_sym_email_address = 84,
  alias_sym_quote_marker = 85,
  alias_sym_section_content = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATauthor] = "tag",
  [anon_sym_ATsee] = "tag",
  [anon_sym_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ] = "section_marker",
  [anon_sym_EQ_EQ_EQ_EQ] = "section_marker",
  [anon_sym_LBRACE] = "{",
  [aux_sym_macro_token1] = "macro_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_TODO_COLON] = "TODO:",
  [aux_sym_tag_token1] = "tag_token1",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_ATlink] = "tag",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_arity] = "arity",
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
  [sym__unquoted_atom] = "_unquoted_atom",
  [sym__escape_sequence] = "_escape_sequence",
  [sym__quoted_content] = "_quoted_content",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym__tag_line] = "_tag_line",
  [sym__author_line] = "_author_line",
  [sym__see_line] = "_see_line",
  [aux_sym__text_line] = "_text_line",
  [sym_section] = "section",
  [sym_macro] = "macro",
  [sym_tag] = "tag",
  [sym_argument] = "argument",
  [sym__link_macro] = "_link_macro",
  [sym_expression] = "expression",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym_type] = "type",
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
  [sym__atom] = "_atom",
  [sym__quoted_atom] = "_quoted_atom",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym__author_line_repeat1] = "_author_line_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_xhtml_tag_repeat1] = "xhtml_tag_repeat1",
  [aux_sym_xhtml_tag_content_repeat1] = "xhtml_tag_content_repeat1",
  [aux_sym__double_inline_quote_repeat1] = "_double_inline_quote_repeat1",
  [aux_sym_quote_content_repeat1] = "quote_content_repeat1",
  [aux_sym__quoted_atom_repeat1] = "_quoted_atom_repeat1",
  [alias_sym_description] = "description",
  [alias_sym_email_address] = "email_address",
  [alias_sym_quote_marker] = "quote_marker",
  [alias_sym_section_content] = "section_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_ATauthor] = sym_tag,
  [anon_sym_ATsee] = sym_tag,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_macro_token1] = aux_sym_macro_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_TODO_COLON] = anon_sym_TODO_COLON,
  [aux_sym_tag_token1] = aux_sym_tag_token1,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_ATlink] = sym_tag,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_arity] = sym_arity,
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
  [sym__unquoted_atom] = sym__unquoted_atom,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym__quoted_content] = sym__quoted_content,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym__tag_line] = sym__tag_line,
  [sym__author_line] = sym__author_line,
  [sym__see_line] = sym__see_line,
  [aux_sym__text_line] = aux_sym__text_line,
  [sym_section] = sym_section,
  [sym_macro] = sym_macro,
  [sym_tag] = sym_tag,
  [sym_argument] = sym_argument,
  [sym__link_macro] = sym__link_macro,
  [sym_expression] = sym_expression,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym_type] = sym_type,
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
  [sym__atom] = sym__atom,
  [sym__quoted_atom] = sym__quoted_atom,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym__author_line_repeat1] = aux_sym__author_line_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_xhtml_tag_repeat1] = aux_sym_xhtml_tag_repeat1,
  [aux_sym_xhtml_tag_content_repeat1] = aux_sym_xhtml_tag_content_repeat1,
  [aux_sym__double_inline_quote_repeat1] = aux_sym__double_inline_quote_repeat1,
  [aux_sym_quote_content_repeat1] = aux_sym_quote_content_repeat1,
  [aux_sym__quoted_atom_repeat1] = aux_sym__quoted_atom_repeat1,
  [alias_sym_description] = alias_sym_description,
  [alias_sym_email_address] = alias_sym_email_address,
  [alias_sym_quote_marker] = alias_sym_quote_marker,
  [alias_sym_section_content] = alias_sym_section_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATauthor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsee] = {
    .visible = true,
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
  [anon_sym_TODO_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_arity] = {
    .visible = true,
    .named = true,
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
  [sym__unquoted_atom] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_content] = {
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
  [sym__author_line] = {
    .visible = false,
    .named = true,
  },
  [sym__see_line] = {
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym__link_macro] = {
    .visible = false,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
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
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_atom] = {
    .visible = false,
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
  [aux_sym__author_line_repeat1] = {
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
  [aux_sym__quoted_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_description] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_email_address] = {
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
  [5] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_language, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_email_address,
  },
  [2] = {
    [2] = alias_sym_email_address,
  },
  [3] = {
    [1] = alias_sym_section_content,
  },
  [4] = {
    [0] = alias_sym_quote_marker,
    [2] = alias_sym_quote_marker,
  },
  [5] = {
    [0] = alias_sym_quote_marker,
    [3] = alias_sym_quote_marker,
  },
  [6] = {
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
  sym_xhtml_tag, 2,
    sym_xhtml_tag,
    alias_sym_email_address,
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
  [10] = 10,
  [11] = 6,
  [12] = 6,
  [13] = 13,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 23,
  [27] = 27,
  [28] = 24,
  [29] = 27,
  [30] = 23,
  [31] = 24,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 33,
  [46] = 46,
  [47] = 36,
  [48] = 48,
  [49] = 49,
  [50] = 34,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 36,
  [56] = 56,
  [57] = 40,
  [58] = 41,
  [59] = 42,
  [60] = 43,
  [61] = 44,
  [62] = 33,
  [63] = 48,
  [64] = 49,
  [65] = 51,
  [66] = 46,
  [67] = 46,
  [68] = 56,
  [69] = 38,
  [70] = 53,
  [71] = 51,
  [72] = 53,
  [73] = 49,
  [74] = 48,
  [75] = 56,
  [76] = 46,
  [77] = 33,
  [78] = 44,
  [79] = 39,
  [80] = 52,
  [81] = 37,
  [82] = 36,
  [83] = 37,
  [84] = 38,
  [85] = 39,
  [86] = 43,
  [87] = 40,
  [88] = 41,
  [89] = 42,
  [90] = 43,
  [91] = 42,
  [92] = 44,
  [93] = 52,
  [94] = 48,
  [95] = 41,
  [96] = 49,
  [97] = 51,
  [98] = 40,
  [99] = 53,
  [100] = 39,
  [101] = 38,
  [102] = 37,
  [103] = 52,
  [104] = 56,
  [105] = 34,
  [106] = 37,
  [107] = 107,
  [108] = 107,
  [109] = 37,
  [110] = 34,
  [111] = 52,
  [112] = 112,
  [113] = 49,
  [114] = 48,
  [115] = 44,
  [116] = 107,
  [117] = 36,
  [118] = 34,
  [119] = 107,
  [120] = 52,
  [121] = 51,
  [122] = 49,
  [123] = 48,
  [124] = 44,
  [125] = 36,
  [126] = 51,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 127,
  [131] = 131,
  [132] = 131,
  [133] = 131,
  [134] = 134,
  [135] = 128,
  [136] = 127,
  [137] = 131,
  [138] = 138,
  [139] = 127,
  [140] = 128,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 149,
  [151] = 151,
  [152] = 149,
  [153] = 149,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 158,
  [163] = 160,
  [164] = 157,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 160,
  [169] = 169,
  [170] = 160,
  [171] = 171,
  [172] = 172,
  [173] = 171,
  [174] = 174,
  [175] = 175,
  [176] = 166,
  [177] = 169,
  [178] = 171,
  [179] = 158,
  [180] = 157,
  [181] = 157,
  [182] = 174,
  [183] = 158,
  [184] = 166,
  [185] = 171,
  [186] = 169,
  [187] = 169,
  [188] = 171,
  [189] = 166,
  [190] = 157,
  [191] = 158,
  [192] = 166,
  [193] = 169,
  [194] = 158,
  [195] = 171,
  [196] = 175,
  [197] = 157,
  [198] = 158,
  [199] = 166,
  [200] = 171,
  [201] = 169,
  [202] = 202,
  [203] = 54,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 207,
  [208] = 202,
  [209] = 204,
  [210] = 202,
  [211] = 204,
  [212] = 202,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 214,
  [218] = 51,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 215,
  [224] = 222,
  [225] = 220,
  [226] = 215,
  [227] = 221,
  [228] = 219,
  [229] = 219,
  [230] = 214,
  [231] = 216,
  [232] = 219,
  [233] = 219,
  [234] = 234,
  [235] = 235,
  [236] = 221,
  [237] = 216,
  [238] = 216,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 220,
  [243] = 219,
  [244] = 244,
  [245] = 222,
  [246] = 221,
  [247] = 247,
  [248] = 222,
  [249] = 241,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 220,
  [255] = 241,
  [256] = 256,
  [257] = 241,
  [258] = 258,
  [259] = 215,
  [260] = 214,
  [261] = 36,
  [262] = 241,
  [263] = 241,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '@') ADVANCE(30);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '}') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z') ||
          (224 <= lookahead && lookahead <= 246) ||
          (248 <= lookahead && lookahead <= 255)) ADVANCE(157);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(132);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(134);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(165);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(164);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(128);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(121);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(117);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(126);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(129);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(130);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(122);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(33);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 23:
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(107);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(106);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == '@') ADVANCE(87);
      if (lookahead == '}') ADVANCE(73);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(88);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(161);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == '`') ADVANCE(156);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == '{') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == '}') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '}') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(114);
      END_STATE();
    case 59:
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(128);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(131);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(60)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(61)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ATauthor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATsee);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_macro_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_TODO_COLON);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'h') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'k') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (lookahead == 'u') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_tag_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(110);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead == '}') ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '@') ADVANCE(87);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ATlink);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_arity);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LTem_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_SLASHem_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LTstrong_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_SLASHstrong_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_xhtml_tag_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AT_LBRACE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_AT_RBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_quote_escape);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '`') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__inline_quote_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      if (lookahead == '`') ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(121);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(121);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(117);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__double_inline_quote_token1);
      if (lookahead == '\'') ADVANCE(122);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(117);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_language_identifier);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead == '\'') ADVANCE(129);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(130);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_quote_content_token1);
      if (lookahead != 0 &&
          (lookahead < 1 || '\t' < lookahead) &&
          (lookahead < 17 || ' ' < lookahead) &&
          (lookahead < 128 || 160 < lookahead)) ADVANCE(128);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__terminator);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(133);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(134);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(102);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(145);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(149);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '`') ADVANCE(112);
      if (lookahead == '{') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if ((1 <= lookahead && lookahead <= 8) ||
          (17 <= lookahead && lookahead <= 31) ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 's') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          (lookahead < '`' || '{' < lookahead)) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '<') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '`' &&
          lookahead != '{') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__unquoted_atom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (192 <= lookahead && lookahead <= 255)) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '{') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__quoted_content);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(165);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (17 <= lookahead && lookahead <= ' ') ||
          (128 <= lookahead && lookahead <= 160)) ADVANCE(164);
      if (lookahead != 0) ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead == '^') ADVANCE(162);
      if (lookahead == 'x') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(161);
      if ((' ' <= lookahead && lookahead <= 127)) ADVANCE(158);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__quoted_content);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 61},
  [4] = {.lex_state = 61},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 22},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 22},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 22},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 20},
  [90] = {.lex_state = 20},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 21},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 21},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 31},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 31},
  [131] = {.lex_state = 11},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 31},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 31},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 31},
  [139] = {.lex_state = 31},
  [140] = {.lex_state = 31},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 31},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 17},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 16},
  [158] = {.lex_state = 25},
  [159] = {.lex_state = 25},
  [160] = {.lex_state = 59},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 59},
  [164] = {.lex_state = 16},
  [165] = {.lex_state = 15},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 59},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 59},
  [171] = {.lex_state = 25},
  [172] = {.lex_state = 15},
  [173] = {.lex_state = 25},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 12},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 25},
  [179] = {.lex_state = 25},
  [180] = {.lex_state = 16},
  [181] = {.lex_state = 16},
  [182] = {.lex_state = 12},
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 12},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 16},
  [188] = {.lex_state = 25},
  [189] = {.lex_state = 12},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 25},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 25},
  [195] = {.lex_state = 25},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 25},
  [199] = {.lex_state = 12},
  [200] = {.lex_state = 25},
  [201] = {.lex_state = 16},
  [202] = {.lex_state = 54},
  [203] = {.lex_state = 54},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 54},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 54},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 54},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 17},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 58},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 17},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 58},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 58},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 58},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 58},
  [263] = {.lex_state = 58},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATauthor] = ACTIONS(1),
    [anon_sym_ATsee] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TODO_COLON] = ACTIONS(1),
    [aux_sym_tag_token1] = ACTIONS(1),
    [anon_sym_ATlink] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_arity] = ACTIONS(1),
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
    [sym__terminator] = ACTIONS(1),
    [sym__unquoted_atom] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(247),
    [sym__line] = STATE(207),
    [sym__tag_line] = STATE(207),
    [sym__author_line] = STATE(207),
    [sym__see_line] = STATE(207),
    [aux_sym__text_line] = STATE(13),
    [sym_section] = STATE(207),
    [sym_macro] = STATE(79),
    [sym_tag] = STATE(9),
    [sym__link_macro] = STATE(69),
    [sym__xhtml_tag] = STATE(79),
    [sym_em_xhtml_tag] = STATE(79),
    [sym_strong_xhtml_tag] = STATE(79),
    [sym_xhtml_tag] = STATE(79),
    [sym_inline_quote] = STATE(79),
    [sym__inline_quote] = STATE(81),
    [sym__double_inline_quote] = STATE(81),
    [sym__triple_inline_quote] = STATE(81),
    [sym_block_quote] = STATE(79),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATauthor] = ACTIONS(5),
    [anon_sym_ATsee] = ACTIONS(7),
    [anon_sym_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_TODO_COLON] = ACTIONS(17),
    [aux_sym_tag_token1] = ACTIONS(17),
    [anon_sym_LTem_GT] = ACTIONS(19),
    [anon_sym_LTstrong_GT] = ACTIONS(21),
    [anon_sym_LT] = ACTIONS(23),
    [sym_quote_escape] = ACTIONS(25),
    [anon_sym_BQUOTE] = ACTIONS(27),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(29),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(31),
    [sym__terminator] = ACTIONS(33),
    [sym__word] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_ATsee,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LTem_GT,
    ACTIONS(21), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__terminator,
    STATE(4), 1,
      aux_sym_source_repeat2,
    STATE(9), 1,
      sym_tag,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(19), 1,
      aux_sym_source_repeat1,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(17), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(25), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(207), 5,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym_section,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [87] = 22,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_ATauthor,
    ACTIONS(44), 1,
      anon_sym_ATsee,
    ACTIONS(47), 1,
      anon_sym_EQ_EQ,
    ACTIONS(50), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(53), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_LTem_GT,
    ACTIONS(65), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(68), 1,
      anon_sym_LT,
    ACTIONS(74), 1,
      anon_sym_BQUOTE,
    ACTIONS(77), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(80), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(9), 1,
      sym_tag,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(59), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(71), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(207), 5,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym_section,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [168] = 22,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_ATsee,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LTem_GT,
    ACTIONS(21), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(9), 1,
      sym_tag,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(17), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(25), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(207), 5,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym_section,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [249] = 22,
    ACTIONS(5), 1,
      anon_sym_ATauthor,
    ACTIONS(7), 1,
      anon_sym_ATsee,
    ACTIONS(9), 1,
      anon_sym_EQ_EQ,
    ACTIONS(11), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(13), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LTem_GT,
    ACTIONS(21), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat2,
    STATE(9), 1,
      sym_tag,
    STATE(13), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(17), 2,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
    ACTIONS(25), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(207), 5,
      sym__line,
      sym__tag_line,
      sym__author_line,
      sym__see_line,
      sym_section,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [330] = 13,
    ACTIONS(85), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(90), 1,
      anon_sym_LTem_GT,
    ACTIONS(93), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(96), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_BQUOTE,
    ACTIONS(105), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(108), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(38), 1,
      sym__link_macro,
    ACTIONS(99), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(39), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [379] = 13,
    ACTIONS(111), 1,
      anon_sym_EQ_EQ,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_LTem_GT,
    ACTIONS(117), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(125), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(127), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(101), 1,
      sym__link_macro,
    ACTIONS(121), 2,
      sym_quote_escape,
      sym__word,
    STATE(102), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(100), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [428] = 13,
    ACTIONS(111), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LTem_GT,
    ACTIONS(133), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(141), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(84), 1,
      sym__link_macro,
    ACTIONS(137), 2,
      sym_quote_escape,
      sym__word,
    STATE(83), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [477] = 13,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LTem_GT,
    ACTIONS(21), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(145), 1,
      sym__terminator,
    STATE(10), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(25), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [526] = 13,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LTem_GT,
    ACTIONS(21), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(147), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(25), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [575] = 13,
    ACTIONS(85), 1,
      anon_sym_EQ_EQ,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_LTem_GT,
    ACTIONS(155), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(158), 1,
      anon_sym_LT,
    ACTIONS(164), 1,
      anon_sym_BQUOTE,
    ACTIONS(167), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(170), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(11), 1,
      aux_sym__text_line,
    STATE(101), 1,
      sym__link_macro,
    ACTIONS(161), 2,
      sym_quote_escape,
      sym__word,
    STATE(102), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(100), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [624] = 13,
    ACTIONS(85), 1,
      sym__terminator,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LTem_GT,
    ACTIONS(179), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(182), 1,
      anon_sym_LT,
    ACTIONS(188), 1,
      anon_sym_BQUOTE,
    ACTIONS(191), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(194), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(185), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [673] = 13,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LTem_GT,
    ACTIONS(21), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(23), 1,
      anon_sym_LT,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(197), 1,
      sym__terminator,
    STATE(12), 1,
      aux_sym__text_line,
    STATE(69), 1,
      sym__link_macro,
    ACTIONS(25), 2,
      sym_quote_escape,
      sym__word,
    STATE(81), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(79), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [722] = 13,
    ACTIONS(85), 1,
      anon_sym_EQ_EQ_EQ_EQ,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_LTem_GT,
    ACTIONS(205), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(208), 1,
      anon_sym_LT,
    ACTIONS(214), 1,
      anon_sym_BQUOTE,
    ACTIONS(217), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(220), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(14), 1,
      aux_sym__text_line,
    STATE(84), 1,
      sym__link_macro,
    ACTIONS(211), 2,
      sym_quote_escape,
      sym__word,
    STATE(83), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [771] = 13,
    ACTIONS(111), 1,
      anon_sym_EQ_EQ_EQ,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_LTem_GT,
    ACTIONS(227), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_BQUOTE,
    ACTIONS(235), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(237), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(6), 1,
      aux_sym__text_line,
    STATE(38), 1,
      sym__link_macro,
    ACTIONS(231), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(39), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [820] = 12,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_LTem_GT,
    ACTIONS(227), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(229), 1,
      anon_sym_LT,
    ACTIONS(233), 1,
      anon_sym_BQUOTE,
    ACTIONS(235), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(237), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(15), 1,
      aux_sym__text_line,
    STATE(38), 1,
      sym__link_macro,
    ACTIONS(231), 2,
      sym_quote_escape,
      sym__word,
    STATE(37), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(39), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [866] = 12,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_LTem_GT,
    ACTIONS(117), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(119), 1,
      anon_sym_LT,
    ACTIONS(123), 1,
      anon_sym_BQUOTE,
    ACTIONS(125), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(127), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(7), 1,
      aux_sym__text_line,
    STATE(101), 1,
      sym__link_macro,
    ACTIONS(121), 2,
      sym_quote_escape,
      sym__word,
    STATE(102), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(100), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [912] = 12,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 1,
      anon_sym_LTem_GT,
    ACTIONS(133), 1,
      anon_sym_LTstrong_GT,
    ACTIONS(135), 1,
      anon_sym_LT,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(141), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(143), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym__text_line,
    STATE(84), 1,
      sym__link_macro,
    ACTIONS(137), 2,
      sym_quote_escape,
      sym__word,
    STATE(83), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
    STATE(85), 7,
      sym_macro,
      sym__xhtml_tag,
      sym_em_xhtml_tag,
      sym_strong_xhtml_tag,
      sym_xhtml_tag,
      sym_inline_quote,
      sym_block_quote,
  [958] = 4,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      sym__terminator,
    STATE(19), 1,
      aux_sym_source_repeat1,
    ACTIONS(241), 16,
      anon_sym_ATauthor,
      anon_sym_ATsee,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [986] = 4,
    ACTIONS(37), 1,
      sym__terminator,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_repeat1,
    ACTIONS(246), 16,
      anon_sym_ATauthor,
      anon_sym_ATsee,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_LBRACE,
      anon_sym_TODO_COLON,
      aux_sym_tag_token1,
      anon_sym_LTem_GT,
      anon_sym_LTstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__word,
  [1014] = 8,
    ACTIONS(248), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(250), 1,
      anon_sym_LT,
    ACTIONS(256), 1,
      anon_sym_BQUOTE,
    ACTIONS(259), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(262), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(253), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(21), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(109), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1045] = 8,
    ACTIONS(248), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(265), 1,
      anon_sym_LT,
    ACTIONS(271), 1,
      anon_sym_BQUOTE,
    ACTIONS(274), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(277), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(268), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(22), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1076] = 8,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(284), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(230), 1,
      sym_xhtml_tag_content,
    ACTIONS(282), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1107] = 8,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(298), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(231), 1,
      sym_xhtml_tag_content,
    ACTIONS(292), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(109), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1138] = 8,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(298), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(238), 1,
      sym_xhtml_tag_content,
    ACTIONS(292), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(109), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1169] = 8,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(284), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(260), 1,
      sym_xhtml_tag_content,
    ACTIONS(282), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1200] = 8,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(284), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(300), 1,
      anon_sym_LT_SLASHstrong_GT,
    ACTIONS(302), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(22), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1231] = 8,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(298), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(216), 1,
      sym_xhtml_tag_content,
    ACTIONS(292), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(109), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1262] = 8,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(298), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(300), 1,
      anon_sym_LT_SLASHem_GT,
    ACTIONS(304), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(21), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(109), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1293] = 8,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(284), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(214), 1,
      sym_xhtml_tag_content,
    ACTIONS(282), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1324] = 8,
    ACTIONS(290), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    ACTIONS(296), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(298), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(237), 1,
      sym_xhtml_tag_content,
    ACTIONS(292), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(29), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(109), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1355] = 8,
    ACTIONS(280), 1,
      anon_sym_LT,
    ACTIONS(284), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 1,
      anon_sym_BQUOTE_BQUOTE,
    ACTIONS(288), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(217), 1,
      sym_xhtml_tag_content,
    ACTIONS(282), 3,
      sym_quote_escape,
      sym__terminator,
      sym__word,
    STATE(27), 3,
      sym_xhtml_tag,
      sym_inline_quote,
      aux_sym_xhtml_tag_content_repeat1,
    STATE(106), 3,
      sym__inline_quote,
      sym__double_inline_quote,
      sym__triple_inline_quote,
  [1386] = 1,
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
  [1399] = 1,
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
  [1412] = 1,
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
  [1425] = 1,
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
  [1438] = 1,
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
  [1451] = 1,
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
  [1464] = 1,
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
  [1477] = 1,
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
  [1490] = 1,
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
  [1503] = 1,
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
  [1516] = 1,
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
  [1529] = 1,
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
  [1542] = 1,
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
  [1555] = 1,
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
  [1568] = 1,
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
  [1581] = 1,
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
  [1594] = 1,
    ACTIONS(332), 10,
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
  [1607] = 1,
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
  [1620] = 1,
    ACTIONS(334), 10,
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
  [1633] = 1,
    ACTIONS(336), 10,
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
  [1646] = 1,
    ACTIONS(338), 10,
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
  [1659] = 1,
    ACTIONS(340), 10,
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
  [1672] = 1,
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
  [1685] = 1,
    ACTIONS(342), 10,
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
  [1698] = 1,
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
  [1711] = 1,
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
  [1724] = 1,
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
  [1737] = 1,
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
  [1750] = 1,
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
  [1763] = 1,
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
  [1776] = 1,
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
  [1789] = 1,
    ACTIONS(332), 10,
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
  [1802] = 1,
    ACTIONS(334), 10,
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
  [1815] = 1,
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
  [1828] = 1,
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
  [1841] = 1,
    ACTIONS(342), 10,
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
  [1854] = 1,
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
  [1867] = 1,
    ACTIONS(338), 10,
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
  [1880] = 1,
    ACTIONS(334), 10,
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
  [1893] = 1,
    ACTIONS(338), 10,
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
  [1906] = 1,
    ACTIONS(332), 10,
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
  [1919] = 1,
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
  [1932] = 1,
    ACTIONS(342), 10,
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
  [1945] = 1,
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
  [1958] = 1,
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
  [1971] = 1,
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
  [1984] = 1,
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
  [1997] = 1,
    ACTIONS(336), 10,
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
  [2010] = 1,
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
  [2023] = 1,
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
  [2036] = 1,
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
  [2049] = 1,
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
  [2062] = 1,
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
  [2075] = 1,
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
  [2088] = 1,
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
  [2101] = 1,
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
  [2114] = 1,
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
  [2127] = 1,
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
  [2140] = 1,
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
  [2153] = 1,
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
  [2166] = 1,
    ACTIONS(336), 10,
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
  [2179] = 1,
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
  [2192] = 1,
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
  [2205] = 1,
    ACTIONS(332), 10,
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
  [2218] = 1,
    ACTIONS(334), 10,
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
  [2231] = 1,
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
  [2244] = 1,
    ACTIONS(338), 10,
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
  [2257] = 1,
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
  [2270] = 1,
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
  [2283] = 1,
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
  [2296] = 1,
    ACTIONS(336), 10,
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
  [2309] = 1,
    ACTIONS(342), 10,
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
  [2322] = 1,
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
  [2335] = 1,
    ACTIONS(312), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2346] = 7,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym__unquoted_atom,
    STATE(156), 1,
      sym_module,
    STATE(211), 1,
      sym_expression,
    STATE(234), 1,
      sym_function,
    STATE(235), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2369] = 7,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym__unquoted_atom,
    STATE(156), 1,
      sym_module,
    STATE(209), 1,
      sym_expression,
    STATE(234), 1,
      sym_function,
    STATE(235), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2392] = 1,
    ACTIONS(312), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2403] = 1,
    ACTIONS(308), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2414] = 1,
    ACTIONS(336), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2425] = 7,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym__unquoted_atom,
    STATE(156), 1,
      sym_module,
    STATE(213), 1,
      sym_expression,
    STATE(234), 1,
      sym_function,
    STATE(235), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2448] = 1,
    ACTIONS(332), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2459] = 1,
    ACTIONS(330), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2470] = 1,
    ACTIONS(326), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2481] = 7,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym__unquoted_atom,
    STATE(156), 1,
      sym_module,
    STATE(205), 1,
      sym_expression,
    STATE(234), 1,
      sym_function,
    STATE(235), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2504] = 1,
    ACTIONS(310), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2515] = 1,
    ACTIONS(308), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2526] = 7,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(346), 1,
      sym__unquoted_atom,
    STATE(156), 1,
      sym_module,
    STATE(204), 1,
      sym_expression,
    STATE(234), 1,
      sym_function,
    STATE(235), 1,
      sym_type,
    STATE(143), 2,
      sym__atom,
      sym__quoted_atom,
  [2549] = 1,
    ACTIONS(336), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2560] = 1,
    ACTIONS(334), 8,
      anon_sym_LT_SLASHem_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2571] = 1,
    ACTIONS(332), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2582] = 1,
    ACTIONS(330), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2593] = 1,
    ACTIONS(326), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2604] = 1,
    ACTIONS(310), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2615] = 1,
    ACTIONS(334), 8,
      anon_sym_LT_SLASHstrong_GT,
      anon_sym_LT,
      sym_quote_escape,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      sym__terminator,
      sym__word,
  [2626] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(248), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2642] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(220), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2658] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(225), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2674] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(224), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2690] = 7,
    ACTIONS(352), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(354), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(356), 1,
      sym_language_identifier,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(189), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(227), 1,
      sym_quote_content,
  [2712] = 7,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    ACTIONS(360), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(364), 1,
      sym_language_identifier,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(199), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(236), 1,
      sym_quote_content,
  [2734] = 7,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    ACTIONS(366), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(368), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(370), 1,
      sym_language_identifier,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(192), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(221), 1,
      sym_quote_content,
  [2756] = 4,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      aux_sym_argument_token1,
    STATE(134), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(377), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2772] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(242), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2788] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(245), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2804] = 7,
    ACTIONS(358), 1,
      aux_sym_quote_content_token1,
    ACTIONS(380), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(382), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(384), 1,
      sym_language_identifier,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(166), 1,
      aux_sym__double_inline_quote_repeat1,
    STATE(246), 1,
      sym_quote_content,
  [2826] = 4,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 1,
      aux_sym_argument_token1,
    STATE(134), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2842] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(222), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2858] = 4,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(254), 1,
      sym_argument,
    STATE(138), 2,
      sym_macro_escape,
      aux_sym_argument_repeat1,
    ACTIONS(350), 3,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2874] = 1,
    ACTIONS(390), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym__terminator,
  [2883] = 1,
    ACTIONS(392), 6,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_LPAREN,
      sym__terminator,
  [2892] = 3,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    ACTIONS(394), 4,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_COLON,
      sym__terminator,
  [2905] = 5,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
    ACTIONS(400), 1,
      sym__unquoted_atom,
    STATE(239), 1,
      sym_function,
    STATE(244), 1,
      sym_type,
    STATE(206), 2,
      sym__atom,
      sym__quoted_atom,
  [2922] = 1,
    ACTIONS(402), 5,
      anon_sym_RBRACE,
      aux_sym_argument_token1,
      anon_sym_AT_LBRACE,
      anon_sym_AT_RBRACE,
      anon_sym_AT_AT,
  [2930] = 5,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(406), 1,
      sym__terminator,
    ACTIONS(408), 1,
      sym__word,
    STATE(154), 1,
      aux_sym__author_line_repeat1,
    STATE(250), 1,
      sym_xhtml_tag,
  [2946] = 5,
    ACTIONS(404), 1,
      anon_sym_LT,
    ACTIONS(410), 1,
      sym__terminator,
    ACTIONS(412), 1,
      sym__word,
    STATE(146), 1,
      aux_sym__author_line_repeat1,
    STATE(240), 1,
      sym_xhtml_tag,
  [2962] = 3,
    ACTIONS(414), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(416), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [2973] = 4,
    ACTIONS(418), 1,
      anon_sym_TODO_COLON,
    ACTIONS(420), 1,
      aux_sym_tag_token1,
    ACTIONS(422), 1,
      anon_sym_ATlink,
    STATE(210), 1,
      sym_tag,
  [2986] = 4,
    ACTIONS(418), 1,
      anon_sym_TODO_COLON,
    ACTIONS(420), 1,
      aux_sym_tag_token1,
    ACTIONS(424), 1,
      anon_sym_ATlink,
    STATE(202), 1,
      sym_tag,
  [2999] = 3,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(428), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [3010] = 4,
    ACTIONS(418), 1,
      anon_sym_TODO_COLON,
    ACTIONS(420), 1,
      aux_sym_tag_token1,
    ACTIONS(431), 1,
      anon_sym_ATlink,
    STATE(212), 1,
      sym_tag,
  [3023] = 4,
    ACTIONS(418), 1,
      anon_sym_TODO_COLON,
    ACTIONS(420), 1,
      aux_sym_tag_token1,
    ACTIONS(433), 1,
      anon_sym_ATlink,
    STATE(208), 1,
      sym_tag,
  [3036] = 3,
    ACTIONS(437), 1,
      sym__word,
    STATE(154), 1,
      aux_sym__author_line_repeat1,
    ACTIONS(435), 2,
      anon_sym_LT,
      sym__terminator,
  [3047] = 3,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      aux_sym__quoted_atom_repeat1,
    ACTIONS(442), 2,
      sym__escape_sequence,
      sym__quoted_content,
  [3058] = 2,
    ACTIONS(446), 1,
      anon_sym_COLON,
    ACTIONS(444), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__terminator,
  [3067] = 3,
    ACTIONS(448), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(450), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(201), 1,
      aux_sym__double_inline_quote_repeat1,
  [3077] = 3,
    ACTIONS(452), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(454), 1,
      anon_sym_GT,
    STATE(173), 1,
      aux_sym_xhtml_tag_repeat1,
  [3087] = 3,
    ACTIONS(456), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(459), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3097] = 3,
    ACTIONS(461), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(223), 1,
      sym_quote_content,
  [3107] = 1,
    ACTIONS(463), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__terminator,
  [3113] = 3,
    ACTIONS(465), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(467), 1,
      anon_sym_GT,
    STATE(171), 1,
      aux_sym_xhtml_tag_repeat1,
  [3123] = 3,
    ACTIONS(461), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(259), 1,
      sym_quote_content,
  [3133] = 3,
    ACTIONS(469), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(169), 1,
      aux_sym__double_inline_quote_repeat1,
  [3143] = 3,
    ACTIONS(473), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(475), 1,
      aux_sym_quote_content_token1,
    STATE(172), 1,
      aux_sym_quote_content_repeat1,
  [3153] = 3,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(479), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3163] = 1,
    ACTIONS(481), 3,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym__terminator,
  [3169] = 3,
    ACTIONS(461), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(215), 1,
      sym_quote_content,
  [3179] = 3,
    ACTIONS(483), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(485), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3189] = 3,
    ACTIONS(461), 1,
      aux_sym_quote_content_token1,
    STATE(165), 1,
      aux_sym_quote_content_repeat1,
    STATE(226), 1,
      sym_quote_content,
  [3199] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(489), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3209] = 3,
    ACTIONS(491), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(493), 1,
      aux_sym_quote_content_token1,
    STATE(172), 1,
      aux_sym_quote_content_repeat1,
  [3219] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(496), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3229] = 3,
    ACTIONS(498), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(500), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(184), 1,
      aux_sym__double_inline_quote_repeat1,
  [3239] = 3,
    ACTIONS(502), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(505), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3249] = 3,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(507), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3259] = 3,
    ACTIONS(483), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(509), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3269] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(511), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3279] = 3,
    ACTIONS(513), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(515), 1,
      anon_sym_GT,
    STATE(185), 1,
      aux_sym_xhtml_tag_repeat1,
  [3289] = 3,
    ACTIONS(517), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(519), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(187), 1,
      aux_sym__double_inline_quote_repeat1,
  [3299] = 3,
    ACTIONS(521), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(523), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(177), 1,
      aux_sym__double_inline_quote_repeat1,
  [3309] = 3,
    ACTIONS(525), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(176), 1,
      aux_sym__double_inline_quote_repeat1,
  [3319] = 3,
    ACTIONS(529), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(531), 1,
      anon_sym_GT,
    STATE(178), 1,
      aux_sym_xhtml_tag_repeat1,
  [3329] = 3,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(533), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3339] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(535), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3349] = 3,
    ACTIONS(483), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(537), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3359] = 3,
    ACTIONS(483), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3369] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(541), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3379] = 3,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(543), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3389] = 3,
    ACTIONS(545), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(547), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(186), 1,
      aux_sym__double_inline_quote_repeat1,
  [3399] = 3,
    ACTIONS(549), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(551), 1,
      anon_sym_GT,
    STATE(188), 1,
      aux_sym_xhtml_tag_repeat1,
  [3409] = 3,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(553), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3419] = 3,
    ACTIONS(483), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(555), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3429] = 3,
    ACTIONS(557), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(559), 1,
      anon_sym_GT,
    STATE(200), 1,
      aux_sym_xhtml_tag_repeat1,
  [3439] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(561), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3449] = 3,
    ACTIONS(505), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(563), 1,
      aux_sym__double_inline_quote_token1,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3459] = 3,
    ACTIONS(566), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(568), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(193), 1,
      aux_sym__double_inline_quote_repeat1,
  [3469] = 3,
    ACTIONS(570), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(572), 1,
      anon_sym_GT,
    STATE(195), 1,
      aux_sym_xhtml_tag_repeat1,
  [3479] = 3,
    ACTIONS(477), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(574), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(196), 1,
      aux_sym__double_inline_quote_repeat1,
  [3489] = 3,
    ACTIONS(487), 1,
      aux_sym_xhtml_tag_token1,
    ACTIONS(576), 1,
      anon_sym_GT,
    STATE(159), 1,
      aux_sym_xhtml_tag_repeat1,
  [3499] = 3,
    ACTIONS(483), 1,
      aux_sym__double_inline_quote_token1,
    ACTIONS(578), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(175), 1,
      aux_sym__double_inline_quote_repeat1,
  [3509] = 2,
    ACTIONS(580), 1,
      aux_sym_macro_token1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [3516] = 2,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      aux_sym_macro_token1,
  [3523] = 2,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
    ACTIONS(588), 1,
      anon_sym_DOT,
  [3530] = 2,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
    ACTIONS(592), 1,
      anon_sym_DOT,
  [3537] = 2,
    ACTIONS(396), 1,
      anon_sym_SLASH,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
  [3544] = 2,
    ACTIONS(594), 1,
      sym__terminator,
    STATE(20), 1,
      aux_sym_source_repeat1,
  [3551] = 2,
    ACTIONS(596), 1,
      aux_sym_macro_token1,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
  [3558] = 2,
    ACTIONS(600), 1,
      anon_sym_RBRACE,
    ACTIONS(602), 1,
      anon_sym_DOT,
  [3565] = 2,
    ACTIONS(604), 1,
      aux_sym_macro_token1,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
  [3572] = 2,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    ACTIONS(610), 1,
      anon_sym_DOT,
  [3579] = 2,
    ACTIONS(612), 1,
      aux_sym_macro_token1,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [3586] = 1,
    ACTIONS(616), 1,
      sym__terminator,
  [3590] = 1,
    ACTIONS(618), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3594] = 1,
    ACTIONS(620), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3598] = 1,
    ACTIONS(622), 1,
      anon_sym_LT_SLASHem_GT,
  [3602] = 1,
    ACTIONS(624), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3606] = 1,
    ACTIONS(626), 1,
      sym__terminator,
  [3610] = 1,
    ACTIONS(628), 1,
      anon_sym_SQUOTE,
  [3614] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [3618] = 1,
    ACTIONS(632), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3622] = 1,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
  [3626] = 1,
    ACTIONS(636), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3630] = 1,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
  [3634] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [3638] = 1,
    ACTIONS(642), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3642] = 1,
    ACTIONS(644), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3646] = 1,
    ACTIONS(646), 1,
      anon_sym_SQUOTE,
  [3650] = 1,
    ACTIONS(648), 1,
      anon_sym_SQUOTE,
  [3654] = 1,
    ACTIONS(650), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3658] = 1,
    ACTIONS(652), 1,
      anon_sym_LT_SLASHem_GT,
  [3662] = 1,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
  [3666] = 1,
    ACTIONS(656), 1,
      anon_sym_SQUOTE,
  [3670] = 1,
    ACTIONS(658), 1,
      anon_sym_SLASH,
  [3674] = 1,
    ACTIONS(660), 1,
      anon_sym_LPAREN,
  [3678] = 1,
    ACTIONS(662), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3682] = 1,
    ACTIONS(664), 1,
      anon_sym_LT_SLASHem_GT,
  [3686] = 1,
    ACTIONS(666), 1,
      anon_sym_LT_SLASHem_GT,
  [3690] = 1,
    ACTIONS(668), 1,
      anon_sym_SLASH,
  [3694] = 1,
    ACTIONS(670), 1,
      sym__terminator,
  [3698] = 1,
    ACTIONS(672), 1,
      aux_sym__inline_quote_token1,
  [3702] = 1,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
  [3706] = 1,
    ACTIONS(676), 1,
      anon_sym_SQUOTE,
  [3710] = 1,
    ACTIONS(678), 1,
      anon_sym_LPAREN,
  [3714] = 1,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
  [3718] = 1,
    ACTIONS(682), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3722] = 1,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
  [3726] = 1,
    ACTIONS(686), 1,
      anon_sym_RBRACE,
  [3730] = 1,
    ACTIONS(688), 1,
      aux_sym__inline_quote_token1,
  [3734] = 1,
    ACTIONS(690), 1,
      sym__terminator,
  [3738] = 1,
    ACTIONS(692), 1,
      sym_arity,
  [3742] = 1,
    ACTIONS(694), 1,
      sym_arity,
  [3746] = 1,
    ACTIONS(694), 1,
      anon_sym_RPAREN,
  [3750] = 1,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [3754] = 1,
    ACTIONS(698), 1,
      aux_sym__inline_quote_token1,
  [3758] = 1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [3762] = 1,
    ACTIONS(700), 1,
      aux_sym__inline_quote_token1,
  [3766] = 1,
    ACTIONS(702), 1,
      sym__terminator,
  [3770] = 1,
    ACTIONS(704), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [3774] = 1,
    ACTIONS(706), 1,
      anon_sym_LT_SLASHstrong_GT,
  [3778] = 1,
    ACTIONS(708), 1,
      sym__terminator,
  [3782] = 1,
    ACTIONS(710), 1,
      aux_sym__inline_quote_token1,
  [3786] = 1,
    ACTIONS(712), 1,
      aux_sym__inline_quote_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 330,
  [SMALL_STATE(7)] = 379,
  [SMALL_STATE(8)] = 428,
  [SMALL_STATE(9)] = 477,
  [SMALL_STATE(10)] = 526,
  [SMALL_STATE(11)] = 575,
  [SMALL_STATE(12)] = 624,
  [SMALL_STATE(13)] = 673,
  [SMALL_STATE(14)] = 722,
  [SMALL_STATE(15)] = 771,
  [SMALL_STATE(16)] = 820,
  [SMALL_STATE(17)] = 866,
  [SMALL_STATE(18)] = 912,
  [SMALL_STATE(19)] = 958,
  [SMALL_STATE(20)] = 986,
  [SMALL_STATE(21)] = 1014,
  [SMALL_STATE(22)] = 1045,
  [SMALL_STATE(23)] = 1076,
  [SMALL_STATE(24)] = 1107,
  [SMALL_STATE(25)] = 1138,
  [SMALL_STATE(26)] = 1169,
  [SMALL_STATE(27)] = 1200,
  [SMALL_STATE(28)] = 1231,
  [SMALL_STATE(29)] = 1262,
  [SMALL_STATE(30)] = 1293,
  [SMALL_STATE(31)] = 1324,
  [SMALL_STATE(32)] = 1355,
  [SMALL_STATE(33)] = 1386,
  [SMALL_STATE(34)] = 1399,
  [SMALL_STATE(35)] = 1412,
  [SMALL_STATE(36)] = 1425,
  [SMALL_STATE(37)] = 1438,
  [SMALL_STATE(38)] = 1451,
  [SMALL_STATE(39)] = 1464,
  [SMALL_STATE(40)] = 1477,
  [SMALL_STATE(41)] = 1490,
  [SMALL_STATE(42)] = 1503,
  [SMALL_STATE(43)] = 1516,
  [SMALL_STATE(44)] = 1529,
  [SMALL_STATE(45)] = 1542,
  [SMALL_STATE(46)] = 1555,
  [SMALL_STATE(47)] = 1568,
  [SMALL_STATE(48)] = 1581,
  [SMALL_STATE(49)] = 1594,
  [SMALL_STATE(50)] = 1607,
  [SMALL_STATE(51)] = 1620,
  [SMALL_STATE(52)] = 1633,
  [SMALL_STATE(53)] = 1646,
  [SMALL_STATE(54)] = 1659,
  [SMALL_STATE(55)] = 1672,
  [SMALL_STATE(56)] = 1685,
  [SMALL_STATE(57)] = 1698,
  [SMALL_STATE(58)] = 1711,
  [SMALL_STATE(59)] = 1724,
  [SMALL_STATE(60)] = 1737,
  [SMALL_STATE(61)] = 1750,
  [SMALL_STATE(62)] = 1763,
  [SMALL_STATE(63)] = 1776,
  [SMALL_STATE(64)] = 1789,
  [SMALL_STATE(65)] = 1802,
  [SMALL_STATE(66)] = 1815,
  [SMALL_STATE(67)] = 1828,
  [SMALL_STATE(68)] = 1841,
  [SMALL_STATE(69)] = 1854,
  [SMALL_STATE(70)] = 1867,
  [SMALL_STATE(71)] = 1880,
  [SMALL_STATE(72)] = 1893,
  [SMALL_STATE(73)] = 1906,
  [SMALL_STATE(74)] = 1919,
  [SMALL_STATE(75)] = 1932,
  [SMALL_STATE(76)] = 1945,
  [SMALL_STATE(77)] = 1958,
  [SMALL_STATE(78)] = 1971,
  [SMALL_STATE(79)] = 1984,
  [SMALL_STATE(80)] = 1997,
  [SMALL_STATE(81)] = 2010,
  [SMALL_STATE(82)] = 2023,
  [SMALL_STATE(83)] = 2036,
  [SMALL_STATE(84)] = 2049,
  [SMALL_STATE(85)] = 2062,
  [SMALL_STATE(86)] = 2075,
  [SMALL_STATE(87)] = 2088,
  [SMALL_STATE(88)] = 2101,
  [SMALL_STATE(89)] = 2114,
  [SMALL_STATE(90)] = 2127,
  [SMALL_STATE(91)] = 2140,
  [SMALL_STATE(92)] = 2153,
  [SMALL_STATE(93)] = 2166,
  [SMALL_STATE(94)] = 2179,
  [SMALL_STATE(95)] = 2192,
  [SMALL_STATE(96)] = 2205,
  [SMALL_STATE(97)] = 2218,
  [SMALL_STATE(98)] = 2231,
  [SMALL_STATE(99)] = 2244,
  [SMALL_STATE(100)] = 2257,
  [SMALL_STATE(101)] = 2270,
  [SMALL_STATE(102)] = 2283,
  [SMALL_STATE(103)] = 2296,
  [SMALL_STATE(104)] = 2309,
  [SMALL_STATE(105)] = 2322,
  [SMALL_STATE(106)] = 2335,
  [SMALL_STATE(107)] = 2346,
  [SMALL_STATE(108)] = 2369,
  [SMALL_STATE(109)] = 2392,
  [SMALL_STATE(110)] = 2403,
  [SMALL_STATE(111)] = 2414,
  [SMALL_STATE(112)] = 2425,
  [SMALL_STATE(113)] = 2448,
  [SMALL_STATE(114)] = 2459,
  [SMALL_STATE(115)] = 2470,
  [SMALL_STATE(116)] = 2481,
  [SMALL_STATE(117)] = 2504,
  [SMALL_STATE(118)] = 2515,
  [SMALL_STATE(119)] = 2526,
  [SMALL_STATE(120)] = 2549,
  [SMALL_STATE(121)] = 2560,
  [SMALL_STATE(122)] = 2571,
  [SMALL_STATE(123)] = 2582,
  [SMALL_STATE(124)] = 2593,
  [SMALL_STATE(125)] = 2604,
  [SMALL_STATE(126)] = 2615,
  [SMALL_STATE(127)] = 2626,
  [SMALL_STATE(128)] = 2642,
  [SMALL_STATE(129)] = 2658,
  [SMALL_STATE(130)] = 2674,
  [SMALL_STATE(131)] = 2690,
  [SMALL_STATE(132)] = 2712,
  [SMALL_STATE(133)] = 2734,
  [SMALL_STATE(134)] = 2756,
  [SMALL_STATE(135)] = 2772,
  [SMALL_STATE(136)] = 2788,
  [SMALL_STATE(137)] = 2804,
  [SMALL_STATE(138)] = 2826,
  [SMALL_STATE(139)] = 2842,
  [SMALL_STATE(140)] = 2858,
  [SMALL_STATE(141)] = 2874,
  [SMALL_STATE(142)] = 2883,
  [SMALL_STATE(143)] = 2892,
  [SMALL_STATE(144)] = 2905,
  [SMALL_STATE(145)] = 2922,
  [SMALL_STATE(146)] = 2930,
  [SMALL_STATE(147)] = 2946,
  [SMALL_STATE(148)] = 2962,
  [SMALL_STATE(149)] = 2973,
  [SMALL_STATE(150)] = 2986,
  [SMALL_STATE(151)] = 2999,
  [SMALL_STATE(152)] = 3010,
  [SMALL_STATE(153)] = 3023,
  [SMALL_STATE(154)] = 3036,
  [SMALL_STATE(155)] = 3047,
  [SMALL_STATE(156)] = 3058,
  [SMALL_STATE(157)] = 3067,
  [SMALL_STATE(158)] = 3077,
  [SMALL_STATE(159)] = 3087,
  [SMALL_STATE(160)] = 3097,
  [SMALL_STATE(161)] = 3107,
  [SMALL_STATE(162)] = 3113,
  [SMALL_STATE(163)] = 3123,
  [SMALL_STATE(164)] = 3133,
  [SMALL_STATE(165)] = 3143,
  [SMALL_STATE(166)] = 3153,
  [SMALL_STATE(167)] = 3163,
  [SMALL_STATE(168)] = 3169,
  [SMALL_STATE(169)] = 3179,
  [SMALL_STATE(170)] = 3189,
  [SMALL_STATE(171)] = 3199,
  [SMALL_STATE(172)] = 3209,
  [SMALL_STATE(173)] = 3219,
  [SMALL_STATE(174)] = 3229,
  [SMALL_STATE(175)] = 3239,
  [SMALL_STATE(176)] = 3249,
  [SMALL_STATE(177)] = 3259,
  [SMALL_STATE(178)] = 3269,
  [SMALL_STATE(179)] = 3279,
  [SMALL_STATE(180)] = 3289,
  [SMALL_STATE(181)] = 3299,
  [SMALL_STATE(182)] = 3309,
  [SMALL_STATE(183)] = 3319,
  [SMALL_STATE(184)] = 3329,
  [SMALL_STATE(185)] = 3339,
  [SMALL_STATE(186)] = 3349,
  [SMALL_STATE(187)] = 3359,
  [SMALL_STATE(188)] = 3369,
  [SMALL_STATE(189)] = 3379,
  [SMALL_STATE(190)] = 3389,
  [SMALL_STATE(191)] = 3399,
  [SMALL_STATE(192)] = 3409,
  [SMALL_STATE(193)] = 3419,
  [SMALL_STATE(194)] = 3429,
  [SMALL_STATE(195)] = 3439,
  [SMALL_STATE(196)] = 3449,
  [SMALL_STATE(197)] = 3459,
  [SMALL_STATE(198)] = 3469,
  [SMALL_STATE(199)] = 3479,
  [SMALL_STATE(200)] = 3489,
  [SMALL_STATE(201)] = 3499,
  [SMALL_STATE(202)] = 3509,
  [SMALL_STATE(203)] = 3516,
  [SMALL_STATE(204)] = 3523,
  [SMALL_STATE(205)] = 3530,
  [SMALL_STATE(206)] = 3537,
  [SMALL_STATE(207)] = 3544,
  [SMALL_STATE(208)] = 3551,
  [SMALL_STATE(209)] = 3558,
  [SMALL_STATE(210)] = 3565,
  [SMALL_STATE(211)] = 3572,
  [SMALL_STATE(212)] = 3579,
  [SMALL_STATE(213)] = 3586,
  [SMALL_STATE(214)] = 3590,
  [SMALL_STATE(215)] = 3594,
  [SMALL_STATE(216)] = 3598,
  [SMALL_STATE(217)] = 3602,
  [SMALL_STATE(218)] = 3606,
  [SMALL_STATE(219)] = 3610,
  [SMALL_STATE(220)] = 3614,
  [SMALL_STATE(221)] = 3618,
  [SMALL_STATE(222)] = 3622,
  [SMALL_STATE(223)] = 3626,
  [SMALL_STATE(224)] = 3630,
  [SMALL_STATE(225)] = 3634,
  [SMALL_STATE(226)] = 3638,
  [SMALL_STATE(227)] = 3642,
  [SMALL_STATE(228)] = 3646,
  [SMALL_STATE(229)] = 3650,
  [SMALL_STATE(230)] = 3654,
  [SMALL_STATE(231)] = 3658,
  [SMALL_STATE(232)] = 3662,
  [SMALL_STATE(233)] = 3666,
  [SMALL_STATE(234)] = 3670,
  [SMALL_STATE(235)] = 3674,
  [SMALL_STATE(236)] = 3678,
  [SMALL_STATE(237)] = 3682,
  [SMALL_STATE(238)] = 3686,
  [SMALL_STATE(239)] = 3690,
  [SMALL_STATE(240)] = 3694,
  [SMALL_STATE(241)] = 3698,
  [SMALL_STATE(242)] = 3702,
  [SMALL_STATE(243)] = 3706,
  [SMALL_STATE(244)] = 3710,
  [SMALL_STATE(245)] = 3714,
  [SMALL_STATE(246)] = 3718,
  [SMALL_STATE(247)] = 3722,
  [SMALL_STATE(248)] = 3726,
  [SMALL_STATE(249)] = 3730,
  [SMALL_STATE(250)] = 3734,
  [SMALL_STATE(251)] = 3738,
  [SMALL_STATE(252)] = 3742,
  [SMALL_STATE(253)] = 3746,
  [SMALL_STATE(254)] = 3750,
  [SMALL_STATE(255)] = 3754,
  [SMALL_STATE(256)] = 3758,
  [SMALL_STATE(257)] = 3762,
  [SMALL_STATE(258)] = 3766,
  [SMALL_STATE(259)] = 3770,
  [SMALL_STATE(260)] = 3774,
  [SMALL_STATE(261)] = 3778,
  [SMALL_STATE(262)] = 3782,
  [SMALL_STATE(263)] = 3786,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(147),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(112),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(17),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(18),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(153),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(54),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(31),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(30),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(162),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(79),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(255),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(164),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(137),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(149),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(25),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(26),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(198),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(39),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(249),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(157),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(132),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__tag_line, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(150),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(24),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(23),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(194),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(100),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(241),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(180),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(131),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(153),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(31),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(30),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(162),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(79),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(255),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(164),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(137),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(152),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(28),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(32),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(191),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(85),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(257),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(197),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_line, 2), SHIFT_REPEAT(133),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(183),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(21),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(262),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(190),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(174),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(158),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(22),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(263),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(181),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_content_repeat1, 2), SHIFT_REPEAT(182),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag_content, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 3, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_quote, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_line, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 6, .production_id = 6),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_quote, 4, .production_id = 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__link_macro, 4),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 3),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 3),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__double_inline_quote, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_quote, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xhtml_tag, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__triple_inline_quote, 2),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong_xhtml_tag, 3),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em_xhtml_tag, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(134),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2), SHIFT_REPEAT(145),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_atom, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_escape, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__author_line, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_atom_repeat1, 2), SHIFT_REPEAT(151),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__author_line_repeat1, 2), SHIFT_REPEAT(154),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2), SHIFT_REPEAT(159),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_xhtml_tag_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 5),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote_content, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_quote_content_repeat1, 2), SHIFT_REPEAT(172),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(175),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__double_inline_quote_repeat1, 2), SHIFT_REPEAT(196),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [614] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__see_line, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 3),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 2, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [684] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__author_line, 3, .production_id = 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xhtml_tag, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
