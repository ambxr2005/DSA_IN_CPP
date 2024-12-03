#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    // Vectors:
    // STL: Standard Template Library.

    vector<int> vec = {1, 2, 3};
    cout << vec[0] << endl;

    vector<int> vec1(3, 4);

    for (int i : vec1) // This is for-each loop
    {
        cout << i << endl;
    }

    /*
        Vector functions:
            1. size:
            2. push_back
            3. pop_back
            4. front
            5. back
            6. at
    */

    cout << "Size of vec1 = " << vec1.size() << endl; // use of sie function
    vec.push_back(25);                                // addition of 25 at the back of the vector
    for (int i : vec)
    {
        cout << i << endl; // printing of elements of vector after push of 25
    }

    vec.pop_back(); // removal of last element of vector
    for (int i : vec)
    {
        cout << i << endl; // printing of elements of vector after pop of 25
    }

    cout <<"The first elment of the vec is: " << vec.front() << endl;
    cout <<"The last elment of the vec is: " << vec.back() << endl;

    vec.push_back(25);
    int index = 2;
    cout << "The element at index 2 is: " << vec.at(index) << endl;

    // Static vs Dynamic Allocation of memory:
    // Static allocation of memory: Memory is allocated at compile time
    // Dynamic allocation of memory: Memory is allocated at runtime

    // Arrays are created inside stack memory. Static allocation occurs in stack memory.
    // Vectors are created inside heap memory. Dynamic allocation occurs in heap memory.

    vector<string> app;
    app.push_back("Apple");
    app.push_back("Banana");
    app.push_back("Cherry");

    // Whenever we perform a push operation, each time the capacity increases by double if the capacity is full. 

    cout << app.at(2) << endl;
    cout << "The size is: " << app.size() << endl;
    cout << "The capacity is: " << app.capacity() << endl; // It gives how much elements can the vector hold.

    return 0;
}
