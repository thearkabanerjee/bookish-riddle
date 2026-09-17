# include <iostream>
using namespace std;

int main(){
    long long a;
    cin >> a;
    int count = 0;

    if (a == 0){
        count++;
    }else{
        while (a!= 0){
            if (a%10 == 0){
                count++;
            }
            a/= 10;
        }
    }
    

    cout << count << endl;
    return 0;
}