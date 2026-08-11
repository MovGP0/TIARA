/* Ghidra address: 016eead0 */
/* Ghidra symbol: FUN_016eead0 */


double * FUN_016eead0(double *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                     undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b05600(param_2,param_5);
  iVar2 = FUN_01b05600(param_2,param_6);
  *param_1 = *(double *)(param_3 + (longlong)iVar1 * 8) - *(double *)(param_3 + (longlong)iVar2 * 8)
  ;
  param_1[1] = *(double *)(param_4 + (longlong)iVar1 * 8) -
               *(double *)(param_4 + (longlong)iVar2 * 8);
  return param_1;
}

