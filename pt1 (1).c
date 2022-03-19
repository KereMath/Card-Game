#include <stdio.h>
#define CARD_COUNT 100

int main()
{
	int g1, g2, g3, n1, n2, newcard, num1, num2, num3, num4, num5;
	
    scanf("%d %d %d %d %d",&g1,&g2,&g3,&n1,&n2);
    if(g1 < g2 && g1 < g3)
	{
		num1=g1;
		if(g2<g3){num2=g2;
		num3=g3;}
		else{num2=g3;
		num3=g2;	}
		}
	
	else if(g2 < g3)
	{
		num1=g2;
		if(g1<g3){num2=g1;
		num3=g3;}
		else{num2=g3;
		num3=g1;	}
	}
	else
	{
		num1=g3;
		if(g1<g2){num2=g1;
		num3=g2;}
		else{num2=g2;
		num3=g1;}	
	}
	if(n1<n2){num4=n1;
	num5=n2;
	}
	else{num4=n2;
	num5=n1;
	}
	int enemy =0;
	//iteration starts here
	for(int i = 100; i>0;i--){
	
	if(num5<num3 && num4<num2){
		enemy =0;
		
	}
	if(num4>num3){
		enemy =1;
		
	}
	else{
	enemy = 2;
	if(num2<num4&&num4<num3&&num3<num5){newcard=num2+1;}
	if(num1<num4&&num4<num2&&num2<num3&&num3<num5){newcard=num3+1;
	}
	if(num2<num4&&num4<num5&&num5<num3){newcard=num2+1;
	}
	if(num4<num1&&num1<num2&&num2<num3&&num3<num5){newcard=num3+1;
	}
	if(newcard==num3||newcard==num4||newcard==num5){newcard+=1;
	}
	if(newcard==num3||newcard==num4||newcard==num5){newcard+=1;
	}
	
	if(newcard==num3||newcard==num4||newcard==num5){newcard+=1;
	}
	
	
		
 }

	}

	switch(enemy){
		case 0:
			{
				L1:
				printf("WITHDRAW\n");
			}
			break;
		case 1:
			{
				printf("1\n");
			}
		break;
		case 2:
			{
				if(newcard!=0&&newcard<=100){printf("%d\n",newcard);
				}
				else{
					goto L1;
				}
					
			}
		break;
	}
	
	
	
    return 0;
}
