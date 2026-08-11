/* Ghidra address: 00807850 */
/* Ghidra symbol: FUN_00807850 */


undefined8 * FUN_00807850(longlong param_1,undefined8 *param_2)

{
  undefined4 local_50 [5];
  undefined8 local_3c;
  undefined8 uStack_34;
  
  local_50[0] = 0x28;
  thunk_FUN_04166da1(*(undefined8 *)(param_1 + 8),local_50);
  *param_2 = local_3c;
  param_2[1] = uStack_34;
  return param_2;
}

