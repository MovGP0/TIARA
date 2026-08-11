/* Ghidra address: 005dac00 */
/* Ghidra symbol: FUN_005dac00 */


int FUN_005dac00(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  local_30 = 0;
  local_40 = 0;
  local_68 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_30,param_2,param_3);
  if (local_30 == 0) {
    local_24 = 0;
  }
  else {
    cVar1 = FUN_004113d0(param_4,&PTR_FUN_0047cbc0);
    local_20 = param_4;
    if (cVar1 == '\0') {
      local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    }
    local_44 = 0;
    if (local_30 != 0) {
      local_44 = *(int *)(local_30 + -4);
    }
    local_38 = local_44 / 2;
    FUN_00419260(&local_40,&DAT_00406578,1,(longlong)local_38);
    local_34 = FUN_004b6da0(local_20);
    FUN_0045bcd0(&local_58,local_30);
    local_68 = CONCAT44(local_68._4_4_,local_38);
    FUN_004c8600(local_58,0,&local_40,0);
    (**(code **)(*local_20 + 0x20))(local_20,local_40,local_38);
    FUN_004b6dc0(local_20,(longlong)local_34);
    if (param_4 != local_20) {
      FUN_004b8ba0(param_4,local_20,(longlong)local_38);
    }
    local_24 = (**(code **)*local_20)(local_20);
    local_24 = local_24 - local_34;
    if (param_4 != local_20) {
      FUN_00410f20(local_20);
    }
  }
  FUN_00419430(&local_58,&DAT_00406578);
  FUN_00419430(&local_40,&DAT_00406578);
  FUN_00414480(&local_30);
  return local_24;
}

