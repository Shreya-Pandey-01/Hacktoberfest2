//largest word length in a sentence
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    
    int maxlength=0,length=0;
    int st=0,maxst=0;
    for(int i=0;i<n;i++){
        if(a[i]==' ' || a[i]=='\0'){
            maxlength=max(maxlength,length);
            length=0;
            maxst=st;
            st=i+1;
        }
        else
            length++;
        if(a[i]=='\0')
            break;
    }
    cout<<maxlength<<endl;
    for(int i=0;i<maxlength;i++)
        cout<<a[i+maxst];
    return 0;
}
