class Solution {
public:
 int fun(int n){
        int pro = 1;
        while(n!=0){
            int a = n%10;
            pro = pro * a;
            n = n / 10;
        }
        cout << n;
        return pro;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
           int temp =  fun(i);
           if(temp % t == 0){
            return i;
           }

        }
        return -1;
    }
};