#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>


void stepOne()
{
    std::cout<<"You are currently on the first step which is opening pack-a-punch\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"This is done by talking with Elvira in the movie studios, where she tells you to get her spellbook\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"Next you want to turn on the power by grabbing the power handle from the beach and putting it in the power station, near the ice cream shop\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"Doing this will open up a safe in the ice cream shop where her spellbook is, grab it and return it to Elvira\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"Next Elivra will give you a vial, what you need to do is kill zombies using the cleaver, \n which can be found stabbed into a shark in the super market near the power station\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"After filling up the vial with zombie kills you can give the vial back to Elvira where she will get off of her couch and fight zombies with you,\n you will need to escort her to right outside the movie studio there will be a barely visible portal, when Elvira gets near it she will do some magic and make it visible\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"Congratulations you have now gained access to the maps projector room and pack-a-punch machine\n"<<std::endl;
};
//assembling the army zombie parts
void stepTwo()
{
    std::cout<<"You are currently on the second step which is building the Army Zombie\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"This is a lengthy step so starting from easiest parts to the hardest:\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<"One of the arms can be found in the RV park across the street from the motel in a fire pit in between two RV's\n"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout<<""
};
//building the chemical work station
void stepThree()
{

};
//building the bomb parts
void stepFour()
{

};
//grabbing the mirrors
void stepFive()
{

};
//turning the army zombie into a key for the garage
void stepSix()
{

};
//finding your chemical numbers/color
void stepSeven()
{
    
};
//finding your chemical
void stepEight()
{

};

void parseStep(int step)
{
    if(step==1)
    {
        stepOne();
    }
    if(step==2)
    {
        stepTwo();
    }

};



int main()
{
    int step;
    std::cout<<"What step of the Easter Egg are you on? "<<std::endl;
    std::cin>>step;
    parseStep(step);






    return 0;
}