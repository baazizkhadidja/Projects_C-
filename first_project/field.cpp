#include<iostream>;
#include<fstream>;
#include<string>;

using namespace std;

int main(){

ifstream f("/home/zake/Bureau/score.txt");


if(f){
string line;
while(getline(f, line))
{
cout<<line<<endl;
}


}




else{cout<<"Erreur, impossible d ouvrir le fichier"<<endl;
}

int p = f.tellg();
cout<<p<<endl;
}


