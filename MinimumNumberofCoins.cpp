int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>currency = {1,2,5,10,20,50,100,500,1000};
    int n = currency.size();
    int count = 0;
    for(int i=n-1;i>=0;i--){
        while(amount>=currency[i]){
            count++;
            amount-=currency[i];
        }
    }
    return count;
}
