# Arduino-multiple-NTC-read
This code allows one to read up to five NTC sensors in Celsius. 

The primitive schematic for each NTC can be described as; 

5V -> one side of NTC -> other side of NTC -> 10k resistor -> ground
    1                   2                   3               4
    
Connection number 3 connects to an analog pin. 

This repeats for all of the NTC's.

