
extern char prod[10][20];
extern float price[10]; 
extern int q;
void data(char prod[10][20], float price[10]);
float calcmax(float price[10]);
float calcmin(float price[10]);
float calcsum(float price[10]);
float calcprom(float sum, int q);
void search();
void print(float max, float min, float prom);
