/* Ghidra address: 018a9160 */
/* Ghidra symbol: FUN_018a9160 */


undefined8 * FUN_018a9160(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x550);
  *param_2 = *(undefined8 *)(lVar1 + 0x4d0);
  param_2[1] = *(undefined8 *)(lVar1 + 0x4d8);
  return param_2;
}

