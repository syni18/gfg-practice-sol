int strstr(string s, string x)
{
     //Your code here
     int n = s.length();
     int m = x.length();
     int flag;
     
     for(int i=0; i<n; i++){
         if(s[i] == x[0]){
             flag = 0;
             for(int j=0; j<m;  j++){
                 if(s[i+j] != x[j]){
                     flag = 1;
                     break;
                 }
             }
         }
         if(flag == 0){
             return i;
         }
     }
     return -1;
}
