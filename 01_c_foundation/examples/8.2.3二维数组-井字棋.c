#include <stdio.h>
#define size 3

int main()
{
	int i,j;
	int board[size][size];
	int chX;
	int chO;
	int result = -1;
	 
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	
	for(int i=0;i<size && result == -1;i++){
		chX = chO = 0;
		for(int j=0;j<size;j++){
			if(board[i][j] == 1){
				chX ++;
			} else{
				chO ++;
			}
		}
		if(chX == size){
			result = 1;
		} else if(chO == size){
			result = 0;
		}
	}
	
	if(result == -1){
		for(int j=0;j<size && result == -1;j++){
			chX = chO = 0;
			for(int i=0;i<size;i++){
				if(board[i][j] == 1){
					chX ++;
				} else{
					chO ++;
				}
			}
			if(chX == size){
				result = 1;
			} else if(chO == size){
				result = 0;
			}
		}
	}
	

	if(result == -1){
		chX = chO = 0;
		for(int i=0;i<size;i++){
			j = i;
			
			if(board[i][j] == 1){
				chX ++;
			} else{
				chO ++;
			}
			
			if(chX == size){
				result = 1;
			} else if(chO == size && result == -1){
				result = 0;
			}
		}
	}
	
	if(result == -1){
        chO = chX = 0;
        for ( i=0; i<size; i++ ) {
            if ( board[i][size-1-i] == 1 ) {
                chX ++;
            } else {
                chO ++;
            }
        }
        if(chX == size) {
            result = 1;
        } else if ( chO == size ) {
            result = 0;
        }
    }
	
    if(result == 1){
        printf("///X");
    }else if(result == 0){
        printf("///O");
    }else{
        printf("无人获胜");
    }
	    
	return 0;
}
