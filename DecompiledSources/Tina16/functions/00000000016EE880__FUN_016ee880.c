/* Ghidra address: 016ee880 */
/* Ghidra symbol: FUN_016ee880 */


double FUN_016ee880(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b05600(param_1,param_3);
  iVar2 = FUN_01b05600(param_1,param_4);
  return *(double *)(param_2 + (longlong)iVar1 * 8) - *(double *)(param_2 + (longlong)iVar2 * 8);
}

