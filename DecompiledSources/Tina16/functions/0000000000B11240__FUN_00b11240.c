/* Ghidra address: 00b11240 */
/* Ghidra symbol: FUN_00b11240 */


undefined8 * FUN_00b11240(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x600);
  *param_2 = *(undefined8 *)(lVar1 + 0x50);
  param_2[1] = *(undefined8 *)(lVar1 + 0x58);
  return param_2;
}

