class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int j;
        int sum=0;
        for(int i=0 ;i<seats.size() ; i++){
            j=abs(seats[i]-students[i]);
           sum=sum+j;
        }
        return sum;
    }
};