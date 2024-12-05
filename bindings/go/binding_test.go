package tree_sitter_chat_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_chat "github.com/tree-sitter/tree-sitter-chat/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_chat.Language())
	if language == nil {
		t.Errorf("Error loading Chat grammar")
	}
}
