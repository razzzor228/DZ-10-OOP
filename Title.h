#pragma once
#include "Word.h"
class Title : public Word
{
	wstring s;
public:
	Title();
	Title(wstring s_);
	~Title();
	void Copy(vector<Word*>& v);
	Title(const Title& obj);
	wstring Get_S();
};

