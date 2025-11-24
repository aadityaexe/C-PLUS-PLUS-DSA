class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        long long x =0;

        long long sum=0;

        for( char m: s){
            if(m!= '0'){
                int d =m-'0';
                x=x*10+d;
                sum+=d;
            }
        }

        if(x==0) return 0;

        return x*sum;
    }
};