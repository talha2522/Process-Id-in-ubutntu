#include <stdo.h>
#include <unistd.h>

int main() {

printf("Parent Process Id %d\n", getppid());
printf("Child Process Id %d\n", getpid());

return 0;

}
