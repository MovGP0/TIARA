/* Ghidra address: 00afbed0 */
/* Ghidra symbol: FUN_00afbed0 */


undefined8 * FUN_00afbed0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *param_2 = *(undefined8 *)(lVar1 + 0x108);
  param_2[1] = *(undefined8 *)(lVar1 + 0x110);
  return param_2;
}

