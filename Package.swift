// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterChat",
    products: [
        .library(name: "TreeSitterChat", targets: ["TreeSitterChat"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterChat",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterChatTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterChat",
            ],
            path: "bindings/swift/TreeSitterChatTests"
        )
    ],
    cLanguageStandard: .c11
)
