char* reverseString(char* s) 
{
      int left = 0;
    int right = strlen(s) - 1;
    char temp;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    
    return s;
}
