class Solution {
public:
    int myAtoi(string str) 
    {
        int sign = 1;
        
        long sum = 0;
        
        bool found = false;
        
        for(unsigned i = 0; i < str.length(); ++i)
        {
            if(str[i] == ' ')
            {
                if(found)
                    break;
                continue;
            }
            else if(str[i] == '-')
            {
                if(found)
                    break;
                
                sign = -1;
                found = true;
            }
            else if(str[i] == '+')
            {
                if(found)
                    break;
                sign = 1;
                found = true;
            }
            else if((str[i] >= 0x30) && (str[i] <= 0x39))
            {
                sum  = sum*10 + (0x0F & str[i]);
                found = true;
                
                if((sum*sign) >= INT_MAX)
                    return INT_MAX;
                
                if((sum*sign) <= INT_MIN)
                    return INT_MIN;
            }
            else
            {
                break;
            }
        }
        
        sum = sum * sign;
        
        return sum;
    };
        
};
