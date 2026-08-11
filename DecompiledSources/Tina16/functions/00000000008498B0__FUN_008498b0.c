/* Ghidra address: 008498b0 */
/* Ghidra symbol: FUN_008498b0 */


void FUN_008498b0(longlong param_1,byte param_2)

{
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_18 = *(undefined8 *)(param_1 + 0x498);
  local_10 = *(int *)(param_1 + 0x4a4) + -1;
  local_c = *(int *)(param_1 + 0x4e0) + -1;
  if (((param_2 & 1) != 0) && (*(int *)(param_1 + 0x4bc) < *(int *)(param_1 + 0x498))) {
    local_18._4_4_ = (int)((ulonglong)local_18 >> 0x20);
    local_18 = CONCAT44(local_18._4_4_,(int)local_18 + -1);
  }
  if (((param_2 & 2) != 0) && (*(int *)(param_1 + 0x498) < local_10)) {
    local_18 = CONCAT44(local_18._4_4_,(int)local_18 + 1);
  }
  if (((param_2 & 4) != 0) && (*(int *)(param_1 + 0x4c0) < *(int *)(param_1 + 0x49c))) {
    local_18 = CONCAT44(local_18._4_4_ + -1,(int)local_18);
  }
  if (((param_2 & 8) != 0) && (*(int *)(param_1 + 0x49c) < local_c)) {
    local_18 = CONCAT44(local_18._4_4_ + 1,(int)local_18);
  }
  if ((*(int *)(param_1 + 0x498) != (int)local_18) || (*(int *)(param_1 + 0x49c) != local_18._4_4_))
  {
    FUN_00844ac0(param_1,&local_18);
  }
  return;
}

