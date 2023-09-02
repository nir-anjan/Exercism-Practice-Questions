#include "raindrops.h"

namespace raindrops {

    std::string convert(int no){
        std::string result = "";
        if(no%3==0)
            result += "Pling";
         if(no%5==0)
            result += "Plang";
         if(no%7==0)
            result += "Plong";
        if(!(no%3==0) && !(no%5==0) && !(no%7==0))
            return std::to_string(no);
        else
            return result;    //return the result
        }
    }

