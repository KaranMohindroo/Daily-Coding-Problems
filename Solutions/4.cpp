void swap(int *a, int *b) 
{ 
	int temp; 
	temp = *a; 
	*a = *b; 
	*b = temp; 
} 
int segregate (int arr[], int size) 
{ 
	int j = 0, i; 
	for(i = 0; i < size; i++) 
	{ 
	if (arr[i] <= 0) 
	{ 
		swap(&arr[i], &arr[j]); 
		j++; 
	} 
	} 

	return j; 
} 
int findMissingPositive(int arr[], int size) 
{ 
int i; 
for(i = 0; i < size; i++) 
{ 
	if(abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0) 
	arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1]; 
} 

for(i = 0; i < size; i++) 
	if (arr[i] > 0) 
	return i+1; 

return size+1; 
} 

/*Main Function*/
int findMissing(int arr[], int size) 
{ 
// First separate positive and negative numbers 
int shift = segregate (arr, size); 

// Shift the array and call findMissingPositive for 
// positive part 
return findMissingPositive(arr+shift, size-shift); 
} 
