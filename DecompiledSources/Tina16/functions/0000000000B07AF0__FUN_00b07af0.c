/* Ghidra address: 00b07af0 */
/* Ghidra symbol: FUN_00b07af0 */


undefined8 * FUN_00b07af0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  *param_2 = *(undefined8 *)(lVar1 + 0x508);
  param_2[1] = *(undefined8 *)(lVar1 + 0x510);
  param_2[2] = *(undefined8 *)(lVar1 + 0x518);
  param_2[3] = *(undefined8 *)(lVar1 + 0x520);
  return param_2;
}

