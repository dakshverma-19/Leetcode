class Solution {
public:
    double average(vector<int>& salary) {
        double ans;
        int sum=0;
        sort(salary.begin(),salary.end());
        salary.erase(salary.begin()+0);
        salary.pop_back();
        if(salary.size()==1){
            return salary[0];
        }
        for(int i=0 ; i<salary.size() ; i++){
            sum=sum+salary[i];
        }
        ans=(double)sum/salary.size();
        return ans;
        
    }
};