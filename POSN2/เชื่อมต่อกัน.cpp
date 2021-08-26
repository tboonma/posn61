
#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    n = n+1;
    int a[n];
    for(int i=0 ; i<n ; i++){
        a[i] = 0;
    }
    int t,f;
    char z,kp;
    int o=0,p=0;
    for(int i=0 ; i<k ; i++){
        cin >> z >> t >> f;
        if( z == 'c'){
            if(a[t] == 0 && a[f] == 0){
                a[t] = t;
                a[f] = t;
            }
            if(a[t] != 0 && a[f] == 0){
                a[f] = t;
            }
            if(a[t] == 0 && a[f] !=0){
                a[t] = f;
            }
            if(a[t] != 0 && a[f] != 0){
                    kp = a[t];
                for(int j=1 ; j<n ; j++){
                    if(a[j] == kp){
                        a[j] = a[f];
                    }
                }
            }
            //for(int j=1 ; j<n ; j++){
            //    cout << a[j] << " ";
            //}
            //cout << endl;
        }
        if( z == 'q'){
            if(a[t] == a[f] ){
                o++;
            }
            else{
                p++;
            }
            if(t != f && a[t] == 0 && a[f] ==0 ){
                o--;
                p++;
            }
        }
    }
    cout << o << " " << p;
}
