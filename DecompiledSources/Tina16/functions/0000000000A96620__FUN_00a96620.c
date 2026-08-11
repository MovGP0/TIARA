/* Ghidra address: 00a96620 */
/* Ghidra symbol: FUN_00a96620 */


void FUN_00a96620(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 longlong *param_5)

{
  char cVar1;
  undefined1 auStack_78 [32];
  int local_58;
  int local_50;
  undefined4 local_48;
  undefined1 *local_30;
  int local_20;
  int local_1c;
  
  local_30 = auStack_78;
  if ((param_5 == *(longlong **)PTR_DAT_02003010) || (param_5 == *(longlong **)PTR_DAT_02001ae8)) {
    local_1c = (**(code **)(*param_5 + 0x18))(param_5);
    local_20 = (**(code **)(*param_5 + 0x10))(param_5);
  }
  else {
    if (param_5 == (longlong *)0x0) {
      return;
    }
    local_1c = (int)param_1[0x37];
    local_20 = *(int *)((longlong)param_1 + 0x1b4);
    local_30 = auStack_78;
  }
  if ((0 < local_1c) && (0 < local_20)) {
    cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar1 == '\0') {
      local_58 = local_1c;
      local_50 = local_20;
      (**(code **)(*param_5 + 0x58))(param_5,param_2,param_3,param_4);
    }
    else {
      local_58 = local_1c;
      local_50 = local_20;
      local_48 = 0xffffff;
      (**(code **)(*param_5 + 0x60))(param_5,param_2,param_3,param_4);
    }
  }
  return;
}

