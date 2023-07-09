#include <bits/stdc++.h>

using namespace std;


int main(){

    list <int> mainList;
    int b;
    while(true){
        cin>>b;
        if(b==-1)break;
        mainList.push_back(b);
    }
    mainList.sort();
    mainList.unique();
    for(int a:mainList){
        cout<<a<<" ";
    }
    return 0;
}