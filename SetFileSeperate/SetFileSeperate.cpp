#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cerr << "This program obtains orginal set file and randomly seperate it into train_val or test set file line by line. \n"
			<< "Usage: " << argv[0]
			<< " \"Path of original set file\" "
			<< " \"Path of train_val set file\""
			<< " \"Path of test set file\"" << std::endl;
		system("pause");
		return 1;
	}



	fstream _originalSetFile;
	fstream _trainSetFile;
	fstream _testSetFile;
	string InputDir = "";

	_originalSetFile.open(argv[1], ios::in);
	if (!_originalSetFile){
		std::cout << "---------- 指定的set文件不存在 ---------- " << std::endl;
		return 1;
	}
	else{
		_trainSetFile.open(argv[2], ios::out);
		if (!_trainSetFile) {
			std::cout << "---------- train_val.set文件创建失败！ ---------- " << std::endl;
			return 1;
		}
		_testSetFile.open(argv[3], ios::out);
		if (!_testSetFile) {
			std::cout << "---------- test.set文件创建失败！ ---------- " << std::endl;
			return 1;
		}
		if (_trainSetFile && _testSetFile) { 
			while (getline(_originalSetFile, InputDir)){
				int tmp = rand() % 10;
				if (tmp < 7){
					_trainSetFile << InputDir << endl;
				}
				else {
					_testSetFile << InputDir << endl;
				}
			}//	end of while
			std::cout << "---------- train_val.set文件写入成功！ ---------- " << std::endl;
			std::cout << "---------- test.set文件写入成功！ ---------- " << std::endl;
			_originalSetFile.close();
			_trainSetFile.close();
			_testSetFile.close();
		}
		else { return 1; }
	}// end of if (!_originalSetFile)

	system("pause");
	return 0;
}