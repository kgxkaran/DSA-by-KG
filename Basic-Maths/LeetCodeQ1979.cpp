Lets talk about :- max_element( ) min_element( ) in vectors/array

  iterator = address

| Function       | Returns         |
| :------------- | :-------------- |
| max_element(start_iterator, end_iterator)  | iterator to max |
| *max_element(start_iterator, end_iterator) | value of max    |
| min_element(start_iterator, end_iterator)  | iterator to min |
| *min_element(start_iterator, end_iterator) | value of min    |

  important : -

  max_element(start_iterator, end_iterator) - arr.begin()    =>  index of maxElem in arr
  min_element(start_iterator, end_iterator) - arr.begin()    =>  index of minElem in arr


📌 Optional 3rd Parameter — Comparator function
Agar apni custom condition lagani ho, to hum ek comparator function bhi de sakte hain.
Example:-
  bool comp(int a, int b){
    return (a % 10) < (b % 10);
}

int main(){
    vector<int> arr = {17, 23, 35, 44};

    int ans = *max_element(arr.begin(), arr.end(), comp);

    cout << ans << endl;
}






class Solution {
public:
    int gcd(int a , int b){
        if(b == 0) return a;
        else{
            return gcd(b , a % b);
        }
    }
    int findGCD(vector<int>& nums) {
       
         int maxElem = *max_element(nums.begin() , nums.end());    ( * means to give the value at that address )
         int minElem = *min_element(nums.begin() , nums.end()); 
        
        return gcd(minElem , maxElem);
        
    }
};
