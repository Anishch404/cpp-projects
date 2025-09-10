# BooksCheckin 📚

A tiny C++ project where I practiced **dynamic memory allocation** and
**pointers** by simulating a mini book check-in system.
The program asks how many books are issued, stores their names in
dynamically allocated memory (`new[]`), and then displays them.

------------------------------------------------------------------------

## 💡 Why I made this

I was learning about: Heap memory (`new[]`, `delete[]`) - Pointers 
Input handling with `getline` vs `cin`

So I decided to turn that practice into a little project.

------------------------------------------------------------------------

## ⚔️ Challenges I faced

-   Mixing `cin >>` and `getline` caused input buffer issues (the
    dreaded leftover `\n` problem 😅).
-   Had to learn about
    `cin.ignore(numeric_limits<streamsize>::max(), '\n')` to properly
    clear the buffer.
-   Understanding why `getline` grabs empty strings at first was
    confusing at first, but now I get it.

------------------------------------------------------------------------

## 🚀 Features

-   Dynamically allocates memory for book names based on user input.
-   Accepts full book titles (with spaces) thanks to `getline`.
-   Cleans up memory properly with `delete[]`.

------------------------------------------------------------------------

## 🛠️ How to Run

``` bash
g++ main.cpp -o books
./books
```

------------------------------------------------------------------------

## 🔮 Future Improvements

-   Replace raw pointers with `std::vector<std::string>` (safer, no need
    for manual memory management).
-   Add features like author names, issue dates, etc.
-   Maybe turn it into a mini library management CLI.

------------------------------------------------------------------------

## 👤 Author

Made by **Anish** while learning memory management in
C++ ✨
