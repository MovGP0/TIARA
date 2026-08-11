/* Ghidra address: 016e9d80 */
/* Ghidra symbol: FUN_016e9d80 */


byte FUN_016e9d80(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 7);
  if ((uint)bVar1 + (uint)param_2 < 0x100) {
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + param_2;
  }
  else {
    FUN_01b04d70(0x21c,&LAB_016e9dcc,0);
  }
  return bVar1;
}

