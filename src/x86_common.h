#define STACK_BASE  0x2000
#define STAGE1_BASE 0x7c00
#define STAGE2_BASE 0x7e00

#define DIST(x) (x - _start)

#define STAGE1_ADDR(x) (DIST(x) + STAGE1_BASE)
#define STAGE2_ADDR(x) (DIST(x) + STAGE2_BASE)