//
//  Ticket.hpp
//  Project_ServiceDesk_trial.01
//
//  Created by Youssef on 4/3/20.
//  Copyright © 2020 Youssef. All rights reserved.
//

#ifndef Ticket_hpp
#define Ticket_hpp

#include <stdio.h>
#include "Includes.h"

class Ticket{
private:
    
protected:
    string ticket_id;
    
public:
    Ticket();
    
    void set_ticket_id(string);
    string get_ticket_id();
    
    void ticket_status();
    
    ~Ticket();
};




#endif /* Ticket_hpp */
