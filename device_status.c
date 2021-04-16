#include "device_status.h"

extern inline void set_fnd_value(struct device_status *status, const unsigned char val[4])          { memcpy(status->fnd_val, val, sizeof(status->fnd_val)); }
extern inline void set_text_lcd_value(struct device_status *status, const unsigned char val[32])    { memcpy(status->text_lcd_val, val, sizeof(status->text_lcd_val)); }
extern inline void set_dot_matrix_value(struct device_status *status, const unsigned char val[10])  { memcpy(status->dot_matrix_val, val, sizeof(status->dot_matrix_val)); }
extern inline void set_led_value(struct device_status *status, const unsigned long val)             { status->led_val = val; }

/**
 * init_status - initializes @status
 *
 * @status: device status to initialize
 */
extern inline void init_status(struct device_status *status, unsigned int mode) {
  status->mode = mode;

  // set states to zero values
  memset(status->fnd_val, '0', 4);
  memset(status->text_lcd_val, ' ', 32);
  memset(status->dot_matrix_val, 0x00, 10);
  status->led_val = 0x00;
}