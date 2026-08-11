/* Ghidra address: 006e6920 */
/* Ghidra symbol: FUN_006e6920 */


void FUN_006e6920(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if ((*(char *)(param_1 + 0x490) == '\0') && ((param_2 < 0 || (0xffff < param_2)))) {
    FUN_006e6090();
  }
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 == '\0') {
    *(int *)(param_1 + 0x49c) = param_2;
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x402,(longlong)param_2,0);
  }
  return;
}

