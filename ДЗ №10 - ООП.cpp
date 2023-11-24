#include "Title.h"
#include "Uppercase.h"

struct Leaks {
	~Leaks() {
		_CrtDumpMemoryLeaks();
	}
};
Leaks _l;

int wmain(int argc, wchar_t* argv[])
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stderr), _O_U16TEXT);
	wifstream in("txt.txt");
	wofstream out("txt1.txt");
	in.imbue(locale(in.getloc(), new codecvt_utf8<wchar_t, 0x10ffff, consume_header>));
	wchar_t c;
	wstring s;
	vector<Word*> v;
	for (;in; ) {
		in.get(c);
		if (in.eof()) break;
		s = s + c;
	}
	out.imbue(locale(out.getloc(), new codecvt_utf8<wchar_t, 0x10ffff, consume_header>));
	wcout << s;
	wcout << endl;
	int Checker = 0;
	int checker = 0;
	wstring s1 = L"";
	for (int i = 0; i < s.size(); i++) {
		if ((L'а' <= s[i] && s[i] <= L'я') || (L'А' <= s[i] && s[i] <= L'Я'))
		{
			if (s1 == L"") {
				if (L'а' <= s[i] && s[i] <= L'я')checker = 1;
				if (L'А' <= s[i] && s[i] <= L'Я')Checker = 1;
			}
			s1 = s1 + s[i];
		}
		else
		{
			if (Checker == 1)v.push_back(new Title(s1));
			if (checker == 1)v.push_back(new Uppercase(s1));
			Checker = 0;
			checker = 0;
			s1 = L"";
		}
	}
	vector<Word*> V;
	for (int i = 0; i < v.size(); i++) {
		v[i]->Copy(V);
	}
	for (int i = 0; i < V.size(); i++) {
		out << V[i]->Get_S() << endl;
		wcout << V[i]->Get_S() << endl;
	}
	for (int i = 0; i < v.size(); i++) {
		delete v[i];
	}
	for (int i = 0; i < V.size(); i++) {
		delete V[i];
	}
}