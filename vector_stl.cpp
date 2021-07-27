/*

    =======================================VECTOR IS A RESIZABLE ARRAY=========================================


*/




/*
Iterators

1. begin() – Returns an iterator pointing to the first element in the vector
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3. rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
5. cbegin() – Returns a constant iterator pointing to the first element in the vector.
6. cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7. crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
8. crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
*/



/*
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.
*/



/*
Modifiers:

assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
*/


/*
All Vector Functions :

vector::begin() and vector::end()
vector rbegin() and rend()
vector::cbegin() and vector::cend()
vector::crend() and vector::crbegin()
vector::assign()
vector::at()
vector::back()
vector::capacity()
vector::clear()
vector::push_back()
vector::pop_back()
vector::empty()
vector::erase()
vector::size()
vector::swap()
vector::reserve()
vector::resize()
vector::shrink_to_fit()
vector::operator=
vector::operator[]
vector::front()
vector::data()
vector::emplace_back()
vector::emplace()
vector::max_size()
vector::insert()
*/


#include <iostream>
#include <iomanip>

#include <vector>

using namespace std;


void display (vector <int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";                 // same thing as above but different syntax
    }
    cout << endl;
}

main ()
{
    vector <int> vec;                   // declaration of a vector
    int element;

    // push back
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element to be added to vector: ";
        cin >> element;
        vec.push_back (element);
    }

    // size of a vector
    cout << "\nSize of the vector is " << vec.size() << endl;

    display (vec);

    // pop
    vec.pop_back();                     // removes last element

    display(vec);



    // insert
    // for this, we need an iterator as it is the first parameter for insert() method
    vector <int> :: iterator itr = vec.begin();                 // itr points to begin of vector
    vec.insert (itr + 2, 12);                                   // inserts 12 at 2nd (starting from 0) position

    display(vec);

    vec.insert (itr + 2, 3, 15);                                // inserts 15 3 times starting from position 2
    display (vec);
}