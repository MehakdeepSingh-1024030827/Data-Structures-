#include<iostream>
#include<queue>
using namespace std;


queue<int> InterLeave(queue<int> q){

    queue<int> firsthalf, secondhalf;
    int size = q.size();

    int i = 1;
    while(!q.empty()){
        int ele = q.front();
        if(i <= size/2){
            firsthalf.push(ele);
        }
        else{
            secondhalf.push(ele);
        }
        i++;
        q.pop();
    }
    for(int i = 1 ; i <= size ; i++){

        if(i%2!=0){
            int ele = firsthalf.front();
            q.push(ele);
            firsthalf.pop();
        }
        else{
            int ele = secondhalf.front();
            q.push(ele);
            secondhalf.pop();
        }
    }

    return q;
}

void display(queue<int> q){
    while(!q.empty()){
        int ele = q.front();
        cout<<ele<<" ";
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q1,q2;
    q1.push(4);
    q1.push(7);
    q1.push(11);
    q1.push(20);
    q1.push(5);
    q1.push(9);
    q2 = InterLeave(q1);
    display(q2);
}
