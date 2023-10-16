#include<iostream>
using namespace std;
int main(){
    int x , y , z;
    cin>>x>>y>>z;
    if (x+y > z || x+z > y || y+z > x){
        if (x==y && y==z){
            cout<<"Eqilateral"<<endl;
        }
        else if(x==y || x==z || y==z)
        {
            cout<<"Isocules"<<endl;
        }
    }
    else{
        cout<<"Triangle not possible"<<endl;
        }
}