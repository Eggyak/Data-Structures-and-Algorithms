#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

class DetectSquares {
private:
    // Stores frequencies: x -> { y -> frequency }
    unordered_map<int, unordered_map<int, int>> counts;

public:
    DetectSquares() {
        // Initialization handled by container constructors
    }
    
    void add(vector<int> point) {
        int x = point[0];
        int y = point[1];
        counts[x][y]++;
    }
    
    int count(vector<int> point) {
        int x1 = point[0];
        int y1 = point[1];
        int totalSquares = 0;
        
        // Iterate through all unique x-coordinates in the map
        for (const auto& [x3, yMap] : counts) {
            // A diagonal point cannot share the same x-coordinate (must have positive area)
            if (x3 == x1) continue;
            
            // Calculate side length
            int side = abs(x3 - x1);
            
            // Check both possible y-coordinates for the diagonal point
            // Case 1: y3 = y1 + side
            // Case 2: y3 = y1 - side
            for (int y3 : {y1 + side, y1 - side}) {
                // Verify if the diagonal point (x3, y3) actually exists
                if (yMap.count(y3)) {
                    int count_diagonal = yMap.at(y3);
                    
                    // Look up the remaining two corners: (x1, y3) and (x3, y1)
                    int count_p2 = counts[x1].count(y3) ? counts[x1].at(y3) : 0;
                    int count_p3 = counts[x3].count(y1) ? counts[x3].at(y1) : 0;
                    
                    // The number of squares formed is the product of the frequencies of the 3 points
                    totalSquares += count_diagonal * count_p2 * count_p3;
                }
            }
        }
        
        return totalSquares;
    }
};
