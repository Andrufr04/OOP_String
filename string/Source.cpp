#include <iostream>
#include "MyString.h" 
using namespace std;

ostream& operator<<(ostream& os, const MyString& obj)
{
    if (obj.getStr() != nullptr)
    {
        os << obj.getStr();
    }
    else
    {
        os << "empty";
    }
    return os;
}
istream& operator>>(istream& is, MyString& obj)
{
    char buff[100];
    is.getline(buff, 100);
    obj.setStr(buff);

    return is;
}


MyString operator+(const char* str1, const MyString& str2)
{
    int newLength = strlen(str1) + strlen(str2.str) + 1;
    MyString temp(newLength);
    strcpy_s(temp.str, strlen(str1) + 1, str1);
    strcat_s(temp.str, newLength, str2.str);

    return temp;
}

int main()
{

    MyString str("HHHHelllllooooo :)");
    cout << str << endl;
    str.Save("T1");



    /*MyString str1{ 'a', 's', 's', 'd', 'f' };
    cout << str1;*/


    /*MyString a("World");
    MyString b;
    b = "Hello " + a;
    cout << b;*/

    /*MyString str1("Hello, ");
    MyString str2("world!");
    cout << str1 << endl << str2 << endl;

    str1 += str2;

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;*/


    /*MyString str1("Hello");
    cout << "str1: ";
    str1.print();
    MyString str2("world!");
    cout << "str2: ";
    str2.print();
    cout << endl << endl;

    str2 = move(str1);
    cout << str1;*/

    /*MyString a = move(str1);
    str1.print();
    a.print();*/


    /*MyString str1("Hello, world!");
    cout << "str1: ";
    str1();
    char a = str1[0];
    cout << endl << a << endl;

    MyString obj2;
    obj2 = str1;
    cout << "2: ";
    obj2();*/

    /*MyString str1("Hello, world!");
    cout << "str1: ";
    str1.print();
    MyString str2 = str1;
    cout << "str2: ";
    str2.print();*/


    /*MyString str("Hello Worl");
    MyString str1("Hello Worl");
    cout << str.MyStrCmp(str1);

    {
        MyString str2;
        MyString str3;
        cout << "Count: " << MyString::GetCount() << endl;
    }
    cout << "Count: " << MyString::GetCount() << endl;*/


    /*MyString str("Hello");
    str.MyDelChr('e');
    str.print();*/

    /*MyString str("Hello");
    MyString str1(" world");

    str.MyStrCat(str1);
    str.print();
    */

    /*MyString str("Hello Wo");
    str.print();
    cout << str.MyChr('t');*/

    /*MyString str1("1234");
    str1.print();
    bool search = str1.MyStrStr("89");
    cout << search;
    search = str1.MyStrStr("12");
    cout << endl << search;*/

    /*MyString str1("Hello, WWworld!");
    MyString str2("123");

    str2.MyStrcpy(str1);

    cout << "1: ";
    str1.print();
    cout << endl << "2: ";
    str2.print();*/



    return 0;
}