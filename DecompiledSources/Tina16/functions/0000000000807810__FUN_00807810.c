/* Ghidra address: 00807810 */
/* Ghidra symbol: FUN_00807810 */


undefined8 * FUN_00807810(longlong param_1,undefined8 *param_2)

{
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  
  local_50 = 0x28;
  thunk_FUN_04166da1(*(undefined8 *)(param_1 + 8),&local_50);
  *param_2 = local_4c;
  param_2[1] = uStack_44;
  return param_2;
}

