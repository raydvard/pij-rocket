#ifndef IO_H_INCLUDED
#define IO_H_INCLUDED

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<linux/i2c-dev.h>

// static const I2C_BUS = "/dev/i2c-1"; // Communication Bus I2C-1 (Only 2 BUS available)
// static const I2C_PIJ = 0x14; // Actual Device with Device Address
// static const I2C_RTC = 0x68; // Real Time Clock

#define I2C_BUS "/dev/i2c-1" // Communication Bus I2C-1 (Only 2 BUS available)
#define I2C_PIJ 0x14 // Actual Device with Device Address
#define I2C_RTC 0x68 // Real Time Clock


static const int SYSTEM_POWER_SWITCH_CTRL_CMD = 0x64;

// Function Signatures
int init(void);

extern int i2c_bus_holder; // I2C File PiJuice -> File Opener/Streamer
extern int i2c_real_time_clock; // I2C File Real Time Clock -> Controls the Clock



#endif // IO_H_INCLUDED


// Ref: https://stackoverflow.com/questions/1674032/static-const-vs-define-vs-enum
// Ref: https://www.doc.ic.ac.uk/lab/cplus/cstyle.html
