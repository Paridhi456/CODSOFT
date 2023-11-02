#include<iostream>
using namespace std;
#include<string>

void displaytasks(string tasks[],int taskcount);
void completedtasks(string TC[],int taskcount);

int main(){
    string Task[100],TC[100];
    int t_count=0,choice=-1;
    while(choice!=0){
    cout<<"\n<---To do list--->"<<endl;
    cout<<"1.Add Tasks\n2.View Tasks\n3.Remove Tasks\n4.Add To Completed Tasks\n0.Terminate The List Program\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
case 1:
    if(t_count>99){
    cout<<"List is Full\n";}
    else{
    char add;
    while(add !='N'){
        cout<<"Enter a Task\n";
        cin.ignore(); 
        getline(cin,Task[t_count]);
        t_count++;
        cout<<"Add more task? Press 'N' for NO and any one character for 'YES'\n";
        cin>>add;}
          ;}
    break;
case 2: displaytasks(Task,t_count);
break;
case 3: {int deltask=0;
cout<<"Enter a task to delete: ";
cin>>deltask;
if(deltask<0 || deltask>99){
    cout<< "You entered an invalid task"<<endl;
    break;
}
    for (int i = deltask-1; i < t_count ;i++)
    {
        Task[i]=Task[i+1];
    }
    t_count = t_count-1;
break;}
case 4:
{cout<<"Completed tasks list:-\n";
int completed=1,n;
if(completed<0 || completed>99){
    cout<< "You entered an invalid task"<<endl;
    break;
    }  
    cout<<"Enter the number of tasks you want to enter in the completed task list"<<endl;
    cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter task number:\n";     
        cin>>completed;
        TC[i]=Task[completed-1];
    }
    completedtasks(TC,n);
    break;
    }
case 0: cout<<"\n-----Terminating the program-----\n";
break;
default: cout<<"You entered invalid value!\n";}
}
    return 0;
}
void displaytasks(string tasks[],int taskcount){
cout<<"\nTasks:"<<endl;
cout<<"--------------------"<<endl;
for(int i=0;i<taskcount;i++){
    cout<<"Task "<<i+1<<": "<<tasks[i]<<endl;
}
cout<<"--------------------\n\n";
}
void completedtasks(string TC[],int taskcount){
cout<<"\nTasks:"<<endl;
cout<<"--------------------"<<endl;
for(int i=0;i<taskcount;i++){
    cout<<"Task "<<i+1<<": "<<TC[i]<<endl;
}
cout<<"--------------------\n\n";}
