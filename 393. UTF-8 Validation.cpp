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
            }else {class Solution {
public:
    int csb(int n){
    int curr=7;
    int msb=0;
    while(curr>=0){
        if((n&(1<<curr))>0){
            msb++;
        }
        else{
            return msb;
        }
        curr--;
    }
    return msb;
}
bool validUtf8(vector<int>& data) {
    if(csb(data[0])==1){
        return false;
    }
    int c=0;
    for(int i=0;i<data.size();i++){
        int cb=csb(data[i]);
        if(cb>4){
            return false;
        }
        if(cb==1){
            if(c==0){
                return false;
            }
            else{
                c--;
                if(c<0){
                    return false;
                }
            }
        }
        else if(cb==0){
            if(c!=0)
            return false;
        }
        else{
            if(c!=0){
                return false;
            }
            else{
                c=cb-1;
            }
        }
    }
    if(c==0){
        return true;
    }
    return false;
}
};
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