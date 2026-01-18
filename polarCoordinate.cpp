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

#include <iostream>

using namespace std;

class Complax{
    private:
        float real,img;
    public:
    
        //constructor for one time initialisation 
            // Complax(){
            //     cout<<"Enter the Real part of number : ";
            //     cin>>real;
            //     cout<<"Enter the Imaginary part of number : ";
            //     cin>>img;
            // }

        //member fucntion 
        void getInfo(void){ //after use constructor no need for this function 
            cout<<"Enter the Real number : ";
            cin>>real;
            cout<<"Enter the Imaginary number : ";
            cin>>img;
        }

        void display(void){
            cout<<real<<"+"<<img<<"i"<<endl;
        }

        friend Complax operator+(Complax,Complax);

    
};

Complax operator+(Complax a,Complax b){
    Complax temp;
    temp.real = a.real + b.real;
    temp.img = a.img + b.img;
    return temp;
}

int main(){
    Complax obj1;
    Complax obj2;
    Complax obj3;
    obj1.getInfo();
    cout<<"First complex number is : ";
    obj1.display();
    obj2.getInfo();
    cout<<"Second complex number is : ";
    obj2.display();

    obj3 = obj1 + obj2;
    cout<<"Addition of two complex number is : ";
    obj3.display();
}
