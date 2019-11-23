#include <iostream>
#include <vector>


using namespace std;

struct Hotel {
    Hotel() = default;

    int price{};
    vector<int> roomsFree;
};


int main() {
    int testCases;
    cin >> testCases;

    for(int testCase = 0; testCase < testCases; testCase++){
        int n,b,h,w;
        int& teilnehmer = n;
        int& budget = b;
        int& amountOfHotels = h;
        int& weeks = w;
        cin >> n >> b >>h >> w;

        vector<Hotel> hotels;
        hotels.resize(amountOfHotels);

        for(int i = 0; i < amountOfHotels; i++){
            Hotel hotel;
            int price;
            cin >> price;
            vector<int> roomsFree;
            roomsFree.resize(weeks);
            for(int j = 0; j < weeks; j++){
                cin >> roomsFree[j];
            }
            hotel.price = price;
            hotel.roomsFree = roomsFree;
            hotels[i] = hotel;
        }
        cout << "lol";
    }

    return 0;
}