/* Ghidra address: 00985520 */
/* Ghidra symbol: FUN_00985520 */


undefined8 * FUN_00985520(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  *param_2 = *(undefined8 *)(lVar1 + 0xc0);
  param_2[1] = *(undefined8 *)(lVar1 + 200);
  return param_2;
}

