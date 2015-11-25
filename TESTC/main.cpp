#include<iostream>
using namespace std;


typedef struct
{
    int p;
}hello;

template <class T>
class smartPtr
{
    T *ptr;
public:
    smartPtr(T *p=NULL){
        ptr = p;
    }
    ~smartPtr(){
        delete ptr;
    }
    T& operator*(){
        return *ptr;
    }
    T* operator->(){
        return ptr;
    }
};


int main(){
    smartPtr<hello> ptr(new hello());
    ptr->p = 20;
    cout<< ptr->p<<endl;
    auto_ptr<hello> ptr1(new hello());
    ptr1->p = 78;
    cout<< ptr1->p <<endl;
    return 0;
}