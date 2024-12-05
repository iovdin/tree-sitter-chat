import XCTest
import SwiftTreeSitter
import TreeSitterChat

final class TreeSitterChatTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_chat())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Chat grammar")
    }
}
