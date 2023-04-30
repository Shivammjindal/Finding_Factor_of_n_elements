#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    int s = 2;
    int sb = 2;
    int e = a;
    int eb = b;

    vector<vector<int>>factors;

    vector<int>facta;
    vector<int>factb;

    int i = 0;
    int ans = 1;
    cout << "\n Factors of a is \n";
    while(s <= e){

        if((a%s == 0) && (a != 0)){
            facta.push_back(s);
            cout << s << endl;
            a = a/s;
        }
        if(a%s != 0 || a == 0){
            s++;
        }
    }

    cout << "\nfactors of b is " << endl;

    while(sb <= eb){

        if((b%sb == 0) && (b != 0)){
            factb.push_back(sb);
            cout << sb << endl;
            b = b/sb;
        }
        if(b%sb != 0 || b == 0){
            sb++;
        }
    }

    cout << "\n\nHCF is \n\n";

    if(facta.size() < factb.size()){

        for(int i = 0; i < facta.size(); i++){
            int count = 1;
            for(int j = i; j < factb.size(); j++){

                if(count < 2){

                    if(facta[i] == factb[j]){
                        ans = ans * facta[i];
                        cout << endl << ans << endl;
                        count ++;
                    }
                }

                else
                    break;
            }
        }
    }

    else{

        for(int i = 0; i < factb.size(); i++){
            int count = 1;
            for(int j = i; j < facta.size(); j++){

                if(count < 2){

                    if(facta[j] == factb[i]){
                        ans = ans * facta[j];
                        cout << endl << ans << endl;
                        count ++;
                    }
                }

                else
                    break;
            }
        }
    }

    cout << endl << endl<< ans << endl;

    return 0;
}