# Compiler Design Mini-Project (Flex/Bison)

**Project Members:**
- Noam Dahan — 318821774  
- Gal Tayeb — 207338104  
- Noam Kadosh — 207328428  

---

## ⚙️ Notes
- **No spaces allowed:** The compiler cannot handle spaces in the input.  
- **Main function required:** Every program must include a `_main_()` procedure.  
- **Comments:** Use the format `#-> comment <-#`.  
- **Parameters:** Separated by semicolons (`;`), not commas.  
- **Scanner file:** Before compilation, remove the `//` comment from the first line in `scanner.l` (it causes compilation errors).

---

## 🧩 Project Overview
A compact but complete compiler front-end for a small C-like language.  
It includes a **lexer** (Flex), **parser** (Bison), **AST construction**, and **pretty printing** of the parsed tree.  
This project demonstrates practical skills in **language design, parsing theory, compiler construction, and systems programming**.

---

## 🌟 Highlights
- **Custom language** with support for functions, variables, control flow, pointers, and strings.  
- **Lexer (`scanner.l`)** — recognizes keywords, identifiers, literals, operators, and punctuation.  
- **Parser (`parser.y`)** — defines grammar rules, operator precedence, and builds the AST.  
- **Clear error handling** with source line numbers for easier debugging.  
- **AST visualization** for better understanding of program structure.  
- **Modular and readable code** that makes onboarding simple and intuitive.

---

## 🧠 Technical Skills Demonstrated
- **Compiler theory & practice:** lexical analysis, LR parsing, grammar factoring, and operator precedence.  
- **System-level C programming:** dynamic memory, custom data structures, headers, and modular design.  
- **Tooling expertise:** Flex/Bison pipeline integration, automated builds, reproducibility.  
- **Code quality:** separation of concerns (scanner/parser/AST), clarity, and maintainability.

---

## 📁 Project Structure
├─ scanner.l # Flex lexer specification (tokens & patterns)
├─ parser.y # Bison grammar (production rules, AST logic)
├─ parser.h # AST node definitions & declarations
├─ (generated) lex.yy.c # Produced by Flex
├─ (generated) parser.tab.c/.h # Produced by Bison
├─ Makefile # Optional one-command build
└─ README.md
