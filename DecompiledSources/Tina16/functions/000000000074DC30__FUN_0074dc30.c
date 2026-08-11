/* Ghidra address: 0074dc30 */
/* Ghidra symbol: FUN_0074dc30 */


byte FUN_0074dc30(void)

{
  short sVar1;
  byte bVar2;
  
  sVar1 = thunk_FUN_040bd713(0x10);
  bVar2 = sVar1 < 0;
  sVar1 = thunk_FUN_040bd713(0x11);
  if (sVar1 < 0) {
    bVar2 = bVar2 | 4;
  }
  sVar1 = thunk_FUN_040bd713(0x12);
  if (sVar1 < 0) {
    bVar2 = bVar2 | 2;
  }
  return bVar2;
}

