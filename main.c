void uart_puts(char *s); //函数声明
void kinit(void);
void kvminit(void);
void kvminithart(void);

extern char end[];

void main(void) {
    kinit();
    kvminit();
    kvminithart();

    uart_puts("hello my first kernel");

    while(1){
        ;
    }
}