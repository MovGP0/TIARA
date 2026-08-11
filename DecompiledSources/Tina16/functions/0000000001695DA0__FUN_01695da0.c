/* Ghidra address: 01695da0 */
/* Ghidra symbol: FUN_01695da0 */


void FUN_01695da0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_01695e00(param_1,param_2);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x2dc) = *(byte *)(param_1 + 0x2dc) & ~*(byte *)(param_1 + 8);
  }
  cVar1 = FUN_01695e10(param_1,param_2);
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0x2dc) = *(byte *)(param_1 + 0x2dc) & ~*(byte *)(param_1 + 9);
  }
  *(byte *)(param_1 + 0x2dc) = *(byte *)(param_1 + 0x2dc) | (byte)param_2;
  return;
}

