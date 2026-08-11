/* Ghidra address: 007f9990 */
/* Ghidra symbol: FUN_007f9990 */


byte FUN_007f9990(uint param_1)

{
  short sVar1;
  byte bVar2;
  
  sVar1 = thunk_FUN_040bd713(0x10);
  bVar2 = sVar1 < 0;
  sVar1 = thunk_FUN_040bd713(0x11);
  if (sVar1 < 0) {
    bVar2 = bVar2 | 4;
  }
  if ((param_1 & 0x20000000) != 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}

