#include<stdio.h>

int main(){
	printf("Enter 1 or 2: \n");
	int i;
	scanf("%d", &i);
		if(i == 1){
			printf("  |  \n");
			printf("-----\n");
			printf(" O|  \n");
				int j;
				scanf("%d", &j);
					if(j == 1){
						printf(" O|  \n");
						printf("-----\n");
						printf(" O|  \n");
						printf("You WON you Connected 2!\n");
						return 0;
							}else{
								printf("  |  \n");
                                                		printf("-----\n");
                                                		printf(" O|O \n");
                                                		printf("You WON you Connected 2!\n");
                                                		return 0;
								}

		}else{
			printf("  |  \n");
			printf("-----\n");
			printf("  |O \n");
			}
}
