class Solution {
public:
    int reverse(int x) {
        long rev=0;
		// simple logic of reverse using while loop
		
         while(x!=0){
             rev=rev*10+x%10;
             x/=10;
         }
		 
		 //check condition 
        if(rev>2147483641 || rev<-2147483641) return 0;
        return rev;
    }
};