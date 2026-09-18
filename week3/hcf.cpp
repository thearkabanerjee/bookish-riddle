# include <iostream>
using namespace std;

int hcf(int a, int b){
    int highest = 1;

    for (int i = 1; i <= a; i++){
        if (b % i == 0 && a % i ==0){
            if (i > highest){
                highest = i;
            }
        }
    }

    return highest;
}


int main(){
    int a,  b;
    cin >> a>> b;

    int higher, lower;
    if (a >= b){
        higher = a;
        lower = b;
    }else{
        higher = b;
        lower = a;
    }

    cout << hcf(higher, lower) << endl;
    return 0;
}