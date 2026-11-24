#include <stdio.h>
#include <unistd.h>


int main() {
	// [v1.1] print and log current working dir. 	
	// please develop this function. 
	char pw
        char pwd[1024]; 
        FILE *f = fopen("pwd-log.log", "w"); 
        getcwd(pwd, sizeof(pwd)); 
        printf("print working dir: %s\n", pwd); 
       	fprintf(f, "%s\n", pwd); 
       	fclose(f);
	
int main() {
	char pwd[1024];
	getcwd(pwd, sizeof(pwd));
	printf("%s\n", pwd);
	return 0;
}
