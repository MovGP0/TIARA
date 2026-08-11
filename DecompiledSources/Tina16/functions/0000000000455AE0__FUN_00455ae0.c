/* Ghidra address: 00455ae0 */
/* Ghidra symbol: FUN_00455ae0 */


undefined8 FUN_00455ae0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 *local_28;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_10 = 0;
  local_18 = *(longlong *)(param_1 + 8);
  local_1c = 0;
  if (local_18 != 0) {
    local_1c = *(int *)(local_18 + -4);
  }
  if (*(int *)(param_1 + 0x10) == local_1c) {
    local_40 = auStack_68;
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 8));
  }
  else if (param_3 == '\0') {
    FUN_00414480(&local_10);
    local_28 = (undefined8 *)(param_1 + 8);
    local_2c = *(undefined4 *)(param_1 + 0x10);
    FUN_00416dc0(&local_10,*local_28,1,local_2c);
    FUN_00414ad0(param_2,local_10);
    FUN_00414480(&local_10);
  }
  else {
    local_40 = auStack_68;
    FUN_004169f0(param_1 + 8,*(int *)(param_1 + 0x10));
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 8));
  }
  FUN_00414480(&local_10);
  return param_2;
}

