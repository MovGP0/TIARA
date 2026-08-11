/* Ghidra address: 01a4c1d0 */
/* Ghidra symbol: FUN_01a4c1d0 */


undefined8 FUN_01a4c1d0(longlong param_1,undefined8 param_2,int param_3)

{
  int local_4c;
  int local_48 [2];
  undefined1 local_40;
  int local_38;
  undefined1 local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if ((*(short *)(param_1 + 0x2904) == 0x50) ||
     (local_4c = param_3, *(short *)(param_1 + 0x2904) == 0x53)) {
    local_4c = param_3 / 2;
  }
  local_48[0] = local_4c;
  local_40 = 0;
  local_38 = local_4c * 0x14;
  local_30 = 0;
  FUN_00442f70(param_2,L"Filter statistics: order=%d, roll-off rate=%ddB/d",local_48,1);
  FUN_00416ad0(param_2,&LAB_01a4c328);
  FUN_00414560(&local_20,3);
  return param_2;
}

