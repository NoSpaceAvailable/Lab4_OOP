#include "Sheep.h"
#include "Goat.h"
#include "Cow.h"
#include <iostream>
#include <vector>

/**
 * Hàm làm tất cả các gia súc đều đói
 */
void makeAllHungry(vector<Cow*>& cows, vector<Goat*>& goats, vector<Sheep*>& sheeps) {
    for (int i = 0; i < cows.size(); i++) cows[i]->makeHungry();
    for (int i = 0; i < goats.size(); i++) goats[i]->makeHungry();
    for (int i = 0; i < sheeps.size(); i++) sheeps[i]->makeHungry();
}

using namespace std;

/**
 * Hàm main làm các công việc sau:
 * 1. Khởi tạo số lượng bò, dê, cừu
 * 2. Khởi tạo các con bò, dê, cừu
 * 3. Làm tất cả các con bò, dê, cừu đều đói
 * 4. Cho ăn tất cả các con bò, dê, cừu
 * 5. Sinh sản cho một số con bò, dê, cừu
 * 6. In ra thống kê sau mùa sinh sản
 * 7. In ra tổng lượng sữa mà nông trại thu được
 */
int main() {
    srand(time(NULL));
    int c, g, s; cout << "Nhập số lượng bò, dê, cừu: "; cin >> c >> g >> s;
    vector<Cow*> cows(c);
    vector<Goat*> goats(g);
    vector<Sheep*> sheeps(s);

    for (int i = 0; i < cows.size(); i++) cows[i] = new Cow();
    for (int i = 0; i < goats.size(); i++) goats[i] = new Goat();
    for (int i = 0; i < sheeps.size(); i++) sheeps[i] = new Sheep();

    // Một hôm người chủ nông trại đi vắng, tất cả gia súc trong nông trại đều đói
    makeAllHungry(cows, goats, sheeps);
    cout << "Có " << c << " con bò, " << g << " con dê, " << s << " con cừu đói\n";
    int cow_breed = rand() % c + 1, goat_breed = rand() % g + 1, sheep_breed = rand() % s + 1;
    int total_milk = 0;
    for (int i = 0; i < cows.size(); i++) {
        cows[i]->feed();
        total_milk += cows[i]->give_milk();
    }
    for (int i = 0; i < goats.size(); i++) {
        goats[i]->feed();
        total_milk += goats[i]->give_milk();
    }
    for (int i = 0; i < sheeps.size(); i++) {
        sheeps[i]->feed();
        total_milk += sheeps[i]->give_milk();
    }
    
    for (int i = 0; i < cow_breed; i++) {
        cows.push_back(cows[i]->breed(*cows[rand() % cows.size()]));
    }
    for (int i = 0; i < goat_breed; i++) {
        goats.push_back(goats[i]->breed(*goats[rand() % goats.size()]));
    }
    for (int i = 0; i < sheep_breed; i++) {
        sheeps.push_back(sheeps[i]->breed(*sheeps[rand() % sheeps.size()]));
    }
    cout << "Thống kê sau mùa sinh sản:\n";
    cout << "Có tổng cộng " << cows.size() << " con bò, " << goats.size() << " con dê, " << sheeps.size() << " con cừu\n";
    cout << "Tổng lương sữa mà nông trại thu được: " << total_milk << " lít\n";
}