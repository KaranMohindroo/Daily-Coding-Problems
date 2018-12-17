
/*    DP SOLUTION    */

int aa[100000]={0};
int countDecoding(char *digits, int n) 
{ 
  if(aa[n]!=0)
    return aa[n-1];
	// base cases 
	if (n == 0 || n == 1) 
		return 1; 
    
	// If the last digit is not 0, then last digit must add to 
	// the number of words 
	if (digits[n-1] > '0') 
		aa[n] = countDecoding(digits, n-1); 

	// If the last two digits form a number smaller than or equal to 26, 
	// then consider last two digits and recur 
	if (digits[n-2] == '1' || (digits[n-2] == '2' && digits[n-1] < '7') ) 
		aa[n] += countDecoding(digits, n-2); 

	return aa[n];//=count; 
} 
