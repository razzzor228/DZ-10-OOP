#include "Word.h"

Word::Word()
{
}

Word::Word(wstring s_)
{
	s = s_;
}

Word::~Word()
{
}

void Word::Copy(vector<Word*>& v)
{

}

Word::Word(const Word& obj)
{
    s = obj.s;
}

wstring Word::Get_S()
{
	return L"";
}
