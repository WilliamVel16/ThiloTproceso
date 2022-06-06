#include <studio.h>;
#include <stlib.h>;

TIEMPO DE CREACION DE UN HILO
time_t start;

void *worker(void *data) {
  time_t end = time();
  printf("%d\n", end - start);
}

int main() {
   start=time();
   pthread_create(thread_id,NULL, worker,NULL);
}

---

TOMA DE TIEMPO DE CREACION DE UN PROCESO

time_t start=time();
pid_t pid = fork();
if (pid == 0) {
  time_t end = time();
  printf("%d\n", end - start);
}

