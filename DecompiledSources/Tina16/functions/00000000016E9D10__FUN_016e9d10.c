/* Ghidra address: 016e9d10 */
/* Ghidra symbol: FUN_016e9d10 */


byte FUN_016e9d10(longlong param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 5) + *(char *)(param_1 + 6);
  if ((uint)bVar1 + (uint)param_2 < 0x100) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + param_2;
  }
  else {
    FUN_01b04d70(0x21c,&LAB_016e9d60,0);
  }
  return bVar1;
}

