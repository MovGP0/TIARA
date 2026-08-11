/* Ghidra address: 00b11260 */
/* Ghidra symbol: FUN_00b11260 */


undefined8 * FUN_00b11260(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x600);
  *param_2 = *(undefined8 *)(lVar1 + 0x60);
  param_2[1] = *(undefined8 *)(lVar1 + 0x68);
  return param_2;
}

