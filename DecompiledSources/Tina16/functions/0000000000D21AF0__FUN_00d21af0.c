/* Ghidra address: 00d21af0 */
/* Ghidra symbol: FUN_00d21af0 */


void FUN_00d21af0(longlong param_1,longlong *param_2,longlong *param_3,int param_4,char param_5)

{
  undefined1 *puVar1;
  undefined7 uVar2;
  bool bVar3;
  longlong *local_res18;
  int local_res20;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  code *local_30;
  longlong local_28;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_40 = auStack_68;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  uVar2 = (undefined7)((ulonglong)param_1 >> 8);
  if (param_5 == '\0') {
    if (*(byte *)(param_1 + 0x28) < 8) {
      bVar3 = ((int)CONCAT71(uVar2,1) << (*(byte *)(param_1 + 0x28) & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      local_30 = FUN_00d22a60;
      goto LAB_00d21b83;
    }
  }
  local_30 = FUN_00d222a0;
LAB_00d21b83:
  local_res18 = param_3;
  if (param_3 == (longlong *)0x0) {
    local_res18 = param_2;
  }
  local_res20 = param_4;
  puVar1 = auStack_68;
  local_28 = param_1;
  if (param_4 < 0) {
    local_res20 = (**(code **)*param_2)(param_2);
    FUN_004b6dc0(param_2,0);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_10 = 0;
  local_34 = local_res20;
  FUN_00cd7390(param_1,0,local_res20);
  local_10 = FUN_00409570(0x1000);
  local_18 = FUN_004b6da0(local_res18);
  local_14 = FUN_004b6da0(param_2);
  if (*(byte *)(param_1 + 0x28) < 8) {
    bVar3 = ((int)CONCAT71(uVar2,1) << (*(byte *)(param_1 + 0x28) & 0x1f) & 0xe0U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    while (0 < local_res20) {
      local_1c = local_res20;
      if (0x1000 < local_res20) {
        local_1c = 0x1000;
      }
      local_1c = (**(code **)(*param_2 + 0x18))(param_2,local_10,local_1c);
      if (local_1c < 1) break;
      (*local_30)(local_28,local_10,local_10,local_1c);
      local_res20 = local_res20 - local_1c;
      FUN_00cd7390(param_1,local_34 - local_res20,local_34);
    }
  }
  else {
    while (0 < local_res20) {
      FUN_004b6dc0(param_2,(longlong)local_14);
      local_1c = local_res20;
      if (0x1000 < local_res20) {
        local_1c = 0x1000;
      }
      local_1c = (**(code **)(*param_2 + 0x18))(param_2,local_10,local_1c);
      local_14 = FUN_004b6da0(param_2);
      if (local_1c < 1) break;
      (*local_30)(local_28,local_10,local_10,local_1c);
      FUN_004b6dc0(local_res18,(longlong)local_18);
      (**(code **)(*local_res18 + 0x20))(local_res18,local_10,local_1c);
      local_18 = FUN_004b6da0(local_res18);
      local_res20 = local_res20 - local_1c;
      FUN_00cd7390(param_1,local_34 - local_res20,local_34);
    }
  }
  FUN_00cd7390(param_1,0,0);
  FUN_00409620(&local_10,0);
  return;
}

