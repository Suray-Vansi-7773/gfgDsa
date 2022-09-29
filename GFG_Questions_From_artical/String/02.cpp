#include <bits/stdc++.h>
using namespace std;
bool fun(char arr[]){
    // char arr2[100] = "q,w,e,r,t,y,u,i,o,p,l,k,j,h,g,f,d,s,a,z,x,c,v,b,n,m";
    for(int i = 0; arr[i]!='\0';i++){
        if('a'<=arr[i] && 'z'>=arr[i]){
            return true;
        }

    }
    return false;

}
 
int main(){
    char arr[100] = "dilipsingh";
    cout<<fun(arr);
    
}