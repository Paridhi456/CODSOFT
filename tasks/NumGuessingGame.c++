#include<iostream>
#include<ctime>
int main(){
    int num;
    int guess;
    int tries=0;
    srand(time(0));
    num = (rand() % 100) + 1;
    std::cout<<"*****Number guessing game*****"<<'\n\n';
    
while(guess!=num){
    std::cout<<"Enter your guess"<<std::endl;
   std::cin>>guess;
   tries++;
if(num<guess){
    std::cout<<"Higher!!";
}
else if(num>guess){
    std::cout<<"Lower!!";
}
else{
std::cout<<"correct!! you guessed in " <<tries<<" tries";
}}
return 0;

}