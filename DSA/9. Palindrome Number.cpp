class Solution {
public:
    bool isPalindrome(int x) {
        long rem=0;
        long sum=0;
        int temp=x;
        if(x<0){
            return 0;
        }
        else{
                while(temp!=0){
                    rem=temp%10;
                    temp=temp/10;
                    sum=sum*10+rem;
                
                }
                if(sum==x){
                    return 1;
                }

        }
        return 0;
        
    }
};
