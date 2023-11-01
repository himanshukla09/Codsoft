#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
 srand(time(0));
 // Generate a random number betweem 1 and 1000
 int randomnumber= rand()%1000+1;
 int guessbyuser;
 int timeOfTries=0;
 cout<<"Welcome to the number guessing game \n";
 do{
    cout<<"Enter the number between 1 and 1000: ";
    cin>>guessbyuser;
    timeOfTries++;
    if (guessbyuser<randomnumber){
        cout<<"Too low, try again."<<endl;
    }
    else if (guessbyuser>randomnumber){
        cout<<"Too high, try again."<<endl;
    }
    else{
        cout<<"CONGRATULATION, you guessed the number "<<randomnumber<<" in "<<timeOfTries<<" tries."<<endl;
    }
 } 
 while(guessbyuser!=randomnumber);
 return 0;  
}