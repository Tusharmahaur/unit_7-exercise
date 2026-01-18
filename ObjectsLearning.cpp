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

//add time 
// #include <iostream>
// using namespace std;

// class Time{
//     private:
//     int hours,minutes,seconds;
//     public:
//         Time(){
//             cout<<"Enter the hours : ";
//             cin>>hours;
//             cout<<"Enter the minutes : ";
//             cin>>minutes;
//             cout<<"Enter the seconds : ";
//             cin>>seconds;
    
//         }
//         Time add(Time);
//         void display(void);
// };

// Time Time::add(Time t){
//     Time temp;
//     temp.seconds = seconds + t.seconds;
//     temp.minutes = minutes + t.minutes + temp.seconds/60;
//     temp.hours = hours + t.hours + temp.minutes/60;
//     temp.minutes = temp.minutes % 60;
//     temp.seconds = temp.seconds % 60;
//     return temp;
// }

// void Time::display(void){
//     cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds "<<endl;
// }

// int main(){
//     Time t1;
//     Time t2;
//     Time t3 = t1.add(t2);
//     cout<<"Time 1 : ";
//     t1.display();
//     cout<<"Time 2 : ";
//     t2.display();
//     cout<<"Added Time : ";
//     t3.display();
//     return 0;
// }

// //using friend function to add time
// #include <iostream>
// using namespace std;
// class Time{
//     private:
//     int hours,minutes,seconds;
//     public:
//         Time(){
//             cout<<"Enter the hours : ";
//             cin>>hours;
//             cout<<"Enter the minutes : ";
//             cin>>minutes;
//             cout<<"Enter the seconds : ";
//             cin>>seconds;
    
//         }
//         void display(void);
//         friend Time add(Time,Time);
// };
// Time add(Time t1,Time t2){
//     Time temp;
//     temp.seconds = t1.seconds + t2.seconds;
//     temp.minutes = t1.minutes + t2.minutes + temp.seconds/60;
//     temp.hours = t1.hours + t2.hours + temp.minutes/60;
//     temp.minutes = temp.minutes % 60;
//     temp.seconds = temp.seconds % 60;
//     return temp;
// }
// void Time::display(void){
//     cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds "<<endl;
// }

// int main(){
//     Time t1;
//     Time t2;
//     Time t3 = add(t1,t2);
//     cout<<"Time 1 : ";
//     t1.display();
//     cout<<"Time 2 : ";
//     t2.display();
//     cout<<"Added Time : ";
//     t3.display();
//     return 0;
// }

// //using constructor with parameters to add time
// #include <iostream>
// using namespace std;

// class Time{
//     private:
//     int hours,minutes,seconds;
//     public:
//         Time(int h, int m, int s){
//             hours = h;
//             minutes = m;
//             seconds = s;
//         }
//         Time add(Time);
//         void display(void);
// };
// Time Time::add(Time t){
//     Time temp(0,0,0);
//     temp.seconds = seconds + t.seconds;
//     temp.minutes = minutes + t.minutes + temp.seconds/60;
//     temp.hours = hours + t.hours + temp.minutes/60;
//     temp.minutes = temp.minutes % 60;
//     temp.seconds = temp.seconds % 60;
//     return temp;
// }
// void Time::display(void){
//     cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds "<<endl;
// }
// int main(){
//     Time t1(2,45,50);
//     Time t2(3,20,30);
//     Time t3 = t1.add(t2);
//     cout<<"Time 1 : ";
//     t1.display();
//     cout<<"Time 2 : ";
//     t2.display();
//     cout<<"Added Time : ";
//     t3.display();
//     return 0;
// }


// #include <iostream>
// using namespace std;

// class FLOAT{
//     private :
//         float data1,data2;
//     public :
//         FLOAT(float data1, float data2){
//             this ->data1 = data1;
//             this ->data2 = data2;
//         }

//         FLOAT operator+(FLOAT);
//         void displayAdd(void);
//         FLOAT operator-(FLOAT);
//         void displaySub(void);
//         FLOAT operator*(FLOAT);
//         void displayMul(void);
//         FLOAT operator/(FLOAT);
//         void displayDiv(void);
// };

// FLOAT FLOAT::operator+(FLOAT f){
//     FLOAT temp(0,0);
//     temp.data1 = data1 + f.data1;
//     temp.data2 = data2 + f.data2;
//     return temp;
// }

// void FLOAT::displayAdd(void){
//     cout<<"Addition of two float number is : "<<data1<<" + "<<data2<<endl;
// }

// FLOAT FLOAT::operator-(FLOAT f){
//     FLOAT temp(0,0);//declaration for temporary object otherwise they take garbage value
//     temp.data1 = data1 - f.data1;
//     temp.data2 = data2 - f.data2;
//     return temp;
// }
// void FLOAT::displaySub(void){
//     cout<<"Subtraction of two float number is : "<<data1<<" + "<<data2<<endl;
// }

// FLOAT FLOAT::operator*(FLOAT f){
//     FLOAT temp(0,0);
//     temp.data1 = data1 * f.data1;
//     temp.data2 = data2 * f.data2;
//     return temp;
// }

// void FLOAT::displayMul(void){
//     cout<<"Multiplication of two float number is : "<<data1<<" + "<<data2<<endl;
// }

// FLOAT FLOAT::operator/(FLOAT f){
//     FLOAT temp(0,0);
//     temp.data1 = data1 / f.data1;
//     temp.data2 = data2 / f.data2;
//     return temp;
// }

// void FLOAT::displayDiv(void){
//     cout<<"Division of two float number is : "<<data1<<" + "<<data2<<endl;
// }

// int main(){
//     FLOAT f1(10.5,20.5);
//     FLOAT f2(2.5,5.5);
//     FLOAT f3(0,0);

//     f3 = f1 + f2;
//     f3.displayAdd();

//     f3 = f1 - f2;
//     f3.displaySub();

//     f3 = f1 * f2;
//     f3.displayMul();

//     f3 = f1 / f2;
//     f3.displayDiv();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Distance{
//     private:
//         int feet,inches;
//     public:
//         void getInfo(void){
//             feet = 0;
//             inches = 0;
//             cout<<"Enter the feet = ";
//             cin>>feet;
//             cout<<"Enter the inches = ";
//             cin>>inches;
//         }
        
//         Distance operator+(Distance);
//         void display(void);
// };

// Distance Distance::operator+(Distance d){
//     Distance temp;
//     temp.inches = inches + d.inches;
//     temp.feet = feet + d.feet + temp.inches/12;
//     temp.inches = temp.inches % 12;
//     return temp;
// }

// void Distance::display(void){
//     cout<<feet<<" feet "<<inches<<" inches "<<endl;

// }

// int main(){
//     Distance d1;
//     cout<<"Distance 1 :-----> "<<endl;
//     d1.getInfo();
//     d1.display();
//     cout<<"\nDistance 2 :-----> "<<endl;
//     Distance d2;
//     d2.getInfo();
//     d2.display();
//     cout<<"Added Distance : ";
//     Distance d3;
//     d3 = d1 + d2;
//     d3.display();

//     return 0;
// }

// //add weight using member function
// #include <iostream>
// using namespace std;

// class Weight{
//     int kg,grams;
//     public:
//         void getInfo(void){
//             kg = 0;
//             grams = 0;
//             cout<<"Enter the kilogram = ";
//             cin>>kg;
//             cout<<"Enter the grams = ";
//             cin>>grams;
//         }

//         Weight add(Weight);
//         void display(void);
// };

// Weight Weight::add(Weight w){
//     Weight temp;
//     temp.grams = grams + w.grams;
//     temp.kg = kg + w.kg + temp.grams/1000;
//     temp.grams = temp.grams % 1000;
//     return temp;
// }

// void Weight::display(void){
//     cout<<kg<<" killograms "<<grams<<" grams "<<endl;
// }

// int main(){
//     Weight w1;
//     cout<<"Weight 1 :-----> "<<endl;
//     w1.getInfo();
//     w1.display();
//     cout<<"\nWeight 2 :-----> "<<endl;
//     Weight w2;
//     w2.getInfo();
//     w2.display();
//     cout<<"\nAdded Weight : ";
//     Weight w3;
//     w3 = w1.add(w2);
//     w3.display();

//     return 0;
// }

//add weight using friend function
// #include <iostream>
// using namespace std;

// class Weight{
//     int kg,grams;
//     public:
//         void getInfo(void){
//             kg = 0;
//             grams = 0;
//             cout<<"Enter the kilogram = ";
//             cin>>kg;
//             cout<<"Enter the grams = ";
//             cin>>grams;
//         }
//         friend Weight add(Weight,Weight);
//         void display(void){
//             cout<<kg<<" killograms "<<grams<<" grams "<<endl;
//         }
// };

// Weight add(Weight w1,Weight w2){
//     Weight temp;
//     temp.grams = w1.grams + w2.grams;
//     temp.kg = w1.kg + w2.kg + temp.grams/1000;
//     temp.grams = temp.grams % 1000;
//     return temp;
// }

// int main(){
//     Weight w1;
//     cout<<"Weight 1 :-----> "<<endl;
//     w1.getInfo();
//     w1.display();
//     cout<<"\nWeight 2 :-----> "<<endl;
//     Weight w2;
//     w2.getInfo();
//     w2.display();
//     cout<<"\nAdded Weight : ";
//     Weight w3;
//     w3 = add(w1,w2);
//     w3.display();

//     return 0;
// }