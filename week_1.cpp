/*
binary search
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n,num;
        cin>>n;
        
        int a[n],i,l,r,mid,c=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>num;
        sort(a,a+n);
        l=0;
        r=n-1;
        while(l<=r)
        {
            mid=(l+r)/2;

            if(a[mid]==num)
            {
                cout<<num<<" Is present at "<<mid<<endl;
                c=0;
                break;
            }
            else if(num<a[mid])
            {
                r=mid-1;
            }
            else if(a[mid]<num)
            {
                l=mid+1;
            }
        }
        if(c)
        {
            cout<<num<<" Is not present in the array"<<endl;
        }
       
    }
   return 0;
}


#include<iostream> 
using namespace std;
int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        int key;
        cin >> key;
        bool found = 0;
        int comparisions = 0;
        for(int i = 0;i<n;i++){
            comparisions++;
            if(arr[i] == key){
                found = 1;
                break;
            }
        }
        if(found){
            cout << "Present ";
        } else {
            cout << "Not Present ";
        }
        cout << comparisions << endl;
    }
}