#include <iostream>
using namespace std;

class Float{
    private:
        float data;
    public:
        Float(float d){
            data = d;
        }    
        Float operator+(Float f)/*{
            return Float(data + f.data);
        }*/;
        Float operator-(Float f){
            return Float(data - f.data);
        }
        Float operator*(Float f){
            return Float(data * f.data);
        }
        Float operator/(Float f){
            return Float(data / f.data);
        }
        void display(){
            cout << data << endl;
        }
};

Float Float::operator+(Float f){
    Float temp = Float(data + f.data);
    return temp;
}

int main(){
    Float f1(10.2);
    Float f2(2.0);
    Float f3(0.0);
    f3 = f1 + f2;
    cout << "Addition: ";
    f3.display();
    f3 = f1 - f2;
    cout << "Subtraction: ";
    f3.display();
    f3 = f1 * f2;
    cout << "Multiplication: ";
    f3.display();
    f3 = f1 / f2;

    cout << "Division: ";
    f3.display();
    return 0;
}