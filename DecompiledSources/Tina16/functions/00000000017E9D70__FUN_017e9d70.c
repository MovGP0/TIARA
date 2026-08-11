/* Ghidra address: 017e9d70 */
/* Ghidra symbol: FUN_017e9d70 */


undefined4 FUN_017e9d70(longlong param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  local_50 = auStack_a8;
  local_40 = 0;
  local_48 = 0;
  FUN_017e1290(&local_40,*(undefined4 *)(param_1 + 0x908));
  local_88 = (undefined1 *)local_40;
  FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0x3b0),L"\\pmbus_temp");
  (**(code **)(*param_2 + 0x100))(param_2,local_48);
  local_30 = 0;
  local_1c = 0;
  local_20 = 0x21;
  local_88 = local_24;
  local_80 = local_28;
  local_78 = local_2c;
  local_70 = 0;
  local_60 = &local_34;
  local_68 = param_3;
  cVar1 = FUN_0160d060(local_48,*(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_1 + 0x3a8),
                       &local_20);
  if (cVar1 != '\0') {
    local_1c = local_34;
  }
  FUN_00414560(&local_48,2);
  return local_1c;
}

