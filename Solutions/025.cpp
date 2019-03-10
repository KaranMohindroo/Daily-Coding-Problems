int match(str, pat)
{
    bool matches[1000][1000]={0};
    matches[0][0] = true ;
int n=str.size();
int m=pat.size();
    for  (i=0;i<m;i++)
    if(pat[i-1]=="*")
        matches[0][1] = matches[0][i-2]; 

    for (i=0;i<n;i++) in 1...matches.length do
    {
        for (j=0;j<m;j++) in 1...matches[0].length do
     {
          if (pat[j-1]== '.' || pat[j-1]== str[i-1])
                matches[i][j] = matches[i-1][j-1];
            elseif (pat[j-1]== '*')
                matches[i][j] = matches[i][j-2];
                if (pat[j-2]== '.' || pat[j-2]== str[i-1] )
                    matches[i][j] = matches[i][j] | matches[i-1][j];
            else  
                matches[i][j] = false ;
      }
     }
            
    return matches[str.length][pat.length]

}
