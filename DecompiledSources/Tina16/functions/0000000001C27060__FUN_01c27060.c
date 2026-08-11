/* Ghidra address: 01c27060 */
/* Ghidra symbol: FUN_01c27060 */


undefined8 FUN_01c27060(longlong param_1)

{
  undefined8 local_10;
  
  local_10._0_4_ = (int)*(undefined8 *)(param_1 + 0x568);
  local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x568) >> 0x20);
  local_10 = CONCAT44(local_10._4_4_ - (*(int *)(param_1 + 0x4f8) - *(int *)(param_1 + 0x4f0)),
                      (int)local_10 - (*(int *)(param_1 + 0x524) - *(int *)(param_1 + 0x51c)));
  return local_10;
}

