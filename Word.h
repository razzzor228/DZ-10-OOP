#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <vector>
#include <string>
#include <cwchar>
#include <io.h>
#include <fcntl.h>
#include <locale>
#include <codecvt>
using namespace std;
class Word
{
	wstring s;
public:
	Word();
	Word(wstring s_);
	virtual ~Word();
	virtual void Copy(vector<Word*>& v);
	Word(const Word& obj);
	virtual wstring Get_S();
};

