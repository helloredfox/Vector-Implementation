#include "Vector.h"
#include <iostream>
using namespace std;


// Obj. Management
Vector::Vector(){
    this->data_ptr = new int[CHUNK];
    this->capacity = CHUNK;
    this->n_elems = 0;
}

Vector::Vector(const Vector& v){
    //get length of array
    capacity = v.capacity;
    n_elems = v.n_elems;
    data_ptr = new int [v.capacity];
    //copy each elemnt of the array into the new array
    for(int i = 0; i < v.n_elems; i++)
    {
        data_ptr[i] = v.data_ptr[i];
    }
}; 
Vector& Vector::operator=(const Vector& v){
    if(this != &v){
        delete [] data_ptr;
        data_ptr = new int[v.capacity];
    for(int i = 0; i < v.n_elems; i++){
        data_ptr[i] = v.data_ptr[i];
    }
    }
    return *this;
};

Vector:: ~Vector(){
    delete [] data_ptr;
}
// Accessors
// Return the int in position 0, if any
int Vector::front() const{
    return 0;
};           
 // Return last element (position n_elems-1)    
int Vector::back() const{
    return 0;
};                  
 // Return element in position "pos" (0-based)
int Vector::at(size_t pos) const{
    return 0;
};        
// Return n_elems
size_t Vector::size() const{
    return 0;
};        
// Return n_elems == 0        
bool Vector::empty() const {
    return this->n_elems == 0;
};                 





int main() {
    return 0;
}