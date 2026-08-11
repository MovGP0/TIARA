/* Ghidra address: 01cbf920 */
/* Ghidra symbol: FUN_01cbf920 */


int FUN_01cbf920(longlong param_1)

{
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01cbfd00(param_1,&local_10);
  FUN_004168e0(&local_18,local_10);
  local_1c = FUN_01d31290(local_18);
  local_1c = local_1c + 5;
  if (*(byte *)(param_1 + 0x14) != 0) {
    local_1c = local_1c + (uint)*(byte *)(param_1 + 0x14) * 4;
  }
  FUN_00414520(&local_18);
  FUN_00414480(&local_10);
  return local_1c;
}

