/* Ghidra address: 00416830 */
/* Ghidra symbol: FUN_00416830 */


void FUN_00416830(undefined8 param_1,short *param_2,int param_3)

{
  short *psVar1;
  
  for (psVar1 = param_2; (0 < param_3 && (*psVar1 != 0)); psVar1 = psVar1 + 1) {
    param_3 = param_3 + -1;
  }
  FUN_00414740(param_1,param_2,((longlong)psVar1 - (longlong)param_2) / 2 & 0xffffffff);
  return;
}

