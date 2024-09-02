void input(int v[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void swap(int v[], int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void sort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (v[j] < v[j - 1]) {
                swap(v, j, j - 1);
            }
            else {
                break;
            }
        }
    }
}

int main () {
    int n;

    printf("Quantos valores voce deseja inserir? ");
    scanf("%d", &n);

    int v[n];
    
    printf("Digite os valores\n");
    input(v, n);

    sort(v, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }


    return 0;
}