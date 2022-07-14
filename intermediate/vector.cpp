#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }

    for(auto element:v)
        cout << element << endl;

    v.pop_back();

    vector<int> v2(3, 50); //initialising vector with size 3 with value 50 at each index

    swap(v, v2);
    sort(v.begin(), v.end());
    for(auto element:v){
        cout<<element<<endl;
    }

    return 0;
}