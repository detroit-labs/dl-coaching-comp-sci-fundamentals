DL Computer Science Fundamentals Final Project
==============================================

For your final project, you will be writing a pair of container
classes. One will be a stack, and the other a queue. These container
classes should be generic, using templates, to support containing any
primitive type such as int, bool, char, pointer or struct ­ you will
not be evaluated on storing class instances or deeply-copied
arrays. Do not use the STL. You may use other headers from the C++
Standard Library or C Standard Library if you so choose, but
`iostream` is likely the only header that you will find useful.

Requirements
------------

1. Create an abstract base class called LinearContainer class with
   virtual methods `push`, which takes an element to contain as its
   argument and stores it in the container, and `pop`, which takes no
   arguments, removes an element from the container and returns
   it. This is the class where the vast majority of your
   implementation should go, as the two classes to be derived from it
   function quite similarly. It should be a template class generic
   around the type of elements it stores. This class should have a
   declared initial maximum size and should handle preparing some
   internal storage mechanism for containing up to that many elements
   in heap memory. How you choose to implement the internal storage is
   up to you, but an implementation encapsulating an array or list
   structure are probably your best bets here. Any methods, fields or
   properties not explicitly mentioned below to be public should be
   protected or private.
2. Your LinearContainer class should provide a public method
   `is_empty()` which takes no arguments and returns a boolean
   indicating whether the container currently contains no elements.
3. Your LinearContainer class should provide a public method
   `is_full()` which takes no arguments and returns a boolean
   indicating whether the container currently contains its maximum
   number of elements.
4. Your LinearContainer class should have a public constructor that
   takes as single integer as an argument. This is the initial maximum
   number of elements it should be prepared to contain. Have your
   constructor allocate enough heap memory to store up to the maximum
   amount of elements.
5. Your LinearContainer class should also have a default constructor
   that sets the initial maximum number of elements to 10.
6. Create a Stack class that extends your LinearContainer class. This
   class will use the internal representation in the LinearContainer
   class to provide a LIFO (last in, first out) storage container.
7. Create a Queue class that extends your LinearContainer class. This
   class will use the internal representation in the LinearContainer
   class to provide a FIFO (first in, first out) storage container.
8. Override the `push` methods for Stack and Queue so that they store
   elements appropriately for the class they are being implemented on.
9. Override the `pop` methods for Stack and Queue so that they remove
   and return elements appropriately for the class they are being
   implemented on. Calling `pop` on an empty container should throw
   an exception or cause an assertion to fail.
10. Pushing into a full container should expand the maximum capacity
    for the container. If the push method is called on either the
    Stack or the Queue while the container is full, double the
    container capacity from its current capacity to accommodate the
    new element, and in the process be sure to once again allocate
    enough heap space so that the container can store up to its
    maximum number of elements. Do not worry about reducing the size
    of a container with a large capacity that is mostly unutilized.
11. If a container has its capacity expanded, the existing elements
    should be copied into a new storage space adequate to hold the data
    structure. Clean up any allocated memory that is no longer needed
    after the data has been copied to its new memory location.
12. Create a destructor for the LinearContainer class which deallocates
    any heap-allocated memory when the object is destroyed.
13. Create a preprocessor macro `log(x)` in a header called
    `debug.hpp`. This macro will be used to handle any output other
    than the output of the main program. This macro should be defined
    in such as way that it only creates output if `DEBUG` is defined
    at compile time. Where this macro creates additional debugging
    output is up to you, but some suggestions are when space is
    allocated for a container, when data is copied to newly allocated
    space, when the container is full or when the container is empty.
14. Classes should be in their own header files, and should include
    any files that they depend on directly, so that their dependencies
    are independent of the main implementation.
15. Utilize preprocessor definitions for multiple inclusion
    prevention. This ensures that if a file is included in the program
    once, its definitions are not overridden by the same file being
    included again by another include directive.

Scoring
-------

Each of the above 15 requirements will be assessed with a point value:

* 2 points - This requirement was completed
* 1 point - This requirement was partially completed or did not function
as outlined.
* 0 points - This requirement was not completed.

A score of 15 will be considered passing.

Sample Main Program
-------------------

``` c++
#include <iostream>
#include "stack.hpp"
#include "queue.hpp"

int main(void) {
    std::cout << "== Stack == " << std::endl;
    Stack<int> s = Stack<int>();

    for(int i = 1; i <= 15; i++)
        s.push(i);

    for(int i = 0; i < 10; i++)
        std::cout << s.pop() << std::endl;

    for(int i = 101; i <= 106; i++)
        s.push(i);

    while(!s.is_empty())
        std::cout << s.pop() << std::endl;

    std::cout << std::endl << "== Queue == " << std::endl;
    Queue<int> q = Queue<int>();

    for(int i = 1; i <= 15; i++)
        q.push(i);

    for(int i = 0; i < 10; i++)
        std::cout << q.pop() << std::endl;

    for(int i = 101; i <= 106; i++)
        q.push(i);

    while(!q.is_empty())
        std::cout << q.pop() << std::endl;

    return 0;
}
```

Sample Output
-------------
``` shellsession
g++ -Wall final.cpp -o final && ./final
== Stack ==
15
14
13
12
11
10
9
8
7
6
106
105
104
103
102
101
5
4
3
2
1

== Queue ==
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
101
102
103
104
105
106
```
