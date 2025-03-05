#include <avr/io.h> // Include the standard IO header
#include <util/delay.h> // Include delay header for comparison and potential alternative

int main(void) {
  DDRB |= (1 << DDB5); // Set pin 13 (PB5) as output (assuming Arduino Uno)

  while (1) {
    PORTB ^= (1 << PORTB5); // Toggle pin 13 (PB5) state (LED)
    _delay_ms(1000); // 1 second delay using standard delay
  }

  return 0; // Never reached in this infinite loop
}