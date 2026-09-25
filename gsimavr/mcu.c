#include <mcu.h>

/* MCU pin descriptions. */

static Mcu attiny85 = {"attiny85", "B", 8,
                       { {.type = Other },              // Reset
                         {3, 0, 0, Gpio_in_0},          // PB3
                         {4, 0, 0, Gpio_in_0},          // PB4
                         {.type = Gnd },
                         {0, 0, 0, Gpio_in_0},          // PB0
                         {1, 0, 0, Gpio_in_0},          // PB1
                         {2, 0, 0, Gpio_in_0},          // PB2 
                         {.type = Power },              // Reset
                       }
};

Mcu * const mcu[] = {&attiny85, 0};
