/* Ghidra address: 007f9920 */
/* Ghidra symbol: FUN_007f9920 */


byte FUN_007f9920(uint param_1)

{
  short sVar1;
  byte bVar2;
  
  bVar2 = (param_1 & 4) != 0;
  if ((param_1 & 8) != 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 1) != 0) {
    bVar2 = bVar2 | 8;
  }
  if ((param_1 & 2) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  if ((param_1 & 0x10) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  sVar1 = thunk_FUN_040bd713(0x12);
  if (sVar1 < 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}

