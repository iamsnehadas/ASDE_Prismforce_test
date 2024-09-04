#include<bits/stdc++.h>
#define ll long long int
using namespace std;
/*If, say, the 3rd and 4th enemies have power equal to INT_MAX. So, after 3rd enemy is 
recharged again and attacks Abhimanyu from behind (while he is batling the 4th enemy), 
the total power will exceed INT_MAX. So, long long int(ll) is used for enemy powers. 
Similar scenario can happen for the 7th and 8th enemies.*/
bool check(int no_of_boons, int no_of_recharges, int initial_power, ll enemy_power[]) {
    int current_power = initial_power;
    int recharges_used = 0;
    int boons_used = 0;
    for(int i = 0; i < 11; i++) {
        /*
        If the enemy is the 3rd or 7th enemy, then they are endured with power to 
        regenerate themselves once with half of their initial power and can attack Abhimanyu from behind 
        if he is battling in iteratively next circle, that is, the 4th or 8th enemy. So, when the 4th or 
        8th enemy is encountered, the power of the 3rd and 7th enemy respectively is added to the power
        of the 4th and 8th enemy.
        */
        if(i == 3 || i == 7) {
            enemy_power[i] += enemy_power[i - 1] / 2;  
        }
    }
    /*
    This loop can also be avoided if this is done:
        enemy_power[3] += enemy_power[2] / 2;  
        enemy_power[7] += enemy_power[6] / 2;  
    */
    for(int i = 0; i < 11; i++) {
        /*If Abimanyu enters a circle with power less than the enemy, he loses.*/
        if(current_power < enemy_power[i]) {
            return false;
        }
        else {
            /*Battling in each circle will result in loss of the same power from 
            Abhimanyu as the enemy.*/
            current_power -= enemy_power[i];
            /*Here the current power of Abhimanyu is compared to the power of the enemy
            in the next circle. If, the power of the enemy in the next circle is greater than that 
            of Abhimanyu, he checks if he can recharge himself. Otherwise, he checks if he can skip the next 
            circle by using boons.
            */
            if(enemy_power[i + 1] > current_power) {
                if(boons_used < no_of_boons) {
                    enemy_power[i + 1] = 0;
                    boons_used++;
                }
                else if(recharges_used < no_of_recharges) {
                    current_power = initial_power; //recharges to initial power (i.e. the maximum power)
                    recharges_used++;
                }
            }
        }
    }
    /*If Abhimanyu escapes from all the circles, he wins.*/
    return true;
}
int main() {
    int no_of_boons, no_of_recharges, initial_power;
    cin >> no_of_boons >> no_of_recharges >> initial_power;
    ll enemy_power[11]; // Array of the powers of the enemies, 11 is the number of enemies
    for(int i = 0; i < 11; i++) {
        cin >> enemy_power[i];
    }
    if(check(no_of_boons, no_of_recharges, initial_power, enemy_power)) {
        cout << "Yes, Abhimanyu can cross the Chakravyuh\n";
    }
    else{
        cout << "No, Abhimanyu cannot cross the Chakravyuh\n";
    }
    return 0;
}

/*
Time Complexity: O(N), where, N = 11, i.e., since, the size of the input array is fixed, hence, 
the time complexity is constant, i.e., Time Complexity: O(1)
Space Complexity: O(N), where N = 11, i.e., since, the size of the input array is fixed, hence, 
the time complexity is constant, i.e., Space Complexity: O(1)
*/

/*
Test Case 1:
    Input:-

    3 2 32
    12 18 16 6 8 11 20 10 7 8 10

    where,
    no_of_boons = 3
    no_of_recharges = 2
    initial_power = 32
    enemy_power = {12, 18, 16, 6, 8, 11, 20, 10, 7, 8, 10}

    Output:-

    Yes, Abhimanyu can cross the Chakravyuh.

*/

/*
Test Case 2:
    Input:-

    1 1 100
    45 70 55 90 60 85 75 110 95 120 80

    where,
    no_of_boons = 1
    no_of_recharges = 1
    initial_power = 100
    enemy_power[11] = {45, 70, 55, 90, 60, 85, 75, 110, 95, 120, 80};

    Output:-
    No, Abhimanyu cannot cross the Chakravyuh.

*/
