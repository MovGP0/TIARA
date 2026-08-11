/* Ghidra address: 01a26640 */
/* Ghidra symbol: FUN_01a26640 */


undefined8 FUN_01a26640(longlong param_1,undefined8 *param_2)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = (int)*param_2;
  uStack_c = (int)((ulonglong)*param_2 >> 0x20);
  return CONCAT44(*(int *)(param_1 + 0x36c) + uStack_c,*(int *)(param_1 + 0x368) + local_10);
}

