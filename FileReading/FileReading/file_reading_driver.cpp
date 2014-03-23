//Martha Elena Loera

//a class for reading input .txt files


#include <iostream>
#include <ostream>
#include <string>
#include <fstream>

using namespace std;

void read_file(string file_name){

	string line;
	ifstream myfile(file_name);
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	else {
		cout << "couldn't find the madafaca" << '\n';
	}

}



void main(){
	
	string file = "C:/Users/martha/workspace/Round Robin/FileReading/prueba.txt";
	read_file(file);

	system("pause");

}