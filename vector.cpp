#include <vector>
#include <iostream>

using std::cout;
using std::vector;

void part1() {
    //inital a int vector called vec
    vector<int>vec;

    //add 50000 ints to the vector
    for(int i=0; i<50000; i++){
        vec.push_back(i);
    }
    
    //record the size and capacity
    cout << "After adding elements: Size = " << vec.size() 
        << ", Capacity = " << vec.capacity()
        <<".\n";

    //resize to half its size
    vec.resize(vec.size()/2);
    cout << "After resizing, Size = " << vec.size() 
        << ", Capacity = " << vec.capacity()
        <<".\n";

    //shrink to fit
    vec.shrink_to_fit();
    cout << "After shrink_to_fit, Size = " << vec.size() 
        << ", Capacity = " << vec.capacity()
        <<".\n";
    

}

void part2() {
    //create vector called boolVec with 10000 ele valued in true
    vector<bool>boolVec(10000,true);

    //create vector called charVec with 10000 ele valued in a
    vector<char>charVec(10000, 'a');

    // Calculate memory usage
    //this part i try the chatgpt to give me a hint for using the capacity to get the accurate memory usage
    size_t boolMemUsage = sizeof(boolVec) + (boolVec.capacity() / 8);
    size_t charMemUsage = sizeof(charVec) + (charVec.capacity() * sizeof(char));
    
    //print result
    cout << "Memory usage of vector<bool>: " << boolMemUsage << "bytes\n"
        << "Memory usage of vector<char>: " << charMemUsage << "bytes\n ";
}

int main() {
    part1();
    part2();
    return 0;
}
