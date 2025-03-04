#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRB |= (1 << DDB5); // Set pin 13 (PB5) as output

  while (1) {
    PORTB ^= (1 << PORTB5); // Toggle pin 13
    _delay_ms(1000); // 1 second delay
  }

  return 0;
  // This is a comment to test the git diff command
  // This is a comment to test the git diff command
}
