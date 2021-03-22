#include <string>
#include <iostream>
#include <cstring>
#include <dirent.h>
#include <unistd.h>

using namespace std;

//! This class defines a method to locate the universe-formula??????????????????????????????? file
class Answer
{
public:
    static bool locateUniverseFormula(string &formulaPath) {
  	    const char tmpPath[] = "/tmp/documents";
	    const char fileName[] = "universe-formula";
	    string tmpformulaPath;
	    bool founded = false;

	    Recursively(tmpPath, fileName, founded, tmpformulaPath);
	    formulaPath = tmpformulaPath;
	    return founded;
	}
	static void Recursively(const char *basePath, const char *fileName, bool &founded, string &fullPath){
	    char path[1024];
	    struct dirent *ent;
	    DIR *dir = opendir(basePath);
	    if (!dir) return;

	    while ((ent = readdir(dir)) != NULL)
	    {
			if (strcmp(ent->d_name, ".") != 0 && strcmp(ent->d_name, "..") != 0)
			{
				if (!strcmp(ent->d_name, fileName))
					{
					fullPath = string(basePath) + "/" + string(fileName);
						founded = true;
					}
				strcpy(path, basePath);
				strcat(path, "/");
				strcat(path, ent->d_name);
				if (!founded) Recursively(path, fileName, founded, fullPath);
			}
	    }
	    closedir(dir);
	}
};



int main(){

string pathResult;
bool found = Answer::locateUniverseFormula(pathResult);
cout << "In this example, the formula path is:" << endl;
cout << pathResult << endl;
}
