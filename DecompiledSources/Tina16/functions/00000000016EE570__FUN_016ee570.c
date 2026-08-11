/* Ghidra address: 016ee570 */
/* Ghidra symbol: FUN_016ee570 */


undefined8 FUN_016ee570(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01b057c0(param_1,param_3);
  return *(undefined8 *)(param_2 + (longlong)iVar1 * 8);
}

