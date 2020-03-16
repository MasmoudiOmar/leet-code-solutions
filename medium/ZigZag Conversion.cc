class Solution {
public:
    string convert(string str, int n) {
        if (n == 1) 
    { 
        cout << str;       
        return str; 
    }    
    int len = str.length(); 
    string arr[n]; 
    int row = 0; 
    bool down;  
    for (int i = 0; i < len; ++i) 
    { 
        arr[row].push_back(str[i]);  
        if (row == n-1) 
          down = false; 
        else if (row == 0) 
          down = true;  
        (down)? (row++): (row--); 
    } 
    string s="";
    for(int i=0;i<n;i++)
    {
        if(arr[i]!="")
            s+=arr[i];
        else
            break;
    }
        return s;
    }
};
