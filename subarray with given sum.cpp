#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        int last=0;
        int start=0;
        unsigned long long  curr_sum=0;
        bool flag=false;
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        for(int i=0;i<n;i++)
        {
            curr_sum += arr[i];
            if(curr_sum>=s)
            {
                last=i;
                while(s<curr_sum && start<last)
                {
                    curr_sum -= arr[start];
                    ++start;
                }
                if(curr_sum==s)
                {
                    cout<<start+1<<" "<<last+1<<endl;
                    flag=true;
                    break;
                }
            }
        }
        if(flag==false)
        cout<<-1<<endl;
    }
    return 0;
}
