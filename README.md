---

# 🛠️ Install a C Compiler

To run the programs in this repository, you need a C compiler.

## 🪟 Windows

### Option 1: Code::Blocks (Recommended for Beginners)

1. Download **Code::Blocks** (with MinGW compiler included).
2. Install it using the default settings.
3. Open any `.c` file and click **Build and Run**.

### Option 2: Visual Studio Code

1. Install Visual Studio Code.
2. Install the GCC compiler using **MinGW-w64**.
3. Install the **C/C++ Extension** in VS Code.
4. Open the project folder and run your programs.

---

## 🍎 macOS

Install Xcode Command Line Tools:

```bash
xcode-select --install
```

Verify installation:

```bash
gcc --version
```

or

```bash
clang --version
```

---

## 🐧 Linux (Ubuntu/Debian)

Install GCC:

```bash
sudo apt update
sudo apt install build-essential
```

Verify installation:

```bash
gcc --version
```

---

# 🚀 Getting Started

## Step 1: Clone the Repository

```bash
git clone https://github.com/jillasrivardhan/c-language-level2.git
```

## Step 2: Move into the Project Folder

```bash
cd c-language-level2
```

## Step 3: Compile a Program

```bash
gcc filename.c -o output
```

Example:

```bash
gcc pointers.c -o pointers
```

## Step 4: Run the Program

### Windows

```bash
output.exe
```

### macOS/Linux

```bash
./output
```

---

# 💻 Requirements

- GCC Compiler (Recommended)
- Any C Compiler
- Visual Studio Code, Code::Blocks, Dev-C++, or any IDE of your choice

---

# 🎯 Who Can Use This Repository?

This repository is useful for:

- Beginners who have completed C basics
- College students
- Engineering students
- Coding interview preparation
- Programming practice
- Anyone looking to improve their C programming skills

---

# 📖 How to Learn Using This Repository

For the best learning experience:

1. Read the program carefully.
2. Understand the logic.
3. Compile and run the program.
4. Modify the code and observe the output.
5. Write the program on your own without looking.
6. Practice consistently.

Learning by writing code yourself is the best way to master C programming.

---

# 🌟 Features

- Beginner-friendly explanations
- Clean and readable code
- Intermediate-level C programs
- Well-organized topics
- Easy to understand
- Great for practice and revision

---

# 🤝 Contributing

Contributions are welcome!

If you'd like to improve this repository:

1. Fork the repository.
2. Create a new branch.
3. Make your changes.
4. Commit your changes.
5. Push your branch.
6. Open a Pull Request.

---

# C Language Level 2

A collection of beginner-to-intermediate C programming examples covering core Level 2 concepts. Each source file demonstrates a specific language feature or programming concept.

## Topics Covered

- Variables and constants
- Arithmetic operations
- Boolean values
- If/else and switch statements
- Loops (for, while, do-while)
- Break and continue
- Arrays and 2D arrays
- Character arrays (strings)
- Functions
- User-defined functions
- Operators
- And many more practice programs

## Project Structure

- `*.c` – C source files
- `*.exe` – Compiled executables (Windows)
- `README.md` – Project documentation

## Requirements

- GCC (MinGW) or any C compiler
- Code::Blocks, Dev-C++, Visual Studio Code, or any C IDE

## Compile and Run

```bash
gcc filename.c -o output
./output
```

On Windows:

```bash
gcc filename.c -o output.exe
output.exe
```

## Learning Goal

This repository is intended for students learning C programming through small, focused examples. Each program can be compiled and executed independently.

## License

This project is available for educational purposes.


# ⭐ Support

If this repository helped you:

- ⭐ Star the repository
- 🍴 Fork it
- 📢 Share it with others who are learning C

---

# 📜 License

This project is open source and available under the MIT License.

---

# 👨‍💻 Author

**Srivardhan Jilla**

GitHub: https://github.com/jillasrivardhan

Happy Coding! 💻🚀
