/*
1. Initialize circle_points, square_points and interval to 0.
2. Generate random point x.
3. Generate random point y.
4. Calculate d = x*x + y*y.
5. If d <= 1, increment circle_points.
6. Increment square_points.
7. Increment interval.
8. If increment < NO_OF_ITERATIONS, repeat from 2.
9. Calculate pi = 4*(circle_points/square_points).
10. Terminate.


https://www.geeksforgeeks.org/estimating-value-pi-using-monte-carlo/
*/
int main() 
{ 
    int interval, i; 
    double rand_x, rand_y, origin_dist, pi; 
    int circle_points = 0, square_points = 0; 
  
    // Initializing rand() 
    srand(time(NULL)); 
  
    // Total Random numbers generated = possible x 
    // values * possible y values 
    for (i = 0; i < (INTERVAL * INTERVAL); i++) { 
  
        // Randomly generated x and y values 
        rand_x = double(rand() % (INTERVAL + 1)) / INTERVAL; 
        rand_y = double(rand() % (INTERVAL + 1)) / INTERVAL; 
  
        // Distance between (x, y) from the origin 
        origin_dist = rand_x * rand_x + rand_y * rand_y; 
  
        // Checking if (x, y) lies inside the define 
        // circle with R=1 
        if (origin_dist <= 1) 
            circle_points++; 
  
        // Total number of points generated 
        square_points++; 
  
        // estimated pi after this iteration 
        pi = double(4 * circle_points) / square_points; 
  
        // For visual understanding (Optional) 
        cout << rand_x << " " << rand_y << " " << circle_points 
             << " " << square_points << " - " << pi << endl << endl; 
  
        // Pausing estimation for first 10 values (Optional) 
        if (i < 20) 
            getchar(); 
    } 
  
    // Final Estimated Value 
    cout << "\nFinal Estimation of Pi = " << pi; 
  
    return 0; 
} 
