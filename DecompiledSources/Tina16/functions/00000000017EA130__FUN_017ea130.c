/* Ghidra address: 017ea130 */
/* Ghidra symbol: FUN_017ea130 */


void FUN_017ea130(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined4 local_1c [3];
  
  local_50 = auStack_a8;
  local_38 = 0;
  local_40 = 0;
  FUN_017e1290(&local_38,*(undefined4 *)(param_1 + 0x908));
  local_88 = (undefined1 *)local_38;
  FUN_00416cd0(&local_40,3,*(undefined8 *)(param_1 + 0x3b0),L"\\pmbus_temp");
  (**(code **)(*param_2 + 0x100))(param_2,local_40);
  local_2c = 0;
  local_1c[0] = 0x11;
  local_88 = local_20;
  local_80 = local_24;
  local_78 = local_28;
  local_70 = 0;
  local_68 = param_3;
  local_60 = param_4;
  cVar1 = FUN_0160cb70(local_40,*(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_1 + 0x3a8),
                       local_1c);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0xd8))(param_2,local_40);
  }
  FUN_00414560(&local_40,2);
  return;
}

