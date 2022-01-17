#include<iostream>
#include<cstring>
using namespace std;
class CopyConstructor
{
    char *s_copy;
    public:
    CopyConstructor (const char *str)
    {
        s_copy = new char[16];  //Dynamic memory alocation
        strcpy(s_copy, str);
        std::cout <<  "constructor called"  << std::endl;
    }
    
    CopyConstructor (const CopyConstructor &str)
    {
        s_copy = new char[16]; //Dynamic memory alocation
        strcpy(s_copy, str.s_copy);
        std::cout <<  "copy constructor called"  << std::endl;
    }
    
    void concatenate(const char *str)
    {
        strcat(s_copy, str); //Concatenating two strings
    }

    ~CopyConstructor()
    { 
        delete [] s_copy;
        std::cout << "deconstroctor called" << std::endl;
    }

    void display()
    {
        cout<<s_copy<<endl;
    }
};
/* main function */
int main()
{
    std::cout << "/** copy constructor test" << std::endl;
    CopyConstructor c1("Copy");
    {
        CopyConstructor c2 = c1;    //copy constructor
    }
    std::cout << "**/" << std::endl;
    // c1.display();
    // c2.display();
    // c1.concatenate("Constructor");    //c1 is invoking concatenate()
    // c1.display();
    // c2.display();
    return 0;
}