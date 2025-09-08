# Insertion Sort in C++

## 📌 Overview

This C++ program demonstrates the **Insertion Sort** algorithm, a simple and intuitive sorting method:

1. Iterates through an array, inserting each element into its correct position in the sorted portion of the array.
2. Sorts numbers in **ascending order**.

It displays the array before and after sorting to help visualize how insertion sort organizes the elements.

---

## 🔧 Features

- **Step-by-Step Sorting**: Iteratively inserts elements into their correct positions.

* **Simple Implementation**: Uses a straightforward loop-based approach.

* **Array Input**: Works with any array of integers defined in the code.

* **Fully Commented Code**: Easy to understand and modify.

---

## 📋 Example Run

**Input:**
Original array:
12 11 13 5 6

**Output:**
Sorted array:
5 6 11 12 13

---

## ⚙ How It Works

1. **Iterate Through Array**

   - Start from the second element (`index 1`) since the first element is trivially “sorted.”

2. **Select Key Element**
   - Take the current element as `key` to insert into the sorted portion.
3. **Shift Elements**
   - Compare `key` with previous elements and shift all greater elements one position to the right.
4. **Insert Key**
   - Place the `key` in its correct sorted position.
5. **Repeat**
   - Continue until the entire array is sorted.

---

## 🛠 How to Run

### You can run this code in two ways:

### 1️⃣ Using a local C++ compiler

- Save the code as `insertion_sort.cpp` or any name you prefer.

- Compile and run it with your C++ compiler (e.g., Dev-C++, Code::Blocks, Visual Studio, g++):

```bash
g++ insertion_sort.cpp -o insertion_sort
./insertion_sort
```

### 2️⃣ Using an online C++ compiler

- Go to a site like [Programiz](https://www.programiz.com/cpp-programming/online-compiler) or [Replit](https://replit.com/languages/cpp)
