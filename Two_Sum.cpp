#include<iostream>
using namespace std;

int main()
{
    int arr [9] = {3,2,10,11,7,15,8,4,1}, arr_1[7];
    int x,y,i,j,k, flag=0, target=9,sum=0,count=0;
    

    x = arr[0];

    for(i=0; i<9; i++)
    {
        if(arr[i]<target)
        {
            arr_1[count] = arr[i];
            cout<<arr_1[count]<<endl;
            count++;
        }
    }
    cout<<endl;

    for (j = 0; j<count; j++)
    {
       

        for (k=0; k<count; k++)
        {
            // if(k!=j && sum<target)
            // sum=sum+arr_1[k];

                sum=arr_1[j]+arr_1[k];

            if(sum == target && k!=flag)
            {
                //cout<<"["<<j<<"]"<<arr_1[j]<<","<<"["<<k<<"]"<<arr_1[k]<<endl;
                cout<<arr_1[j]<<" "<<arr_1[k]<<endl;
                flag = j;
            }
        }
        
        
    }

}