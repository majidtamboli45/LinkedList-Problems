# 🔗 Linked List Data Structure

![DSA](https://img.shields.io/badge/Data%20Structure-Linked%20List-blue)
![Language](https://img.shields.io/badge/Language-C++-orange)
![Level](https://img.shields.io/badge/Difficulty-Beginner%20to%20Intermediate-green)
![License](https://img.shields.io/badge/License-MIT-lightgrey)

A **Linked List** is a fundamental **dynamic data structure** used in computer science and software engineering to efficiently store and manage collections of data.

Unlike arrays, linked lists **store elements in nodes connected using pointers**, allowing flexible memory usage and efficient insertions and deletions.

---

# 📚 Table of Contents

- [Introduction](#-introduction)
- [Node Structure](#-node-structure)
- [Basic Operations](#-basic-operations)
- [Linked List Representation](#-linked-list-representation)
- [C++ Implementation](#-c-implementation)
- [Types of Linked Lists](#-types-of-linked-lists)
- [Time Complexity](#-time-complexity-analysis)
- [Applications](#-applications)
- [Advantages](#-advantages)
- [Limitations](#-limitations)
- [Practice Problems](#-practice-problems)
- [Author](#-author)

---

# 📌 Introduction

A **Linked List** is a **linear data structure** where each element (called a **node**) contains:

- **Data** → The value stored in the node  
- **Pointer** → The memory address of the next node  

Unlike arrays, elements in a linked list **are not stored in contiguous memory locations**.

This makes linked lists **dynamic and flexible**.

---

# 🧱 Node Structure

Each node consists of two parts:

```
+-------+--------+
| Data  | Next   |
+-------+--------+
```

Example node representation:

```
[10 | next] → [20 | next] → [30 | next] → [40 | NULL]
```

---

# ⚙️ Basic Operations

| Operation | Description |
|----------|-------------|
| **Insertion** | Add a new node |
| **Deletion** | Remove a node |
| **Traversal** | Visit all nodes |
| **Search** | Find a node |
| **Update** | Modify node data |

---

# 📊 Linked List Representation

Example Linked List:

```
Head
 ↓
[10 | • ] → [20 | • ] → [30 | • ] → [40 | NULL]
```

Where:

- `Head` stores the address of the first node
- `NULL` indicates the end of the list

---

# 💻 C++ Implementation

Example of a **simple singly linked list** in C++.

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
```

### Output

```
Linked List: 10 -> 20 -> 30 -> NULL
```

---

# 🔄 Types of Linked Lists

## 1️⃣ Singly Linked List

Each node points **only to the next node**.

```
[10] → [20] → [30] → [NULL]
```

---

## 2️⃣ Doubly Linked List

Each node has two pointers:

- Previous node
- Next node

```
NULL ← [10] ⇄ [20] ⇄ [30] → NULL
```

---

## 3️⃣ Circular Linked List

The **last node points back to the first node**.

```
[10] → [20] → [30]
  ↑               ↓
  ← ← ← ← ← ← ← ←
```

---

# ⏱ Time Complexity Analysis

| Operation | Time Complexity |
|----------|----------------|
| Access | O(n) |
| Search | O(n) |
| Insertion (Beginning) | O(1) |
| Insertion (End) | O(n) |
| Deletion | O(1) |

Insertion and deletion are **faster than arrays** because elements do not need shifting.

---

# 📚 Applications

### 🔹 Dynamic Memory Allocation

Linked lists allow **memory allocation at runtime**.

### 🔹 Implementing Other Data Structures

Used to implement:

- Stacks
- Queues
- Graph adjacency lists
- Hash tables

### 🔹 Undo / Redo Operations

Used in text editors.

### 🔹 Music Playlist

Each song links to the next song.

### 🔹 Browser History

Allows **forward and backward navigation**.

---

# 🚀 Advantages

✔ Dynamic size  
✔ Efficient insertion and deletion  
✔ No need for contiguous memory  
✔ Flexible memory allocation  

---

# ⚠️ Limitations

❌ Extra memory required for pointers  
❌ Slower access compared to arrays  
❌ No direct indexing  
❌ More complex implementation  

---

# 📖 Practice Problems

1. Reverse a Linked List  
2. Detect Cycle in Linked List  
3. Merge Two Sorted Linked Lists  
4. Remove Nth Node From End  
5. Find Middle of Linked List  
6. Check if Linked List is Palindrome  

---

# 👨‍💻 Author

**Majid Tamboli**

GitHub:  
https://github.com/majidtamboli45

⭐ If you found this useful, consider **starring the repository**.
