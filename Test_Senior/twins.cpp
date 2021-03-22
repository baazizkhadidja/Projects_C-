#include<iostream>
#include<string>
#include<map>

using namespace std;


class Answer
{
    public:
            static bool isTwin(string a, string b)
                {
                    map <char, int> frequence;
                    if(a=="" && b=="")
                    {
                        return false;
                    }
                    if(a.size()!= b.size())
                    {
                        return false;
                    }

                    for(int i=0; i<a.size(); i++)
                        {
                            frequence[tolower(a[i])]=0;
                            frequence[tolower(b[i])]=0;
                        }

                    for(int i=0; i<a.size(); i++)
                        {
                            frequence[tolower(a[i])]++;
                            frequence[tolower(b[i])]--;
                        }

                map<char, int>::iterator itr;
                    for(itr = frequence.begin(); itr !=frequence.end(); itr++)
                    {
                        if(itr->second != 0)
                        {
                            return false;
                        }


                    }
                return true;

                };

};


int main(){


    cout<<Answer::isTwin("mama","aamm")<<endl;
}




