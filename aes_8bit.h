#include <stdint.h>
typedef uint8_t aes_state[4][4];
uint8_t ffm2(uint8_t k);
#define ffm1(m) (m)
#define ffm3(m) (ffm2(m) ^ m)
#define ffm4(m) (ffm2(ffm2(m)))
#define ffm5(m) (ffm4(m) ^ m)
void key_schedule(aes_state key, aes_state roundkeys[11]);
void aes_encrypt(const uint8_t key[16], const uint8_t plain[16], uint8_t cipher[16]);
