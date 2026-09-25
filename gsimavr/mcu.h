/* Data to describe a specific MCU to gsimavr. */

typedef enum {
	Gnd, Vdd, Power, Gpio, Other
} Pintype;

typedef const struct pin {
	unsigned port_index;
	Pintype  type;
} Pin;

typedef const struct mcu {
	const char      *name, ports;
	const unsigned   pin_count;
	const Pin		 pins[];
} Mcu;

