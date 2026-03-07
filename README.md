📌 Overview

This repository contains implementations of Linked List Data Structure problems in C++.
It is designed for DSA practice, coding interviews, and understanding fundamental linked list operations.

The project includes different operations such as creation, traversal, searching, insertion, deletion, and conversion from array to linked list.

📂 Repository Structure
File	Description
Creation.cpp	Implementation to create a linked list
LLTraversal.cpp	Traversing and displaying elements of a linked list
SearchingLL.cpp	Searching an element in a linked list
convertarray2LList.cpp	Convert an array into a linked list
deletehead.cpp	Delete the first node of a linked list
deletetail.cpp	Delete the last node of a linked list
deletekthnode.cpp	Delete the node at a specific position
deletevalue.cpp	Delete a node by its value
lengthOfLL.cpp	Calculate the length of a linked list
🧠 What is a Linked List?

A Linked List is a linear data structure where elements are stored in nodes, and each node contains:

Data – the value stored in the node

Pointer – reference to the next node in the list

Unlike arrays, linked lists do not store elements in contiguous memory locations.

Structure of Node
struct Node {
    int data;
    Node* next;
};
⚙️ Basic Operations on Linked List
1️⃣ Creation

Creating nodes and linking them together to form a list.

2️⃣ Traversal

Accessing each node sequentially to display or process data.

3️⃣ Searching

Finding whether a specific value exists in the list.

4️⃣ Insertion

Adding a new node:

At beginning

At middle

At end

5️⃣ Deletion

Removing nodes:

Head node

Tail node

Specific position

Specific value

6️⃣ Length Calculation

Counting the total number of nodes in the linked list.

💻 How to Run the Programs

Clone the repository

git clone https://github.com/your-username/LinkedList-Problems.git

Navigate to the folder

cd LinkedList-Problems

Compile the program

g++ filename.cpp

Run the program

./a.out
🎯 Purpose of this Repository

Practice Data Structures and Algorithms

Improve problem-solving skills

Prepare for coding interviews

Understand Linked List concepts with C++ implementation

🚀 Future Improvements

Add Insertion operations

Add Doubly Linked List

Add Circular Linked List

Add LeetCode linked list problems

👨‍💻 Author

Majid Tamboli

B.Tech – Artificial Intelligence & Data Science
VPKBIET (Batch 2027)
