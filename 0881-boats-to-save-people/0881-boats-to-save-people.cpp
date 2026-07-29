class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int p=0;
        int q=people.size()-1;

        int b=0;
        while(p<=q){
            if(people[p]+people[q]<=limit){
                p++;
                q--;
            }
            else{
                q--;
            }
            b++;
        }
        return b;
    }
};