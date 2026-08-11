/* Ghidra address: 006f6cc0 */
/* Ghidra symbol: FUN_006f6cc0 */


undefined8
FUN_006f6cc0(longlong param_1,int param_2,undefined8 param_3,byte param_4,char param_5,byte param_6)

{
  int local_res10;
  undefined8 local_res18;
  byte local_res20;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  uint *local_50;
  undefined8 local_48;
  int local_3c;
  uint local_38 [2];
  undefined8 local_30;
  undefined8 local_10;
  
  local_60 = auStack_88;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_38[0] = *(uint *)(&DAT_01e01508 + (ulonglong)local_res20 * 4) | 2 |
                *(uint *)(&DAT_01e01510 + (ulonglong)param_6 * 4);
  local_30 = FUN_00416740(local_res18);
  local_res10 = param_2;
  if (param_5 != '\0') {
    local_res10 = param_2 + -1;
  }
  local_48 = FUN_0065b870(param_1);
  local_50 = local_38;
  local_3c = thunk_FUN_041b2403(local_48,0x1053,(longlong)local_res10,local_50);
  if (local_3c == -1) {
    local_10 = 0;
  }
  else {
    local_10 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),local_3c);
  }
  FUN_00414480(&local_res18);
  return local_10;
}

