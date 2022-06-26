#include <fstream>
#include <iostream>

using namespace std;

int main() {

	char c;
	char line[100];

	ifstream fin("input.txt");
	if (!fin)
	{
		cout << "파일을 찾을 수 없음" << endl;
		exit(100);
	}else
	{
		while(fin.get(c)){
			cout << c;
		} 
	}

	return 0;
}