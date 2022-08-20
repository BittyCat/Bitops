# DERIVATION LEVEL TO BYTE FORMULA

## Properties
  0 -  16 : 0
 16 -  48 : 1
 48 -  80 : 2

## Michiel's 1st attempt
n > 15 ? n / 32 + 1 : 0

## Eva's selfmade formula
(n / 16) + ((n / 16) % 2) - (n/16)^0
(under wrong assumptions about properties)

## Michiel's 2nd attempt
(n - 16) / 32 + 1

( 32 - 16) / 32 + 1 = 0 + 1 = 1
( 48 - 16) / 32 + 1 = 1 + 1 = 2
( 80 - 16) / 32 + 1 = 2 + 1 = 3
(112 - 16) / 32 + 1 = 3 + 1 = 4

n < 16 ?

## Eva's original solution for the 0 when n < 16
(n - 16) / 32 + (n / 16)^0

( 15 - 16) / 32 + (15 / 16)^0 = 0 + 0 = 0
( 16 - 16) / 32 + (16 / 16)^0 = 0 + 1 = 1
( 17 - 16) / 32 + (17 / 16)^0 = 0 + 1 = 1

