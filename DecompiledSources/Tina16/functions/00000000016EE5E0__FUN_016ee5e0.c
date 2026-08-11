/* Ghidra address: 016ee5e0 */
/* Ghidra symbol: FUN_016ee5e0 */


undefined8 *
FUN_016ee5e0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
            undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = FUN_01b05690(param_2,param_5,param_6);
  *param_1 = *(undefined8 *)(param_3 + (longlong)iVar1 * 8);
  iVar1 = FUN_01b05690(param_2,param_5,param_6);
  param_1[1] = *(undefined8 *)(param_4 + (longlong)iVar1 * 8);
  return param_1;
}

