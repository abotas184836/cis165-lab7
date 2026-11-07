# cis165-lab7

Required test cases
| Test / data | Expected result | Actual result | Match or correction |
| -------- | -------- | -------- | -------- |
| 8, 3, 12, -99 | Smallest 3; largest 12. | Smallest value: 3; Largest value: 12 | Match |
| -8, -3, -12, -99 | Smallest -12; largest -3. The sentinel is excluded. | Smallest value: -12; Largest value: -3 | Match |
| 5, -99 | Smallest 5; largest 5. | Smallest value: 5; Largest value: 5 | Match |
| 0, 0, -99 | Smallest 0; largest 0. | Smallest value: 0; Largest value: 0 | Match |
| -99 | Clear no-data message. | No data values were entered. | Match |
| 10, 25, 3, 18, -99 | Smallest 3; largest 25. | Smallest value: 3; Largest value: 25 | Match |

<br>

Loop trace
| Step | Number | Smallest | Largest | Action |
| -------- | -------- | -------- | -------- | -------- |
| 1 | 10 | 10 | 10 | Initialize both extrema |
| 2 | 25 | 10 | 25 | Update largest |
| 3 | 3 | 3 | 25 | Update smallest |
| 4 | 18 | 3 | 25 | No update needed |
| 5 | -99 | 3 | 25 | Stop the loop |

<br>

How does your code keep -99 out of the calculations? <br> The code checks whether the first number is -99 before initializing the extrema. The ```while ( number != -99 )``` condition also makes sure the loop only processes numbers that are not the sentinel.  When -99 is entered, the loop stops before performing any calculations with it.<br><br>
Why is initializing both extrema to zero incorrect for some series?<br>Initializing both values to zero can produce incorrect results when all the numbers are positive or all the numbers are negative. For example, if the input is: ```5, 10, 15, -99``` If both extrema start at zero, the smallest value incorrectly remains zero, even though zero was never entered. Similarly, with negative numbers, the largest value could incorrectly remain zero. Initializing both extrema to the first actual input value avoids this problem.<br><br>
How do you distinguish an empty series from a series containing zero?<br>The code checks whether the first input is -99. If the first input is -99, the series is empty, and the program displays "No data values were entered." If the first input is 0, zero is valid data. The program initializes both the largest and smallest values to zero and processes the series normally. This distinction ensures that zero is treated as a valid number and only -99 is treated as the sentinel.<br><br>

The code can be ran using OnlineGD. Upload the .cpp file, select C++17, and click run.
