#HorseRace
** Algorithm ** 
```
main()
functions take name of horse (number) and amount of horses
Track position of horses inside array 
Create racetrack using 15 character array and name is TRACK_LENGTH 
Take user input to coin flip determining whether the horse moves forward
Keeping looping until a horse reaches the end
Print name of horse that winds. 

horse 1 >> 0 
horse 2 >> 1
horse 3 >> 2
horse 4 >> 3
horse 5 >> 4


void advance(int, horseNum, horse* horses)
roll a zero or one, add it to coin. 
  Add coin to horses' position in the array. 
  
void PrintLane(int, horseNum, int* horses)
  given a horse number and the array of horses
  loop from zero to TRACK_LENGTH
    If the current loop index is equal to the horse's value 
    print the horse's id
  otherwise 
    print a . 

bool isWinner(int, horseNum, int* horses) 
  result = false 
  given a horse number and the array of horses
  if the current horse's value is equal to the TRACK_LENGTH 
    result = true 
    print winner
```
