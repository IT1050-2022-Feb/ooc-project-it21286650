#include "doctor.h"
#include "feedback.h"
#include <iostream> 
using namespace std;  

int main()
{
  //creating objects
    
    Doctor* doctor;
    doctor= new Doctor("Dr.Wijerathna", 1990); //Create Doctor object
    
    Feedback fbc(35, "example@xyz.com", "feedback1"); //Create Feedback object
    
    
   //calling methods
    
    doctor->setDetails("123/4, Kandy Rd, Warakapola", 0772341867, "example@abc.com"); //set details to attributes
    doctor->displayDoctDetails(); //display normal user details
    
    fbc.displayFeedback(); //display feedback
    
    
    //delete dynamic variables
    delete doctor;
    delete fbc;
  
  return 0;
}
