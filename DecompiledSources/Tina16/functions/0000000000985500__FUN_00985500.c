/* Ghidra address: 00985500 */
/* Ghidra symbol: FUN_00985500 */


undefined8 * FUN_00985500(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  *param_2 = *(undefined8 *)(lVar1 + 0xb0);
  param_2[1] = *(undefined8 *)(lVar1 + 0xb8);
  return param_2;
}

