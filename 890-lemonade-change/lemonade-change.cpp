class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five = 0, ten = 0;
        for(int i = 0;i<n;i++){
            if(bills[i] == 5){
                five++;
            }
            else if(bills[i] == 10){
                if(five == 0) return false;
                else{
                    five = five - 1;
                    ten = ten + 1;
                }
            }
            else{
                if(ten >0 && five > 0){
                    ten = ten - 1;
                    five = five - 1;
                }
                else if(five >= 3){
                    five = five - 3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};