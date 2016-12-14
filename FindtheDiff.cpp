char findTheDifference(char* s, char* t) {
    int s_len, t_len;
    int s_sum = 0, t_sum = 0;
    int i,j;
    
    s_len = strlen(s);
    t_len = strlen(t);
    
    for(i = 0; i < s_len; i++){
		s_sum = s_sum + (int) s[i];
	}	
	
	for(j = 0; j < t_len; j++){
		t_sum = t_sum + (int) t[j];
	}
	
	return (char) t_sum - s_sum;
    
}
