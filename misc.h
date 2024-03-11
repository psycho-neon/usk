#define PIX_blu 0x00F8FF
#define PIX_yel 0x007F00
#define PIX_whi 0x7F0000

#define PIX_pur 0x00F8FF 
#define PIX_purb 0x01363F

#define PIX_b 0x01363F

void put_pixel(uint32_t pixel_grb);

void halt_with_error(uint32_t err, uint32_t bits);

void gpio_disable_input_output(int pin);

void gpio_enable_input_output(int pin);

void finish_pins_except_leds();

void reset_cpu();
