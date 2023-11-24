#include "Title.h"

Title::Title()
{
}

Title::Title(wstring s_)
{
	s = s_;
}

Title::~Title()
{
}

void Title::Copy(vector<Word*>& v) {
	v.push_back(new Title(*this));
}

Title::Title(const Title& obj) : Word(obj)
{
	s = obj.s;
}

wstring Title::Get_S() {
	return s;
}
