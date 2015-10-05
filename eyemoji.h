/*
  Eyemoji format is modeled from the Font bitfields. Each array inside of the 
  Eyemoji array a byte representing the bit patern for each columm.


  x . . . . . x
  . . . . . . .
  . . . . . . .
  . . . . . . .
  x . . . . . x

*/

const char Eyemoji[][7] PROGMEM = {
	{
		0b00000100,
		0b00000010, 
		0b00000001, 
		0b00000010, 
		0b00000100, 
		0b00000000
	}, // really happy
	{
		0b00000000,
		0b00000100,
		0b00000010, 
		0b00000010, 
		0b00000010, 
		0b00000100, 
		0b00000000
	}, // happy
	{
		0b00000000,
		0b00000000, 
		0b00001010, 
		0b00000100, 
		0b00001010, 
		0b00000000,
		0b00000000
	}, // dead
}