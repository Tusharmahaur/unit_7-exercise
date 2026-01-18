// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Polar{
//     private:
//         float radius,angle;
//     public:
//         //constructor for operator overloading 
//         Polar(float radius,float angle){
//             this ->radius = radius;
//             this ->angle = angle;
//         }
        
//         //operator overloading for +
//         Polar operator+(Polar);
//         void display(void);

// };

// Polar Polar::operator+(Polar p){
//     Polar object;
    
// }
// int main(){
    
//     return 0;
// }

// #include <iostream>

// using namespace std;

// class Complax{
//     private:
//         float real,img;
//     public:
    
//         //constructor for one time initialisation 
//             // Complax(){
//             //     cout<<"Enter the Real part of number : ";
//             //     cin>>real;
//             //     cout<<"Enter the Imaginary part of number : ";
//             //     cin>>img;
//             // }

//         //member fucntion 
//         void getInfo(void){ //after use constructor no need for this function 
//             cout<<"Enter the Real number : ";
//             cin>>real;
//             cout<<"Enter the Imaginary number : ";
//             cin>>img;
//         }

//         void display(void){
//             cout<<real<<"+"<<img<<"i"<<endl;
//         }

//         friend Complax operator+(Complax,Complax);

    
// };

// Complax operator+(Complax a,Complax b){
//     Complax temp;
//     temp.real = a.real + b.real;
//     temp.img = a.img + b.img;
//     return temp;
// }

// int main(){
//     Complax obj1;
//     Complax obj2;
//     Complax obj3;
//     obj1.getInfo();
//     cout<<"First complex number is : ";
//     obj1.display();
//     obj2.getInfo();
//     cout<<"Second complex number is : ";
//     obj2.display();

//     obj3 = obj1 + obj2;
//     cout<<"Addition of two complex number is : ";
//     obj3.display();
// }


// //without using friend function to add two complex number 
// #include <iostream>
// using namespace std;

// class Complex{
//     private:
//         float real,img;
//     public:
    
     
//         void getInfo(){ //after use constructor no need for this function
//                 cout<<"Enter the Real part of number : ";
//                 cin>>real;
//                 cout<<"Enter the Imaginary part of number : ";
//                 cin>>img;
//             }

//         //member fucntion 
//         void display(void){
//             cout<<real<<"+"<<img<<"i"<<endl<<endl;
//         }

//         Complex add(Complex c1, Complex c2){
//             Complex temp;
//             temp.real = c1.real + c2.real;
//             temp.img = c1.img + c2.img;
//             return temp;
//         }
// };

// // Complex Complex::add(Complex &c){
// //     Complex temp;
// //     temp.real = real + c.real;
// //     temp.img = img + c.img;
// //     return temp;
// // }

// int main(){
//     Complex obj1;
//     cout<<"First complex number is ---------> "<<endl;
//     obj1.getInfo();
//     obj1.display();
//     Complex obj2;
//     cout<<"Second complex number is ---------> "<<endl;
//     obj2.getInfo();
//     obj2.display();
//     Complex obj3 = obj3.add(obj1,obj2);
//     cout<<"Addition of two complex number is : ";
//     obj3.display();
//     obj1.display();
//     obj2.display();

//     return 0;
// }