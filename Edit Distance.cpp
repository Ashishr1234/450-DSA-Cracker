
int func(string s,string t,int n,int m){
    if(m==0) return n;
        if(n==0) return m;
        if (s[m - 1] == t[n - 1])
        return editDistance(s, t, m - 1, n - 1);
       return 1
           + min(editDistance(s, t, m, n - 1), // Insert
                 editDistance(s, t, m - 1, n), // Remove
                 editDistance(s, t, m - 1,
                          n - 1) // Replace
             );         
          
    
}

  int editDistance(string s, string t) {
    memset(dp,-1,sizeof(dp));
  
   return func(s,t, s.size(), t.size()));  
        

}
