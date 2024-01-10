class Solution {
private:
    vector<char> stringRev(int i , int j , vector<char>& str){
    if(i > j){
        return str;
    }
        swap(str[i],str[j]);
        i++;
        j--;
        stringRev( i, j, str);

        return str ;
}
public:
    void reverseString(vector<char>& s) {

        int i = 0;
        int j = s.size() - 1;


        s =  stringRev(i,j,s);
        
    }
};