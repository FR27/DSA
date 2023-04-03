    //string reverse
    
    #include <stdio.h>  
    #include <string.h>  
    int main()  
    {  
        char s[40];
        int i,j,n,temp;
        scanf ("%s", s);  
        n=strlen(s);
        j=n-1;
        for(i=0;i<j;i++)
        {
        temp = s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;  
        }
       puts(s);
        return 0;  
    }  