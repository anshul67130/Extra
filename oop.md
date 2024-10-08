Object Oriented Programming
It is a programming paradigm which revolves around classes and objects.

The main aim of OOP is to bind the data and the function that operate on them so that no other part of the code can access this data except that function.

## Class
A class is a logical entity used to define a new data type. A class is a user-defined type that describes what a particular kind of object will look like. Thus, a class is a template or blueprint for an object. A class contains variables, methods, and constructors.

###### Syntax:
```cpp
class class_name{ 
// class body 
//properties 
//methods 
};
```

## Object
An object is a instance of class. To define a object you must need a Class.
When a class is defined no memory is allocated, memory is allocated when it is instantiated, i.e., object is created.

###### Syntax:
```cpp
class_name objectName;
```
###### Syntax to create an object dynamically in C++:
```cpp
class_name * objectName = new class_name();
```

The class’s default constructor is called, and it dynamically allocates memory for one object of the class. The address of the memory allocated is assigned to the pointer, i.e., objectName.

## Features of OOP
1. **Abstraction** : It is the property by virtue of it, only the essential details are displayed to user.
2. **Inheritance** : It allows you to create class hierarchies, where a base class gives its behavior and attributes to a derived class.
3. **Polymorphism** : ensures that it will execute the proper method based on the calling object’s type.
4.  **Encapsulation** : It allows you to control access to your object’s state while making it easier to maintain or change your implementation at a later date.


## Why do we need object-oriented programming?

- To make the development and maintenance of projects more effortless.
- To provide the feature of data hiding that is good for security concerns.
- We can solve real-world problems if we are using object-oriented programming.
- It ensures code re-usability.
- It lets us write generic code: which will work with a range of data, so we don't have to write basic stuff over and over again.


## Class
Class is a blueprint or a set of instructions to build a specific type of object. It is a fundamental concept of Object-Oriented Programming which revolves around real-life entities. Class determines how an object will behave and what the object will contain.

**Data Members:-** The variables which are declared in any class by using any fundamental data types (like int, char, float, etc.) or derived data types (like class, structure, pointer, etc.) are known as Data Members.

**Methods:-** A method is the equivalent of a function in object-oriented programming that is used inside classes. The methods are the actions that perform operations. A method accepts parameters as arguments, manipulates these, and then produces an output when the method is called on an object.

**Constructor:-**  Constructors are special class functions that perform the initialization of every object. In C++, the constructor is automatically called when an object is created. It is a special method of the class because it does not have any return type. It has the same name as the class itself.

## Object
An object is an instance of a Class. It is an identifiable entity with some characteristics and behavior. To access the members defined inside the class, we need to create the object of that class.

**Example:**

```cpp
#include <iostream> 
using namespace std; 
// creating class 
class smartphone 
{ 
	// class body 
	// Data Members (Properties) 
	string model; 
	int year_of_manufacture; 
	bool _5g_supported; 
	
	// Constructor 
	public: 
	smartphone(string model_string, int manufacture, bool _5g_) 
	{ 
		// initializing data members 
		model = model_string; 
		year_of_manufacture = manufacture;
		_5g_supported = _5g_;
	}
	
	// methods
	void print_details() 
	{ 
		cout << "Model : " << model << endl; 
		cout << "Year of Manufacture : " << year_of_manufacture << endl; 
		cout << "5g Supported : " << _5g_supported << endl; 
	} 
}; 
int main() 
{ 
	// creating objects of smartphone class 
	smartphone iphone("iphone 11", 2019, false); 
	smartphone redmi("redmi note 11 t", 2021, true); 
	smartphone oneplus("oneplus nord", 2020, true); 
	// accessing class variables 
	int iphone_manufacture_date = iphone.year_of_manufacture; 
	bool redmi_support_5g = redmi._5g_supported; 
	string oneplus_model = oneplus.model; 
	// calling methods on objects 
	iphone.print_details(); 
	redmi.print_details(); 
	oneplus.print_details(); 
	return 0; 
}
```


## Access specifiers

Access Specifiers in a class are used to assign access to the class members. It sets some restrictions on the class members from accessing the outside functions directly.

There are three types of access modifiers available in C++: 

- Public
- Private
- Protected

 * **Public:** All the class members with a public modifier can be accessed from anywhere(inside and outside the class).
 * **Private:** All the class members with a private modifier can only be accessed by the member function inside the class.
 *  **Protected:** The access level of a protected modifier is within the class and outside the class through child class (or subclass). If you do not make the child class, it cannot be accessed outside the class.


- **By default**, in C++, all class members are private if you don't specify an access specifier.


## Constructor
A constructor is a special member function automatically called when an object is created. In C++. It is a special class method because it does not have any return type. It has the same name as the class itself.
A constructor initializes the class data members with garbage value if we don’t put any value to it explicitly.
The constructor must be placed in the public section of the class because we want the class to be instantiated anywhere. For every object in its lifetime constructor is called only once at the time of creation.

**Example: 
```cpp
class class_name 
{
	int data_member1;
	 string data_member2; 
	 //creating constructor 
	 public: 
		 class_name() 
			 { 
			 // initialize data members with garbage value 
			 } 
};
```

If we do not specify a constructor, the C++ compiler generates a default constructor for an object (which expects no parameters and has an empty body).

### Types of Constructors:

There are three types of constructors in C++:

- Default constructor
- Parameterized Constructor
- Copy Constructor

#### Default constructor:- 

A constructor that doesn't take any argument or has no parameters is known as a default constructor. In the example above, class_name() is a default constructor.

#### Parameterized Constructor:-

This is another type of Constructor with parameters. The parameterized constructor takes its arguments provided by the programmer. These arguments help initialize an object when it is created.

#### Copy Constructor:-
We pass the class object into another object of the same class in this constructor.
This is used for Copying the values of a class object into another object of a class, so we call them Copy constructor and for copying the values.
We have to pass the object’s name whose values we want to copy, and when we are using or passing an object to a constructor, we must use the & ampersand or address operator.
If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which does a member wise copy between objects.

**Example:-

```cpp
class smartphone
{ 
	// Data Members(Properties) 
	string model; 
	int year_of_manufacture; 
	bool _5g_supported; 
public: 
	// Default constructor 
	smartphone() 
	{ 
		model = "unknown"; 
		year_of_manufacture = 0; 
		_5g_supported = false; 
	} 
	// Parameterized constructor 
	smartphone(string model_string, int manufacture, bool _5g_) 
	{ 
		// Initialising data members 
		model = model_string; 
		year_of_manufacture = manufacture; 
		_5g_supported = _5g_; 
	} 
	// Copy constructor 
	smartphone(smartphone &obj) 
	{ 
		// Copies data of the obj parameter 
		model = obj.model; 
		year_of_manufacture = obj.year_of_manufacture; 
		_5g_supported = obj._5g_supported; 
	} 
}; 

int main() 
{ 
	// Creating objects of smartphone class 
	// Using default constructor 
	smartphone unknown; 
	
	// Using parameterized constructor 
	smartphone iphone("iphone 11", 2019, false); 
	
	// Using copy constructor 
	smartphone iphone_2(iphone); 
}

```

### Constructor overloading 

Constructor overloading can be defined as the concept of having more than one constructor with different parameters so that every constructor can perform a different task.
The criteria to overload a constructor is to differ the number of arguments or the type of arguments. The corresponding constructor is called depending on the number and type of arguments passed.
**Example:-
```cpp
class smartphone 
{ 
	// Data Members (Properties) 
	string model; 
	int year_of_manufacture; 
	bool _5g_supported; 
public: 
	// Constructor with 0 parameter 
	smartphone() 
	{ 
		model = "unknown"; 
		year_of_manufacture = 0; 
		_5g_supported = false; 
	} 
	// Constructor with 2 parameters 
	smartphone(string model_string, bool _5g_) 
	{ 
		model = model_string; 
		_5g_supported = _5g_; 
	} 
	// Constructor with 3 parameters 
	smartphone(string model_string, int manufacture, bool _5g_) 
	{ 
		// Initializing data members 
		model = model_string; 
		year_of_manufacture = manufacture; 
		_5g_supported = _5g_; 
	} 
}; 
int main() 
{ 
	// Creating objects of smartphone class 
	// Using constructor with 0 parameters 
	smartphone unknown; 
	// Using constructor with 2 parameters 
	smartphone redmi("Note 7 Pro", false); 
	// Using constructor with 3 parameters 
	smartphone iphone("iphone 11", 2019, false); 
}
```


## Destructor
A destructor is a special member function that works just opposite to a constructor; unlike constructors that are used for initializing an object, destructors destroy (or delete) the object. The purpose of the destructor is to free the resources that the object may have acquired during its lifetime.

**When is a destructor called?**   
A destructor function is called automatically when: 
- the object goes out of scope
- the program ends
- a scope (the { } parenthesis) containing local variable ends.
- a delete operator is called

**Destructor rules**
- The name should begin with a tilde sign(~) and match the class name.
- There cannot be more than one destructor in a class.
- Unlike constructors that can have parameters, destructors do not allow any parameter.
- They do not have any return type, not even void. I
- A destructor should be declared in the public section of the class.
- The programmer cannot access the address of the destructor.
- It has no return type, not even void.
- When you do not specify any destructor in a class, the compiler generates a default destructor and inserts it into your code.

## This pointer

this pointer holds the address of the current object. In simple words, you can say that this pointer points to the current object of the class. 

There can be three main usages of this keyword in C++.

- It can be used to refer to a current class instance variable.
- It can be used to pass the current object as a parameter to another method.
- It can be used to declare indexers
**Example:
``` cpp
#include <bits/stdc++.h> 
using namespace std; 
class mobile { 
	string model; 
	int year_of_manufacture; 
public: 
	void set_details(string model, int year_of_manufacture) { 
		this->model = model; 
		this->year_of_manufacture = year_of_manufacture; 
	} 
	void print() { 
		cout << this->model << endl; 
		cout << this->year_of_manufacture << endl; 
	} 
}; 
int main() {
	mobile redmi; 
	redmi.set_details("Note 7 Pro", 2019); 
	redmi.print(); 
}
```

Here you can see that we have two data members model and year_of_manufacture. In member function set_details(), we have two local variables with the same name as the data members’ names. Suppose you want to assign the local variable value to the data members. In that case, you won’t be able to do until unless you use this pointer because the compiler won’t know that you are referring to the object’s data members unless you use this pointer. This is one of example where you must use this pointer.


## Shallow and Deep copy

### Shallow copy
An object is created by simply copying the data of all variables of the original object. Here, the pointer will be copied but not the memory it points to. It means that the original object and the created copy will now point to the same memory address, which is generally not preferred.
Since both objects will reference the exact memory location, then change made by one will reflect those change in another object as well.
**Note: C++ compiler implicitly creates a copy constructor and assignment operator to perform shallow copy at compile time.**

A shallow copy can be made by simply copying the reference.

**Example:-
```cpp
class students(){
	int age; 
	char * names; 
public: 
	students(int age, char * names) { 
		this->age = age; 
		// shallow copy 
		this->names = names; 
		// here we are putting the same array. 
		// we are just copying the reference 
		} 
};
```

### Deep copy
An object is created by copying all the fields, and it also allocates similar memory resources with the same value to the object. To perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well if required. Also, it is necessary to allocate memory to the other constructors’ variables dynamically.

A deep copy means creating a new array and copying over the values.

Changes to the array values referred to will not result in changes to the array data referred to.

**Example:-
```cpp
class student(){ 
	int age; 
	char * names; 
public: 
	student(int age, char * names) { 
		this->age = age; 
		//deep copy 
		this->names = new char[strlen(names) + 1]; 
		strcopy(this->names, names); 
		//Created new array and copied data 
		} 
};
```

## Pillars of OOP

### Encapsulation
Encapsulation refers to bundling data and the methods that operate on that data into a single unit.
Encapsulation is about wrapping data and methods into a single class and protecting it from outside intervention.
It can be achieved by using access specifiers.
### Abstraction
Abstraction means providing only some of the information to the user by hiding its internal implementation details.
Abstraction is selecting data from a larger pool to show only relevant details of the object to the user. It helps in reducing programming complexity and efforts.
We can implement Abstraction in C++ using classes. The class helps us to group data members and member functions using available access specifiers. A Class can decide which data members will be visible to the outside world and not. Access specifiers are the main pillar of implementing abstraction in C++. We can use access specifiers to enforce restrictions on class members.

**Advantages Of Abstraction**

- Only you can make changes to your data or function, and no one else can.
- It makes the application secure by not allowing anyone else to see the background details.
- Increases the re-usability of the code.
- Avoids duplication of your cod

### Inheritance
 It allows us to create a new class (derived class) from an existing class (base class).
 The derived class inherits the features from the base class and can have additional features of its own.
Syntax:-
```cpp
class parent_class { 
//Body of parent class 
}; 
class child_class: access_modifier parent_class { 
//Body of child class 
};
```

#### Modes of Inheritance

1. Public mode: If we derive a subclass from a public base class. Then, the base class’s public members will become public in the derived class, and protected class members will become protected in the derived class.  

2. Protected mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.  

3. Private mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
**Example:-
```cpp
class vehicle { 
public: 
	string color; 
	int max_speed; 
}; 
class car : public vehicle { 
	int num_gears; 
}; 
class bicycle : public vehicle {
	bool is_foldable; 
}; 
class truck : public vehicle { 
	int max_weight; 
};
```

From above, we can see that two of the properties: Colour and MaxSpeed, are the same for every object. Hence, we can combine all these in one parent class and make three classes their subclass. This property is called Inheritance.

##### Types of Inheritance
C++  supports five types of inheritance they are as follows:

1. **Single inheritance**

In single inheritance, one class can extend the functionality of another class. There is only one parent class and one child class in single inheritances.

2. **Multilevel inheritance**

When a class inherits from a derived class, and the derived class becomes the base class of the new class, it is called multilevel inheritance. In multilevel inheritance, there is more than one level.

3. **Multiple inheritance**

In multiple inheritance, a class can inherit more than one class. This means that a single child class can have multiple parent classes in this type of inheritance.

4. **Hierarchical inheritance**

In hierarchical inheritance, one class is a base class for more than one derived class.

5. **Hybrid inheritance**

Hybrid inheritance is a combination of more than one type of inheritance. For example, A child and parent class relationship that follows multiple and hierarchical inheritances can be called hybrid inheritance.

### Polymorphism
 Polymorphism is a concept that allows you to perform a single action in different ways. Polymorphism is the combination of two Greek words. The poly means many, and morphs means forms. So polymorphism means many forms.

  **There are two types of polymorphism in C++**
1. **Compile time polymorphism :-** Compile-time polymorphism is also known as static polymorphism. This type of polymorphism can be achieved through function overloading or operator overloading. 
2. **Run time polymorphism:-** Runtime polymorphism is also known as dynamic polymorphism. Method overriding is a way to implement runtime polymorphism.

* **Function overloading:-** When there are multiple functions in a class with the same name but different parameters, these functions are overloaded. The main advantage of function overloading is that it increases the program’s readability. Functions can be overloaded by using different numbers of arguments or by using different types of arguments.
* **Operator overloading:-** C++ also provides options to overload operators. For example, we can make the operator (‘+’) for the string class to concatenate two strings. We know that this is the addition operator whose task is to add two operands. When placed between integer operands, a single operator, ‘+,’ adds them and concatenates them when placed between string operands.
	Example: Perform the addition of two imaginary or complex numbers.

```cpp
#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const & b) {
        Complex a;
        a.real = real + b.real;
        a.imag = imag + b.imag;
        return a;
    }

    void print() {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // This is compiled as 'c3 = c1.add(c2);'
    // An example call to "operator+"
    c3.print();
}



Output:
12 + i9
```


Points to remember while overloading an operator:

- It can be used only for user-defined operators(objects, structures) but cannot be used for in-built operators(int, char, float, etc.).
- Operators = and & are already overloaded in C++ to avoid overloading them.
- The precedence and associativity of operators remain intact.

* **Method overriding:-** Method overriding is a feature that allows you to redefine the parent class method in the child class based on its requirement. In other words, whatever methods the parent class has by default are available in the child class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child class is allowed to redefine that method based on its requirement. This process is called method overriding.


## Virtual Function

A virtual function is a member function in the base class that we expect to redefine in derived classes. It is declared using the virtual keyword.
A virtual function is used in the base class to ensure that the function is overridden. This especially applies to cases where a pointer of base class points to a derived class object.

**Example:-**
```cpp
#include <iostream> 
using namespace std; 
class Base { 
	public: 
	virtual void print() { 
	cout << "Base Function" << endl; 
	} 
}; 
class Derived : public Base { 
	public: 
	void print() { 
	cout << "Derived Function" << endl; 
	} 
}; 

int main() { 
	Derived derived1; 
	// pointer of Base type that points to derived1 
	Base* base1 = &derived1; 
	// calls member function of Derived class 
	base1->print(); return 0; 
}


Output: Derived Function
```

### Pure Virtual Function:

A pure virtual function is a virtual function in C++ for which we need not write any function definition and only have to declare it. It is declared by assigning 0 in the declaration. 

Syntax:

```cpp
class A 
{   
public:      
virtual void s() = 0; 
// Pure Virtual Function
};
```

A pure virtual function (or abstract function) in C++ is a virtual function for which we can implement, But we must override that function in the derived class; otherwise, the derived class will also become an abstract class.

## Abstract Class
Abstract classes can’t be instantiated, i.e., we cannot create an object of this class. However, we can derive a class from it and instantiate the object of the derived class. An Abstract class has at least one pure virtual function.

**Properties of the abstract classes:**

- It can have normal functions and variables along with pure virtual functions.
- Prominently used for upcasting(converting a derived-class reference or pointer to a base-class. In other words, upcasting allows us to treat a derived type as a base type), so its derived classes can use its interface.
- If an abstract class has a derived class, they must implement all pure virtual functions, or they will become abstract. 

Example:

```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void s() = 0; // Pure Virtual Function
};

class Derived : public Base {
public:
    void s() {
        cout << "Virtual Function in Derived_class";
    }
};

int main() {
    Base *b;
    Derived d_obj;
    b = &d_obj;
    b->s();
}


Output:
Virtual Function in Derived_class
```

If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class. 

We cannot create objects of an abstract class. However, we can derive classes from them and use their data members and member functions (except pure virtual functions).

## Friend Function

A class’s friend function is defined outside that class’s scope, but it has the right to access all private and protected members of the class. Even though the prototypes for friend functions appear in the class definition, friends are not member functions.

A friend function in C++ is a function that is preceded by the keyword “friend.”

Syntax:

```cpp
class class_name 
{    
friend data_type function_name(argument); 
// syntax of friend function.  
};
```

The function can be defined anywhere in the program like a normal C++ function. The function definition does not use either the keyword friend or scope resolution operator.

Example:

```cpp
#include <iostream>
using namespace std;

class Rectangle 
{    
private:        
    int length;    

public:        
    Rectangle() 
    {            
        length = 10;        
    }    
    friend int printLength(Rectangle); // friend function    
};

int printLength(Rectangle b) 
{    
    b.length += 10;    
    return b.length;
}

int main() 
{    
    Rectangle b;    
    cout << "Length of Rectangle: " << printLength(b) << endl;    
    return 0;
}


Output:
Length of Rectangle: 20 
```

**Characteristics of friend function:**

- A friend function can be declared in the private or public section of the class.
- It can be called a normal function without using the object.
- A friend function is not in the scope of the class, of which it is a friend.
- A friend function is not invoked using the class object as it is not in the class’s scope.
- A friend function cannot access the private and protected data members of the class directly. It needs to make use of a class object and then access the members using the dot operator.
- A friend function can be a global function or a member of another class.