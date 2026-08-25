//Encoding function
string encode(vector<string>&strs){
  if(strs.size()==0){
    return "";
  }
  string separate= string(1,char(257));
  string sb="";
  for(string s: strs){
    sb+= s;
    sb+= separate;


  }
  sb.pop_back();
  return sb;
}

//Decoding function

vector <string> decode(string s){
  if(s==""){
    return {};
  }
  string separate= string(1,char(257));
  vector<string>ans;
  size_t pos;
  size_t start=0;
  while((pos=s.find(separate, start))!=string::npos){
    ans.push_back(s.substr(start,pos-start));
    start=pos+separate.length();
  }
  return ans;

}