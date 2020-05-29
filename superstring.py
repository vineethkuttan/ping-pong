import sys 
str=''
def findOverlappingPair(str1,str2):
	max = -sys.maxize-1
	len1 = len(str1)
	len2 = len(str2)
    for i in range(1,min(len1,len2)):
		if(str1[len1-i:i]==str2[0:i]):
			if (max < i):
				max = i
				str = str1 + str2[i:]
	for i in range(1,min(len1,len2)):
		if (str1[0:i]== str2[ len2-i:i]) 
			if (max < i):
				max = i
				str = str2 + str1[i:] 
	return max 
def findShortestSuperstring(arr,len):
	while(len != 1):
    	max = -sys.maxsize-1
		resStr=''
		for i in range(len):
            for j in range(i+1,len): 
				res = findOverlappingPair(arr[i], arr[j]) 
				if (max < res):
					max = res 
					resStr=str 
					l = i, r = j; 

		len-=1
		if (max == INT_MIN):
			arr[0] += arr[len]; 
		else: 
			arr[l] = resStr 
			arr[r] = arr[len]
	return arr[0] 

li = ["catgc", "ctaagt", "gcta", "ttca", "atgcatc"]
len=len(li)
findShortestSuperstring(arr, len)
print(str)
