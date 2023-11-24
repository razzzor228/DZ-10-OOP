#pragma once
#include "Word.h"
class Uppercase : public Word
{
	wstring s;
public:
	Uppercase();
	Uppercase(wstring s_);
	~Uppercase();
	void Copy(vector<Word*>& v);
	Uppercase(const Uppercase& obj);
	wstring Get_S();
};

