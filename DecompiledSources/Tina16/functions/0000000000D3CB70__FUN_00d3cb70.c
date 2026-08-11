/* Ghidra address: 00d3cb70 */
/* Ghidra symbol: FUN_00d3cb70 */


undefined4 * FUN_00d3cb70(longlong param_1,undefined4 *param_2)

{
  FUN_0040d200(param_2,0x1c,0);
  *param_2 = 0x1c;
  param_2[1] = 0x17;
  thunk_FUN_04083ff6(*(undefined8 *)(param_1 + 8),1,param_2);
  return param_2;
}

