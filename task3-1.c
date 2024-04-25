struct HeavyData {
    double data[10000];
    double index[10000];
};
int main() {
    struct HeavyData data;
    for (int i = 0; i < 10000; i++) {
        data.data[i] = i;
        data.index[i] = i;
    }
    return 0;
}