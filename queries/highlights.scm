; User roles
((role) @role.user
 (#any-of? @role.user "u:" "user:"))

; Assistant roles
((role) @role.assistant
 (#any-of? @role.assistant "a:" "assistant:"))

; System roles
((role) @role.system
 (#any-of? @role.system "s:" "system:"))

; Tool call roles
((role) @role.toolcall
 (#any-of? @role.toolcall "tc:" "tool_call:"))

; Tool result roles
((role) @role.toolresult
 (#any-of? @role.toolresult "tr:" "tool_result:"))

; Comment roles
((role) @role.comment
 (#any-of? @role.comment "c:" "comment:"))

; Error roles
((role) @role.err
 (#any-of? @role.err "err:" "error:"))

; Variables
(variable) @variable

; Escaped variables
(escaped_variable) @text

; Regular text
(text) @text

