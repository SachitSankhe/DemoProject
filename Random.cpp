#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

string random(int len)
{
	string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string r;
	srand(time(NULL));
	for(int i = 0; i < len; i++) r.push_back(a.at(size_t(rand() % 62)));
	return r;
	int a = 12;
	cout<<a<<endl;
	a++;
	cout<<a<<endl;
	
}

int main()
{
	cout << random(32) << endl;
	cin.get();
	return 0;
}
