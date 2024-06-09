# PhoneCompany
## Scenario

A phone company offers a monthly plan in which customers can select how much data, call minutes and texts they want.
This information is stored in a file called _plans.txt_ and each line in the file uses this format:

`name;phone number;data;call minutes;texts` 

For example, the first few lines in the file could look like this: 

```
Madonna;062491;120;325;300 
Frodo Baggins;061825;300;60;200
Waipu Expert Plumbers;068432;200;180;550
```

My program reads the data from the file and calculates the cost of the plan for each customer. The cost is calculated as follows: 

*   Cost for data is $10.00 for 100 MB 
*   Cost for calls is $2.00 for 50 minutes 
*   Cost for texts is $3.00 for 100 texts 
    
It is possible to have fractions of these costs. For example, 20 texts would cost $0.60.

The display should look like this: 

```
Madonna (062491) 120MB 325mins 300txt Plan costs $34.00
Frodo Baggins (061825) 300MB 60mins 200txt Plan costs $38.40 
Waipu Expert Plumbers (068432) 200MB 180mins 550txt Plan costs $43.70
```

Notes: 
*   There can be any number of spaces in a name.
*   The data, the call minutes and the text number are all integers (no fractions).
*   Phone numbers are displayed with a leading zero. 
*   Costs are displayed with a dollar sign and 2 decimal places. 
*   The file must be called _plans.txt_.
