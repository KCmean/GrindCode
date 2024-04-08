class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
    int count[2] = {0};
        
    for(int s  : students){
        count[s]++;
    }
        
   for(int i : sandwiches){
       if(count[i] == 0){
           return count[1-i];
       }
       
       count[i]--;
   }
    
        return 0;
        
    }
};