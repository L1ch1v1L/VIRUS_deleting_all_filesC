#include <stdio.h>
#include <dirent.h>

int main(void)
{
struct dirent *file;
DIR *dir = opendir(".");
if (dir == NULL) {
	printf("Directory cannot be opened!");
	return 0;
}
while ((file = readdir(dir)) != NULL){
printf("NAME: %s WILL DELETE\n",file->d_name, file->d_off);
remove(file->d_name);
}
closedir(dir);
return 0;
}