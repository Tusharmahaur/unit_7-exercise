#include <iostream>
#include <string>
using namespace std;

class String{
    private:
        string str;
    public:
        // String(string str): str(str) {};
        String(const string &str){
            this->str = str;    
        }

        bool operator==(const String& other) const{ 
            return str == other.str;
        }
};

int main(){
    String str1("hello");
    String str2("hello");
    str1 == str2? cout<<"Strings are equal"<<endl :cout<<"Strings are not equal"<<endl;
    return 0;
}