class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int i = 0;
        while ( i < data.size() ) {
            if ( (data[i] & 0x80) == 0 ){
                i++;
                continue;
            }
            
            int len = 0;
            if ( (data[i] & 0xE0) == 0xC0 ) { // checking 110xxxxx
                len = 2;
            }else if ( (data[i] & 0xF0) == 0xE0) { // checking 1110xxxx
                len = 3;
            }else if ( (data[i] & 0xF8) == 0xF0) { // checking 11110xxx
                len = 4;
            }else {
                return false;
            }
            
            
            for (int j=i+1; j < i+len; j++) { //checking 10xxxxxx
                if ( (data[j] & 0xC0) != 0x80 ) {
                    return false;
                }
            }
            
            i += len ;
            
            if (i > data.size()) {
                return false;
            }
            
        }
        return true;
    }
};