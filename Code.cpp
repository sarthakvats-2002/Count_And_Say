// Asignment 
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1"; // base case
        
       string s1="11";    // taking the string initially as "11"
        
       if(n==2)
           return s1;  // returning s1 when n equals 2
        
        string s2="";
        
     long long int count=1;
       for(int key=1; key<(n-1) ; key++){   // iterating through the string (n-2) times
            for(int i=1; i<s1.size(); i++){
                
                if(s1[i]==s1[i-1] ){   // incrementing the count of each repeating element
                    count++;
                    }
                else{
                    string c=s1.substr(i-1,1);   //considering last non-repeating substring
                    s2+=(to_string(count)+c);
                    count=1;
                }
            }
           string c=s1.substr((s1.size()-1),1);  
             s2+=(to_string(count)+c);            //considering last non-repeating substring
           count=1;
            s1=s2;          //updating the res
           s2="";
        }
        return s1;
    }
};
