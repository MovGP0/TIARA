/* Ghidra address: 010f0ad0 */
/* Ghidra symbol: FUN_010f0ad0 */


void FUN_010f0ad0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = *param_3;
  if (*(int *)(param_1 + 0x98) == 0x3000000) {
    local_30 = (int)local_20 + -2;
    local_20._4_4_ = (int)((ulonglong)local_20 >> 0x20);
    local_2c = local_20._4_4_ + -2;
    local_28 = (((int)local_20 + *(int *)(param_1 + 0x88)) - *(int *)(param_1 + 0x80)) + 2;
    local_24 = ((local_20._4_4_ + *(int *)(param_1 + 0x8c)) - *(int *)(param_1 + 0x84)) + 2;
  }
  else {
    local_30 = FUN_00b905e0((longlong)*(char *)(param_1 + 0xa0),2);
    local_30 = (int)local_20 - local_30;
    local_2c = FUN_00b905e0((longlong)*(char *)(param_1 + 0xa0),2);
    local_2c = local_20._4_4_ - local_2c;
    local_28 = FUN_00b905e0(*(char *)(param_1 + 0xa0) * 2,2);
    local_28 = (((int)local_20 + *(int *)(param_1 + 0x88)) - *(int *)(param_1 + 0x80)) + local_28;
    local_24 = FUN_00b905e0(*(char *)(param_1 + 0xa0) * 2,2);
    local_24 = ((local_20._4_4_ + *(int *)(param_1 + 0x8c)) - *(int *)(param_1 + 0x84)) + local_24;
  }
  FUN_01a8dcd0(param_2,&local_30,*(longlong *)(param_1 + 0xa8) + 0x98);
  return;
}

