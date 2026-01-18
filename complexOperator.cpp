// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Complex{
//     private:
//         float real;
//         float imag;
//     public:
//         Complex(double real, double imag): num(real, imag) {}

//         // Overload + operator
//         Complex operator+(const Complex& other) const{
//             return Complex(num.real() + other.num.real(), num.imag() + other.num.imag());
//         }
        
//         //
//         // Display the complex number
//         void display() const{
//             cout << num.real() << " + " << num.imag() << "i" << endl;
//         }
// };

// int main(){
//     Complex c1(2.0, 3.0);
//     Complex c2(4.0, 5.0);
//     Complex c3 = c1 + c2;
//     c3.display(); // Output: 6.0 + 8.0i
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    double real;
    double imag;
    public:
        const int iota = sqrt(-1);

        Complex(){
            cout<<"Enter the real and imaginary parts of complex number:";
            cin>>real>>imag;
        }

};
int main(){
    Complex c1;
    cout<<c1.iota<<endl;
    
    return 0;
}