#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
#include <typeinfo>

using namespace std;
namespace fs = std::filesystem;


int main(){


	vector<string> fileList;
	// fileList.push_back("11");
	// cout << fileList[0];
	// string data {"myImage.png"};
	// string DirData {"MyData" };
	// string DirImage{"Image"};
	// fs:path SavePath = DirData / DirImage / data;
	//연산자 오버로딩이 되어있어서 이렇게 사용 가능

	// fs::path p = "Desktop/c++/basic/ace.txt"; 
	// ofstream(absolute(p)).put('a');

	fs::path p = fs::current_path();
	fs::path file("Desktop/c++/basic/ace.txt");
	fs::directory_iterator iter(p);
	// 폴더 내 순환
	// fs::recursive_directory_iterator iter(p);
	// 폴더 내 전부다 순환


	for (auto const &i : iter){
		if (fs::is_directory(i.path())){
			fileList.push_back(i.path());
		}
	}

	unsigned long a = fileList.size();
	
	for (unsigned long i = 0 ;i < a ;i++)
	{
		cout << fileList[i] << endl;

	}
	cout << "파일 개수 입니다. : " << a << endl ;
    
	// for(auto &i = iter; i != fs::end(iter); ++i){
	// 	cerr << i->path() << endl ;
	// }


	// cout << "상대 경로 : " << file.relative_path() << endl;
	// cout << "절대 경로 : "	 << fs::absolute(file) << endl;
	// cout << "공식적인 절대경로" << fs::canonical(file) << endl;

	
}