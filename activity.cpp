#include <bits/stdc++.h>
using namespace std;



struct act{
    int start,finish;
};
bool activityCompare(act a,act b){
 return (a.finish<b.finish);
}
void activityse(act arr[],int n){
  sort(arr,arr+n,activityCompare);
 int i=0;
 cout<<"("<<arr[i].start<<" ,"<<arr[i].finish<<"),";
 int j;
 for(j=1;j<n;j++){
    if(arr[j].start>=arr[i].finish)
        {
      cout<<"("<<arr[j].start<<" ,"<<arr[j].finish<<")";
      i=j;
    }
 }

}
int main(){
    int i,j,n;
    cout<<"enter the no. of  elements in the array ";
    cin>>n;
    act arr[n];
    cout<<"enter the elements in array ";
    for(i=0;i<n;i++){
        cin>>arr[i].start;
        cin>>arr[i].finish;
    }

    activityse(arr,n);

    return 0;
}
