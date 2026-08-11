/* Ghidra address: 01955760 */
/* Ghidra symbol: FUN_01955760 */


byte FUN_01955760(undefined8 param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = (param_2 & 1) != 0;
  if ((param_2 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_2 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  return bVar1;
}

