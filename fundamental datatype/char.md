# __char__

- The char data type was designed to hold a single character. A character can be a single letter, number, symbol, or whitespace.
- The char data type is an integral type, meaning the underlying value is stored as an integer.

# __ASCII__

- ASCII stands for American Standard Code for Information Interchange.
-  It defines a particular way to represent English characters (plus a few other symbols) as numbers between 0 and 127 (called an ASCII code or code point).

refer this [link](https://www.ascii-code.com/) for ascii code and its repective symbols.

# Escape sequence

There are some characters in C++ that have special meaning. These characters are called escape sequences. An escape sequence starts with a ‘\’ (backslash) character, and then a following letter or number.

|Name|	Symbol|	Meaning|
|----|-----|-----|
|Alert|	\a|	Makes an alert, such as a beep|
|Backspace|	\b|	Moves the cursor back one space|
|Formfeed|	\f|	Moves the cursor to next logical page|
|Newline|	\n|	Moves cursor to next line|
|Carriage return|	\r|	Moves cursor to beginning of line|
|Horizontal tab|	\t|	Prints a horizontal tab|
|Vertical tab|	\v|	Prints a vertical tab|
|Single quote|	\’|	Prints a single quote|
|Double quote|	\”|	Prints a double quote|
|Backslash|	\\\ |	Prints a backslash.|
|Question mark|	\?|	Prints a question mark.
| | |No longer relevant. You can use question marks unescaped.|
|Octal number|	\\(number)|	Translates into char represented by octal|
|Hex number|	\x(number)|	Translates into char represented by hex number|

---

# What about the other char types, wchar_t, char16_t, and char32_t?

- wchar_t should be avoided in almost all cases (except when interfacing with the Windows API). Its size is implementation defined, and is not reliable. It has largely been deprecated(still supported but not largly used).
- char16_t and char32_t were added to C++11 to provide explicit support for 16-bit and 32-bit Unicode characters. char8_t has been added in C++20.

