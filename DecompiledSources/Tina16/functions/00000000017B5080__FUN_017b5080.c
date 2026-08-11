/* Ghidra address: 017b5080 */
/* Ghidra symbol: FUN_017b5080 */


undefined8 FUN_017b5080(longlong param_1,undefined8 *param_2)

{
  undefined8 local_18;
  
  local_18._0_4_ = (int)*param_2;
  local_18._4_4_ = (int)((ulonglong)*param_2 >> 0x20);
  local_18 = CONCAT44(local_18._4_4_ - *(int *)(param_1 + 0x1c),
                      (int)local_18 - *(int *)(param_1 + 0x18));
  return local_18;
}

