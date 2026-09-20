# include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i = 0; i <a; i++){
        long long m ; 
        cin >> m;
        
        arr[i] = m;
    }
    long long max = arr[0];
    int index = 0;

    for(int i = 0; i <a; i++){
        if (max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    cout << max << " "<< index +1 << endl;
    return 0;
}