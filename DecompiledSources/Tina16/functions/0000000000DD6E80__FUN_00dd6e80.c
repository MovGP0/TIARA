/* Ghidra address: 00dd6e80 */
/* Ghidra symbol: FUN_00dd6e80 */


bool FUN_00dd6e80(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  return lVar1 != 0;
}

