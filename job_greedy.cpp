#include<iostream>
using namespace std;
int main(){
   int n,time;
   cout<<"Total number of jobs: "<<endl;
   cin>>n;
   cout<<"Total time slot: "<<endl;
   cin>>time;
   char job_name[n];
   int deadline[n],reward[n];
   for(int i=0;i<n;i++)
   {
       cout<<"Job name:";
       cin>>job_name[i];
       cout<<"Deadline:";
       cin>>deadline[i];
       cout<<"Reward:";
       cin>>reward[i];
   }
  for(int i=0;i<n;i++)
  {
      cout<<job_name[i];
      cout<<"\tDeadline: "<<deadline[i];
      cout<<"\tReward: "<<reward[i]<<endl;
  }
  for(int i=0;i<n-1;i++){
    for(int j=i;j<n;j++){
        if(reward[i]<reward[j]){
            swap(job_name[i],job_name[j]);
            swap(deadline[i],deadline[j]);
            swap(reward[i],reward[j]);
        }
    }
  }


for(int i=0;i<n;i++){
   cout<<"After sort"<<endl<<job_name[i];
   cout<<"\t Deadline: "<<deadline[i];
   cout<<"\t Reward: "<<reward[i]<<endl;

  }
  int time_slot[time],total_reward=0;
  for(int i=0;i<time;i++){
    time_slot[i]=-1;
  }
  for(int i=0;i<n;i++){
    for(int j=deadline[i]-1;j>=0;j--){
        if(time_slot[j]==-1){
            time_slot[j]=i;
            total_reward+=reward[i];
            break;
        }
    }
  }
cout<<"Job Scheduling: ";
for(int i=0;i<time;i++){
    if(time_slot[i]==-1)
        cout<<"*";
    else
        cout<<job_name[time_slot[i]]<<" ";
}
cout<<"\nTotal Reward : "<<total_reward;
}

