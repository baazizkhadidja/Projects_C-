#include<iostream>;
using namespace std;

int main()
    {
    int a = 15;//la déclaration + l'initiation de la variable  a
    int& b(a);// création de la référence de la variable a
    int* p = &a;// création du pointeur de la variable a

    cout << a <<endl;//la variable  a
    cout << b <<endl;// la référence de la variable a
    cout << p <<endl;// le pointeur de la variable a
    cout << *p <<endl;// la valeur de la variable a pointée
    }



int main1(){

string first_name = "khadidja";
string& ismi(first_name);



string& ana(first_name);


string & me(first_name);


string &doody(first_name);



string * p_ana(&ana);

string * p_me(&me);

string * p_doody(&doody);

cout <<p_ana<<endl;
cout <<p_me<<endl;
cout <<p_doody<<endl;
return 0;

}

