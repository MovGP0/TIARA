/* Ghidra address: 00f90b20 */
/* Ghidra symbol: FUN_00f90b20 */


void FUN_00f90b20(longlong param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  *(undefined4 *)(lVar1 + (longlong)param_2 * 8) = param_3;
  *(undefined1 *)(lVar1 + 4 + (longlong)param_2 * 8) = 1;
  return;
}

