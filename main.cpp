#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int letraMayor(char c1, char c2){
    c1 = toupper(c1);
    c2 = toupper(c2);

    if(c1 > c2){
        return 1;
    }else if(c1 < c2){
        return -1;
    }
    return 0;
}

int main()
{
    string entrada;

    cin>>entrada;
    vector<char> s1(entrada.begin(), entrada.end());

    cin>>entrada;
    vector<char> s2(entrada.begin(), entrada.end());

    int n = s1.size();
    int caso;

    for(int i = 0; i < n; i++){
        caso = letraMayor(s1[i],s2[i]);
        switch(caso){
            case 1:
                cout<<"1"<<"\n\r";
                return 0;
            break;
            case -1:

                cout<<"-1"<<"\n\r";
                return 0;
            break;
        }
    }
    cout<<"0"<<"\n\r";
    return 0;
}
