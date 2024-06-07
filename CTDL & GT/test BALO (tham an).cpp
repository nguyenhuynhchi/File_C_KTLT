#include <stdio.h>
#include <stdlib.h>

struct item {
    int w, v;
    float r;
};

int cmp(const void *a, const void *b) {
    struct item *ia = (struct item *)a;
    struct item *ib = (struct item *)b;
    return (int)(ib->r * 100) - (int)(ia->r * 100);
}

int main() {
    int n, W;
    printf("Nhap so do vat: ");
    scanf("%d", &n);

    struct item *items = (struct item*) malloc(n * sizeof(struct item));
    for (int i = 0; i < n; i++) {
        printf("Nhap trong luong va gia tri cua do vat %d: ", i+1);
        scanf("%d %d", &items[i].w, &items[i].v);
        items[i].r = (float) items[i].v / items[i].w;
    }

    printf("Nhap trong luong toi da ba lo co the chua: ");
    scanf("%d", &W);

    qsort(items, n, sizeof(struct item), cmp);

    int i = 0;
    int total_w = 0, total_v = 0;
    while (total_w < W && i < n) {
        if (total_w + items[i].w <= W) {
            total_w += items[i].w;
            total_v += items[i].v;
        } else {
            total_v += (W - total_w) * items[i].r;
            total_w = W;
        }
        i++;
    }

    printf("Gia tri lon nhat co the dat duoc: %d\n", total_v);

    free(items);

    return 0;
}
