class Solution {
public:
    int maximum69Number (int num) {
        vector<int>temp;
        while(num>0){
            int dig=num%10;
            temp.push_back(dig);
            num=num/10;
        }

        vector<int>help;
        for(int i=temp.size()-1;i>=0;i--){
            help.push_back(temp[i]);
        }

        for(int i=0;i<help.size();i++){
            if(help[i]==6){
                help[i]=9;
                break;
            }
        }
        int x=0;
        for(int i=0;i<help.size();i++){
              x=x*10+help[i];
        }
        return x;
    }
};