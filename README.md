<h2>Introduction</h2>
<p>This repository contains a basic program written in C++ that demonstrates the use of dynamic memory allocation using `malloc()` and `free()` functions. The program allows users to store and display a list of IDs.</p> <br>

<h2>What is malloc?</h2>
<p><code>malloc()</code>(memory allocation) is a function in C and C++ that dynamically allocates a specified amount of memory on the heap at runtime and returns a pointer to it. It is used when the required memory size is not known at compile time, allowing flexibility in managing data. The allocated memory must be freed using <code>free()</code> to avoid memory leaks.</p>

<h3>Features</h3>
<pre>- Dynamically allocates memory for storing IDs using `malloc`.
- Validates user input for the number of IDs.
- Prompts the user to enter IDs and displays them.
- Frees allocated memory to avoid memory leaks.</pre> <br>

<h3>How to run</h3>
<pre>1. Clone this repository or download the file `main.cpp` to your local machine.
2. Open a terminal or IDE with a C++ compiler.
3. Compile the program.</pre>

<h3>Example usage</h3>
<pre>1. Run the program.
2. Input the number of IDs you want to save (e.g., `3`).
3. Enter the IDs one by one (e.g., `101`, `102`, `103`).
4. View the IDs displayed back to you.</pre>

<h3>Notes</h3>
<pre>- If the user inputs `0` or a negative number, the program will display an "Invalid input" message.
- The program checks for `malloc` failure and handles it gracefully.
- Memory allocated by `malloc` is freed using `free()` at the end of the program.</pre>

<h3>Thanks for reading, enjoy and explore coding.</h3>
