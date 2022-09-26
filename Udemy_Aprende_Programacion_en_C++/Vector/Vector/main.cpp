#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    int tam = v.size();
    for(int i = 0 ; i<tam ; i++){
        cout << v[i] << endl;
    }
    cout << "Hello World!" << endl;
    return 0;
}
