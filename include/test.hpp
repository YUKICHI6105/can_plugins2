#include <cstdint>
#include <string>
#include <sstream>
#include <array>

namespace test
{   
    
    std::string hex_to_string(uint8_t data[],int len){
        std::ostringstream hex;
        std::string text;

        for(int i=0;i<len;i++){
            if(data[i]>='!'&&data[i] <= '~')text.push_back(static_cast<char>(data[i]));
            hex<<std::hex<<data[i];
        }
        std::string hex_str = hex.str();
        return hex_str + text;
    }

    template <std::size_t N>
    std::string hex_to_string(std::array<uint8_t,N> data){
        return hex_to_string(data.data(),data.size());
    }
    
} // namespace test