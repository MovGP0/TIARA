/* Ghidra address: 006f3c70 */
/* Ghidra symbol: FUN_006f3c70 */


byte FUN_006f3c70(undefined8 param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = (param_2 & 1) != 0;
  if ((param_2 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_2 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_2 & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((param_2 & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  return bVar1;
}

