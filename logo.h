#include <iostream>
#include "skStr.h"
#include "util.h"

void logo()
{
    Util::SetColor(RED);
    std::cout << skCrypt(R"(

                                         
                        __ 
                       / _|
  __ ___  __ ______  _| |_ 
 / _` \ \/ /|_  /\ \/ /  _|
| (_| |>  <  / /  >  <| |  
 \__, /_/\_\/___|/_/\_\_|  
    | |                    
    |_|                     
             
             
             
             
)");
}