#pragma once
#include <initializer_list>
#include <iostream>
using namespace std;


class MyString
{
	char* str;
	int length;
	static int countLiveObj;
	friend MyString operator+(const char* lhs, const MyString& rhs);

public:
	MyString();
	MyString(int length);
	MyString(const char* input);

	MyString(initializer_list<char> initList);

	const char* getStr() const;
	int getLength() const;
	void setStr(const char* input);
	void setLength(int len);

	MyString(MyString&& obj);
	MyString& operator= (MyString&& obj);

	MyString(const MyString& str1);

	void input();
	void print();

	int MyStrLen();
	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* _str);
	int MyChr(char c);
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);

	////
	MyString& operator=(const MyString& obj);
	char operator[] (int index);
	void operator() ();
	////

	static int GetCount();

	MyString& operator+=(const MyString& other);

	void Save(const char* filename);

	~MyString();
};