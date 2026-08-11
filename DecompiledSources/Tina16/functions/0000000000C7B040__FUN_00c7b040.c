/* Ghidra address: 00c7b040 */
/* Ghidra symbol: FUN_00c7b040 */


undefined8 * FUN_00c7b040(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  *param_2 = *(undefined8 *)(lVar1 + 0x10);
  param_2[1] = *(undefined8 *)(lVar1 + 0x18);
  return param_2;
}

