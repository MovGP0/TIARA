/* Ghidra address: 016ee810 */
/* Ghidra symbol: FUN_016ee810 */


double FUN_016ee810(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                   longlong param_5)

{
  int iVar1;
  int iVar2;
  
  if (param_5 == 0) {
    iVar1 = FUN_01b05600(param_1,param_3);
    iVar2 = FUN_01b05600(param_1,param_4);
  }
  else {
    iVar1 = FUN_01b05600(param_5,param_3);
    iVar2 = FUN_01b05600(param_5,param_4);
  }
  return *(double *)(param_2 + (longlong)iVar1 * 8) - *(double *)(param_2 + (longlong)iVar2 * 8);
}

