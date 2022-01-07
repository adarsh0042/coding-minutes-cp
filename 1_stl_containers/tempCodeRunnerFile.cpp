void solve(){
    string s1="1123", s2="0111";
    unordered_map<char, int> m1, m2;
    int bull=0, cows=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            bull++;
        }
        else{
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
    }
    for(auto itr : m1){
        if(m2[itr.F]){
            cows += min(itr.S, m2[itr.F]);
        }
    }
    string ans="";
    ans+= to_string(bull);
    ans+="A";
    ans+=to_string(cows);
    ans+="B";
    cout<<ans;
}