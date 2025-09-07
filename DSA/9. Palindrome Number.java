class Solution {
    public boolean isPalindrome(int x) {
        if(x<0) return false;
        int temp=0,sum=0,num=x;
        while (num!=0){
            sum= sum*10+num%10;
            num=num/10;
        }
        if(sum==x) return true;
        return false;
    }
}