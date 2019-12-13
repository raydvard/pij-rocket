#include "io.h"

int i2c_bus_holder;

int init(void)
{
    // Open the Bus file and load the file in read+write mode
    i2c_bus_holder = open(I2C_BUS, O_RDWR);
    perror("Result: ");
    printf("Value: %d\n", i2c_bus_holder);
    //I2C
    return 0;
}