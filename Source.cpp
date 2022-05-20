#include <iostream>
using namespace std;
int main()
{
	char s[10] = "mnoneof";
	char cs[] = "no";
	char ss[] = "on";
	if (strpbrk(s,cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	if (strpbrk(s, ss))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}