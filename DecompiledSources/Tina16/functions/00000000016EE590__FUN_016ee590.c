/* Ghidra address: 016ee590 */
/* Ghidra symbol: FUN_016ee590 */


void FUN_016ee590(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,longlong param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    iVar1 = FUN_01b05690(param_1,param_3,param_4);
    *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = param_5;
  }
  else {
    iVar1 = FUN_01b05690(param_6,param_3,param_4);
    *(undefined8 *)(param_2 + (longlong)iVar1 * 8) = param_5;
  }
  return;
}

