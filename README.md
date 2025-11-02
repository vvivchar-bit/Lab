# Lab 
**Topic:** Developing programs with user-defined classes. Work with classes and objects.  
**Author:** Vadym Vivchar, group ALK-43  

---

## 🎯 Goal  
Learn to work with classes and objects.  
Gain skills in object-oriented programming using C++.

---

## 📄 Full report  
**[View PDF report](https://github.com/vvivchar-bit/-111/blob/main/lab%20777.pdf)**

---

## 💻 Task  
**Description:**  
Create a base class `Figure` with coordinates of a geometric shape.  
Derived classes:  
- `Cone` — radius and height,  
- `Cylinder` — radius and height,  
- `Sphere` — radius only.  

For each class, implement methods for:
- calculating volume;  
- calculating surface area;  
- displaying results on the screen.

**Source code:**  
[Figure_Classes.cpp](https://github.com/vvivchar-bit/-111/blob/main/Figure_Classes.cpp)

---

## ⚙️ Used software
- **IDE:** Dev-C++  
- **Language:** C++17  
- **OS:** Windows 10  

---

## 🧠 Control questions with answers

**1. What is inheritance in OOP?**  
It’s a mechanism that allows creating a new class based on an existing one, reusing its properties and methods.

---

**2. What access specifiers exist?**  
`public`, `protected`, and `private` — define visibility and access level of class members.

---

**3. What happens during public inheritance?**  
Public members of the base class remain public in the derived class.

---

**4. What happens during private inheritance?**  
All inherited members become private in the derived class.

---

**5. What is `protected` used for?**  
It allows derived classes to access members of the base class but hides them from external code.

---

**6. Order of constructor and destructor calls?**  
Constructors: from base to derived.  
Destructors: in reverse order (derived → base).

---

**7. What is multiple inheritance?**  
A class can inherit from several base classes at once.

---

© Vadym Vivchar, group ALK-43
