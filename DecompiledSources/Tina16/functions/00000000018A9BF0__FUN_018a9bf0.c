/* Ghidra address: 018a9bf0 */
/* Ghidra symbol: FUN_018a9bf0 */


undefined8 * FUN_018a9bf0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x550);
  *param_2 = *(undefined8 *)(lVar1 + 0x158);
  param_2[1] = *(undefined8 *)(lVar1 + 0x160);
  return param_2;
}

