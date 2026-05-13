class Solution {
public:
  string sortVowels(string s) {
    string g=s;
    int n=g.size(),f[256]={0},p[256],k=0;
    for(int i=0;i<256;i++)p[i]=-1;
    for(int i=0;i<n;i++){
      char c=g[i];
      f[c]++;
      if(p[c]==-1)p[c]=i;
    }
    vector<char> v;
    for(char c:g) if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v.push_back(c);
    sort(v.begin(),v.end(),[&](char a,char b){
      if(f[a]!=f[b])return f[a]>f[b];
      return p[a]<p[b];
    });
    for(int i=0;i<n;i++){
      char c=g[i];
      if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')g[i]=v[k++];
    }
    return g;
  }
};
