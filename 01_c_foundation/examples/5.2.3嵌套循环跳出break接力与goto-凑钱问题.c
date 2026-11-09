#include <stdio.h>

int main()
{
	int one,two,five;
    int x;
    int exit;
    scanf("%d",&x);
	//x=2;
	for(one=1;one<10*x;one++){
		for(two=1;two<10/2*x;two++){
			for(five=1;five<10/5*x;five++){
			    if(one+two*2+five*5==x*10){
					printf("%d壹角+%d贰角+%d伍角\n",one,two,five);
				    exit=1;
					break;
					//或goto out;
				}	
		    }	
		    if(exit==1)break;
		}
	    if(exit==1)break;
	}
//out:
	return 0;
}
