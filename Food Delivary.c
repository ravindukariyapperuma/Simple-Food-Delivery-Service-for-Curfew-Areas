#include <stdio.h>
int main(void) 
{
  printf("\nSPECIAL FOOD DELIVERY SERVICE FOR CURFEW AREAS\n");
  printf("Stay Home Protect our Community against COVID-19\n\n");
  printf("------------------------------------------------\n");
  printf("Food Id \t Food Name \t\t Qty \t Price(Rs:)\n");
  printf("------------------------------------------------\n");
  printf("A \t\t\t Samba Rice \t 3kg \t 270.00\n");
  printf("B \t\t\t Milk Powder \t 200g \t 100.00\n");
  printf("C \t\t\t Tea \t\t\t 100g \t 50.00\n");
  printf("D \t\t\t Jack Mackeral \t 100g \t 100.00\n");
  printf("E \t\t\t Biscuit \t\t 100g \t 50.00\n");
  printf("F \t\t\t Coconut Oil \t 500ml \t 150.00\n");
  printf("G \t\t\t Noodles \t\t 400g \t 110.00\n");
  printf("H \t\t\t Soyameat \t\t 100g \t 70.00\n");
  printf("I \t\t\t Onion \t\t\t 500g \t 80.00\n");
  printf("J \t\t\t Potato \t\t 500g \t 90.00\n");
  printf("K \t\t\t Eggs \t\t\t 5 \t\t 52.00\n");
  printf("L \t\t\t Carrot \t\t 500g \t 160.00\n");
  printf("M \t\t\t Sugar \t\t 100g \t 45.00\n");
  printf("------------------------------------------------\n");
  
  char foodId, choise ='Y';
  int foodCount = 0, countA = 0, countB = 0, countC = 0, countD = 0, countE = 0, countF = 0, countG = 0, countH = 0, countI = 0, countJ = 0, countK = 0, countL = 0, countM = 0;
  float totA = 0.0, totB = 0.0, totC = 0.0, totD = 0.0, totE = 0.0, totF = 0.0, totG = 0.0, totH = 0.0, totI = 0.0, totJ = 0.0, totK = 0.0, totL = 0.0, totM = 0.0, total = 0.0;
  
  while ((foodCount <= 8) && (choise == 'Y'))
  {
	printf("\nEnter food id : ");
    scanf(" %c", &foodId);
	if(foodId == 'a' || foodId == 'A')
    {
      printf("Samba Rice Added\n");
      countA++;
      totA += 270.0;
    }
	else if(foodId == 'b' || foodId == 'B')
    {
      printf("Milk Powder Added\n");
      countB++;
      totB += 100.0;
    }
	else if(foodId == 'c' || foodId == 'C')
    {
      printf("Tea Added\n");
      countC++;
      totC += 50.0;
    }
	else if(foodId == 'd' || foodId == 'D')
    {
      printf("Jack Mackeral Added\n");
      countD++;
      totD += 100.0;
    }
	else if(foodId == 'e' || foodId == 'E')
    {
      printf("Biscuit Added\n");
      countE++;
      totE += 50.0;
    }
	else if(foodId == 'f' || foodId == 'F')
    {
      printf("Coconut Oil Added\n");
      countF++;
      totF += 150.0;
    }
	else if(foodId == 'g' || foodId == 'G')
    {
      printf("Noodles Added\n");
      countG++;
      totG += 110.0;
    }
	else if(foodId == 'h' || foodId == 'H')
    {
      printf("Soyameat Added\n");
      countH++;
      totH += 70.0;
    }
	else if(foodId == 'i' || foodId == 'I')
    {
      printf("Onion Added\n");
      countI++;
      totI += 80.0;
    }
	else if(foodId == 'j' || foodId == 'J')
    {
      printf("Potato Added\n");
      countJ++;
      totJ += 90.0;
    }
	else if(foodId == 'k' || foodId == 'K')
    {
      printf("Eggs Added\n");
      countK++;
      totK += 52.0;
    }
	else if(foodId == 'l' || foodId == 'L')
    {
      printf("Carrot Added\n");
      countL++;
      totL += 160.0;
    }
	else if(foodId == 'm' || foodId == 'M')
    {
      printf("Sugar Added\n");
      countM++;
      totM += 45.0;
    }
	else
    {
      printf("Invalid Food id");
      foodCount--;
    }
	foodCount++;
	if (foodCount >= 8)
    {
      printf("\nYou have buy the maximum number of foods for the day");
      break;
    }
	else
    {
       printf("\nDo you want do another Food (Y/N)");             
       scanf("%*c%c", &choise); 
    }
  }
  
  return 0;
}