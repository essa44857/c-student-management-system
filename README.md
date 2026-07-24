# 🎓 Student Management System

> A complete **Student Management System** built in **C** that demonstrates **Dynamic Arrays**, **Structures**, **Dynamic Memory Allocation**, **Searching**, **Sorting**, and **Modular Programming** through a real-world CLI application.

---

## 🚀 Technologies & Concepts

<p align="left">

![C](https://img.shields.io/badge/C-Language-blue?style=for-the-badge&logo=c)

![Struct](https://img.shields.io/badge/Struct-Records-success?style=for-the-badge)

![Dynamic Array](https://img.shields.io/badge/Dynamic-Array-orange?style=for-the-badge)

![Pointers](https://img.shields.io/badge/Pointers-Memory-purple?style=for-the-badge)

![Memory](https://img.shields.io/badge/Dynamic-Memory-red?style=for-the-badge)

![Algorithms](https://img.shields.io/badge/Search%20&%20Sort-Algorithms-yellow?style=for-the-badge)

</p>

---

# 🎯 Overview

This project is a **Command-Line Interface (CLI)** application for managing student records.

It allows users to add, update, delete, search, and display student information while demonstrating efficient memory management using **Dynamic Arrays**.

The project focuses on applying core C programming concepts in a practical and scalable application.

---

# ✨ Features

✅ Add New Students

✅ Update Student Information

✅ Delete Student Records

✅ Search Students

✅ Display All Students

✅ Dynamic Array Expansion using `realloc()`

✅ Memory Management with `malloc()` and `free()`

---

# 🧩 Data Structures & Technologies

| Structure | Implementation | Purpose |
|-----------|---------------|---------|
| 👨‍🎓 Student | Struct | Store student information |
| 📦 Database | Dynamic Array | Store multiple students |
| 🧠 Pointers | Memory Access | Efficient data manipulation |
| 🔍 Algorithms | Linear Search | Find students |
| 📊 Sorting | Sorting Algorithms | Organize records |

---

# ⚡ Memory Management

### 🔹 Dynamic Array Expansion

The system automatically expands its storage capacity using `realloc()` whenever the current array becomes full.

This approach minimizes memory usage while allowing the database to grow dynamically.

---

### 🔹 Efficient Memory Handling

Memory is allocated using `malloc()`, resized using `realloc()`, and properly released with `free()` to prevent memory leaks.

---

# 📂 Project Structure

```text
student-management/
│
├── student.h
├── student.c
├── main.c
└── README.md
```

---

# 📚 What I Learned

- 🧠 Structures (`struct`)
- 📦 Dynamic Arrays
- 💾 Dynamic Memory Allocation (`malloc`, `realloc`, `free`)
- 👉 Pointers
- 🔍 Linear Search
- 📊 Sorting Algorithms
- 🧩 Modular Programming
- 🎛 Interactive CLI Menus
- ⚙ Memory Management
- 🏗 Building a Complete CRUD Application

---

# ▶️ How to Run

```bash
gcc main.c student.c -o StudentManagement

./StudentManagement
```

---

# 🎓 Educational Purpose

This project was developed to strengthen practical knowledge of **C Programming** by implementing a complete student management system.

It demonstrates how **Structures**, **Dynamic Arrays**, **Pointers**, and **Dynamic Memory Allocation** work together in a real-world application while following clean code and modular programming principles.

---

## ⭐ If you like this project, consider giving it a star!
