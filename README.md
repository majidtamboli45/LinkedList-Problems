# 🔗 Linked List Data Structure

![DSA](https://img.shields.io/badge/Data%20Structure-Linked%20List-blue)
![Language](https://img.shields.io/badge/Language-C++-orange)
![Difficulty](https://img.shields.io/badge/Level-Beginner%20to%20Intermediate-green)

---

## 📖 Table of Contents

* [Introduction](#-introduction)
* [Basic Operations](#-basic-operations-on-linked-list)
* [Linked List Representation](#-linked-list-representation)
* [C++ Implementation](#-c-implementation)
* [Types of Linked Lists](#-types-of-linked-lists)
* [Time Complexity](#-time-complexity)
* [Applications](#-applications-of-linked-lists)
* [Advantages](#-advantages)
* [Limitations](#-limitations)
* [Example Problems](#-example-problems)
* [Author](#-author)

---

# 📌 Introduction

A **Linked List** is a linear data structure where elements are stored in **nodes**, and each node points to the **next node** in the sequence.

Unlike arrays, linked lists **do not store elements in contiguous memory locations**.

Each node contains:

* **Data** → Value stored in the node
* **Pointer** → Address of the next node

---

# 🧱 Basic Operations on Linked List

| Operation | Description      |
| --------- | ---------------- |
| Insertion | Add a new node   |
| Deletion  | Remove a node    |
| Traversal | Visit all nodes  |
| Search    | Find a node      |
| Update    | Modify node data |

---

# 📊 Linked List Representation

Example:

```text
[10 | next] → [20 | next] → [30 | next] → [40 | NULL]
```

Each block represents a **node containing data and pointer**.

---

# 💻 C++ Implementation

Example of a **simple singly linked list node**.

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
```

---

# 🔄 Types of Linked Lists

### 1️⃣ Singly Linked List

Each node points to the **next node only**.

### 2️⃣ Doubly Linked List

Each node has:

* pointer to **next node**
* pointer to **previous node**

### 3️⃣ Circular Linked List

The **last node points back to the first node**.

---

# ⚙️ Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Access    | O(n)       |
| Search    | O(n)       |
| Insertion | O(1)       |
| Deletion  | O(1)       |

Insertion and deletion are **faster than arrays** because elements do not need shifting.

---

# 📚 Applications of Linked Lists

Linked lists are used in many systems and algorithms.

### 1️⃣ Dynamic Memory Allocation

Memory can grow or shrink dynamically.

### 2️⃣ Implementing Other Data Structures

Used to implement:

* Stacks
* Queues
* Graph adjacency lists

### 3️⃣ Undo/Redo Operations

Used in text editors and applications.

### 4️⃣ Music Playlist

Each song can be a node pointing to the next song.

### 5️⃣ Browser History

Used for navigating **back and forward** pages.

---

# 🚀 Advantages

✔ Dynamic size
✔ Efficient insertion and deletion
✔ No need for contiguous memory
✔ Flexible data structure

---

# ⚠️ Limitations

❌ Extra memory required for pointers
❌ Slower access compared to arrays
❌ More complex implementation

---

# 📖 Example Problems

1️⃣ Reverse a Linked List
2️⃣ Detect Cycle in Linked List
3️⃣ Merge Two Sorted Lists
4️⃣ Remove Nth Node From End
5️⃣ Find Middle of Linked List

---

# 👨‍💻 Author

**Prepared by:**

### Majid Tamboli

🔗 GitHub:
https://github.com/majidtamboli45

📘 Created as part of **Data Structures and Algorithms (DSA) practice using C++**.
