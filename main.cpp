class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        uint32_t tmp = 0;
        tmp = n;
        int bar = 1;
        for(int i = 0; i < 32; i++){
            if(tmp & bar) count ++;
            //bar *= 2;
            tmp = tmp >> 1;
        }
        return count;
    }
};
