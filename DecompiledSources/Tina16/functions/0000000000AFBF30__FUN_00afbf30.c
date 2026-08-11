/* Ghidra address: 00afbf30 */
/* Ghidra symbol: FUN_00afbf30 */


undefined8 * FUN_00afbf30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *param_2 = *(undefined8 *)(lVar1 + 0x158);
  param_2[1] = *(undefined8 *)(lVar1 + 0x160);
  return param_2;
}

