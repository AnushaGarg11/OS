#include <iostream>
using namespace std;
int main(){
	int arr[20],n;
	float sum,total;
	cout<<"Enter number of processes: ";
	cin>>n;
	cout<<"Enter the burst times: ";
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	sum=0;
	for(int i=0;i<n;i++){
		cout<<"The waiting time for Process P"<<i+1<<" is: "<<sum<<endl;
		total+=sum;
		sum+=arr[i];
	}
	cout<<"The average waiting time is: "<<total/n<<endl;
	float s=arr[0];
	float tot;
	for(int i=0;i<n;i++){
		cout<<"The Turnaround Time for Process P"<<i+1<<" is: "<<s<<endl;
		tot+=s;
		s+=arr[i+1];
	}
	cout<<"The average Turnaround time is: "<<tot/n;
}
