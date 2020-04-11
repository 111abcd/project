//
//  person.hpp
//  Project_ServiceDesk_trial.01
//
//  Created by Youssef on 4/4/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef person_hpp
#define person_hpp
#include "Includes.h"
#include <stdio.h>

class Person{
private:
protected:
    Name name;
    string ID;
    string phone_number;
    string occupation;
    string email_address;
    Address home_address;
    Date date_of_birth;
  
public:
   
     Person ();
     void Set_Name(Name);
     string Get_Name();
     void Set_phone(string);
     string Get_phone();
     void Set_home_address(Address);
     Address Get_home_address();
     void Set_email(string);
     string Get_email();
     void Set_occupation(string);
     string Get_occupation ();
     virtual void print();
     ~Person();
    
    
};


#endif /* person_hpp */
