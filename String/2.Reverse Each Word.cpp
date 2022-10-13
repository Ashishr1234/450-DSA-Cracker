#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char str[]){
    int j=0;
    for(int i=0;i<=strlen(str);i++){
        if(str[i]==' ' || str[i]=='\0'){
            for(int k=j,l=i-1;l>k;k++,l--){
                char t=str[k];
                str[k]=str[l];
                str[l]=t;
            }
            j=i+1;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
