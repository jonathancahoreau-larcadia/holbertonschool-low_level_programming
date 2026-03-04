#Report on time analyses and conclusions

Introduction
This report analyzes a program composed of three steps: BUILD_DATA, PROCESS, and REDUCE. Three executions were performed to observe program stability, the time allocation between steps, and normal system variations. The objective is to identify where the program spends the most time and what this implies for performance and energy consumption.

#Measurement Methodology:
The analysis relies on a separate measurement of each program step. "clock()" is used to measure the actual time spent by the processor.

Three executions were performed to account for minor system variations.

Results :
Run 1: TOTAL 0.000704 s — BUILD_DATA 0.000332 s — PROCESS 0.000164 s — REDUCE 0.000204 s
Run 2: TOTAL 0.000954 s — BUILD_DATA 0.000469 s — PROCESS 0.000202 s — REDUCE 0.000277 s
Run 3: TOTAL 0.000930 s — BUILD_DATA 0.000470 s — PROCESS 0.000203 s — REDUCE 0.000253 s


#Observed Performance Differences:
The three executions show a stable structure.

BUILD_DATA is the longest (45–50% of the total time). It creates 50,000 values, which requires many repetitions.

PROCESS is the fastest. The calculations performed are simple, and the data is already prepared.

REDUCE falls between the two. It adds the values ​​one by one, which limits the speed.

The total time varies slightly, which is normal because the computer performs other tasks in parallel.


#Relation Between Runtime and Energy Consumption:
A longer program generally consumes more energy, but duration alone doesn't explain everything.

Some operations require more effort from the processor than others.
The processor can change speed depending on the load or temperature.
Two steps of the same duration don't necessarily consume the same amount of energy.


#Limitations of the Experiment:
Several limitations must be considered:

The measured durations are very short (< 1 ms), and therefore sensitive to minor system disturbances.
Three executions are insufficient for robust statistical analysis.
The processor may automatically adjust its speed.


#Practical Engineering Takeaway:
This analysis highlights several important points:

Measurement is always necessary before optimization.
Execution time does not always reflect energy consumption.
Some operations are inherently slower.
Tests must be reproducible to be reliable.
Repeating measurements improves the quality of the analysis.
