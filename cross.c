#include <stdlib.h>
#include <stdio.h>
int main(int argc, char ** argv) 
{
	if (argc>7||argc<7){
	printf("this calculator only gets the cross product for 2 three-dimensional vectors, check your arguments\n");
}
else {
	float Ax= atof(argv[1]);
	float Ay= atof(argv[2]);
	float Az= atof(argv[3]);
	float Bx= atof(argv[4]);
	float By= atof(argv[5]);
	float Bz= atof(argv[6]);
	
	float CCx= ((Ay*Bz) - (Az*By));
	float CCy= ((Az*Bx) - (Ax*Bz));
	float CCz= ((Ax*By) - (Ay*Bx));
	
printf("The cross product vector is: %.3f x, %.3f y, %.3f z.", CCx, CCy, CCz);
	}
	return 0;
	}
