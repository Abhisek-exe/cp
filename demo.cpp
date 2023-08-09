#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};
class dog:public Animal{
    public:
    void speak(){
        cout<<"bartking"<< endl;
    }
};
int main(){
    dog obj1;
    obj1.speak();
}
  