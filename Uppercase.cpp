#include "Uppercase.h"

Uppercase::Uppercase()
{
}

Uppercase::Uppercase(wstring s_)
{
	s = s_;
}

Uppercase::~Uppercase()
{
}

void Uppercase::Copy(vector<Word*>& v)
{
}

Uppercase::Uppercase(const Uppercase& obj) : Word(obj)
{
	s = obj.s;
}

wstring Uppercase::Get_S() {
	return L"";
}
