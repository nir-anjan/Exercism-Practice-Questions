#include <string>

namespace log_line {
    std::string message(std::string msg){
        std::string sub_msg=msg.substr(msg.find(" ")+1);
        return sub_msg;
    }
    std::string log_level (std::string level){
        std::string msg_level = level.substr(1,level.find("]")-1);
        return msg_level;
    }
    std::string reformat (std::string msg){
        std::string sub_str=message(msg)+" ("+log_level(msg)+")";
        return sub_str;

        }
} 
