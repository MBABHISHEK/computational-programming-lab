#include <stdio.h>
int main() {
    int meterNumber, unitsConsumed;
    float totalAmount, surcharge = 0.0;

    // Input meter number and units consumed
    printf("Enter meter number of the consumer: ");
    scanf("%d", &meterNumber);
    printf("Enter number of units consumed: ");
    scanf("%d", &unitsConsumed);
    // Calculate charges based on the given rates
    float meterCharge = 100.0;
    float first200UnitsRate = 0.80; // Rs 0.80 per unit
    float next100UnitsRate = 0.90;  // Rs 0.90 per unit
    float beyond300UnitsRate = 1.00; // Rs 1.00 per unit
    // Calculate total amount based on units consumed
    if (unitsConsumed <= 200) {
        totalAmount = meterCharge + unitsConsumed * first200UnitsRate;
    } else if (unitsConsumed <= 300) {
        totalAmount = meterCharge + 200 * first200UnitsRate + (unitsConsumed - 200) * next100UnitsRate;
    } else {
        totalAmount = meterCharge + 200 * first200UnitsRate + 100 * next100UnitsRate + (unitsConsumed - 300) * beyond300UnitsRate;
    }
    // Check if surcharge applies (if total amount is more than Rs. 400)
    if (totalAmount > 400.0) {
        surcharge = 0.15 * totalAmount;
        totalAmount += surcharge;
    }
    // Print bill details
    printf("\nElectricity Bill\n");
    printf("Meter Number: %d\n", meterNumber);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Meter Charge: Rs. %.2f\n", meterCharge);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total Amount: Rs. %.2f\n", totalAmount);
    return 0;
}
