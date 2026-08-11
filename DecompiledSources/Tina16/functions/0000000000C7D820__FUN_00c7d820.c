/* Ghidra address: 00c7d820 */
/* Ghidra symbol: FUN_00c7d820 */


ulonglong FUN_00c7d820(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  
  lVar2 = (longlong)param_2;
  piVar1 = (int *)(param_1 + 0x1c + lVar2 * 4);
  *piVar1 = *piVar1 + -1;
  if (((*(int *)(param_1 + 0x1c + lVar2 * 4) < 1) &&
      (*(undefined4 *)(param_1 + 0x1c + lVar2 * 4) = 0, *(char *)(param_1 + 0x1b) != '\0')) &&
     (param_2 != 0)) {
    FUN_00c7d670(param_1,0,0,param_2,0x7f);
    if (0x3b < param_2) {
      FUN_00c7d670(param_1,0,0,0x5a,0x7f);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1) & 0xffffffff;
}

