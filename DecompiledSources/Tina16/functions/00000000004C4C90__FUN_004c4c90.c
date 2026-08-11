/* Ghidra address: 004c4c90 */
/* Ghidra symbol: FUN_004c4c90 */


void FUN_004c4c90(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  code *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  bool local_85;
  uint local_84;
  longlong local_80;
  int local_74;
  longlong local_70;
  int local_64;
  longlong local_60;
  byte local_51;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_a0 = auStack_108;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  FUN_00410ae0(*param_2,&local_a8);
  local_60 = local_a8;
  local_64 = 0;
  if (local_a8 != 0) {
    local_64 = *(int *)(local_a8 + -4);
  }
  local_70 = param_2[2];
  local_74 = 0;
  if (local_70 != 0) {
    local_74 = *(int *)(local_70 + -4);
  }
  if (*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x20) <
      (longlong)(local_64 + local_74 + 9)) {
    FUN_004c3a60(param_1);
  }
  local_48 = FUN_004c3810(param_1);
  local_51 = 0;
  if ((*(ushort *)((longlong)param_2 + 0x34) & 0x200) == 0) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      local_51 = 1;
    }
  }
  else if (((*(longlong *)(param_1 + 0x40) == 0) ||
           ((*(ushort *)((longlong)param_2 + 0x34) & 0x20) == 0)) ||
          (*(longlong *)(param_1 + 0x60) == 0)) {
    local_51 = 4;
  }
  else {
    local_51 = 1;
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x68) < *(int *)(lVar4 + 0x10))) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      local_85 = true;
    }
    else {
      local_84 = *(uint *)(param_1 + 0x68);
      local_80 = lVar4;
      if (*(uint *)(lVar4 + 0x10) <= local_84) {
        FUN_00594f90();
      }
      local_85 = *(longlong *)(*(longlong *)(local_80 + 8) + (longlong)(int)local_84 * 8) !=
                 *(longlong *)(param_1 + 0x40);
    }
    if (local_85 != false) {
      local_51 = local_51 | 2;
    }
  }
  FUN_004c5890(param_1,local_51,*(undefined4 *)(param_1 + 0x6c));
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_00410ae0(*param_2,&local_c8);
    FUN_004c8440(param_1,local_c8);
  }
  else {
    local_90 = *param_2;
    FUN_00411290(local_90,&local_b8);
    FUN_00410ae0(*param_2,&local_c0);
    local_e8 = local_c0;
    FUN_00416cd0(&local_b0,3,local_b8,&DAT_004c534c);
    FUN_004c8440(param_1,local_b0);
  }
  FUN_004c8440(param_1,param_2[2]);
  local_50 = FUN_004c3810(param_1);
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (*(int *)(param_1 + 0x68) < *(int *)(*(longlong *)(param_1 + 0x60) + 0x10))) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    }
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  FUN_004c58f0(param_1,param_2);
  FUN_004c8510(param_1,0);
  local_20 = *(undefined8 *)(param_1 + 0x60);
  local_28 = (longlong)*(int *)(param_1 + 0x68);
  local_30 = (longlong)*(int *)(param_1 + 0x6c);
  local_38 = *(undefined8 *)(param_1 + 0x30);
  local_40 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(char *)(param_1 + 0x48) == '\0') {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      cVar1 = FUN_004113d0(*(longlong *)(param_1 + 0x40),&PTR_FUN_00486f38);
      if (cVar1 != '\0') {
        lVar4 = *(longlong *)(param_1 + 0x40);
        cVar1 = FUN_004113d0(lVar4,&PTR_FUN_00486f38);
        if ((cVar1 != '\0') && ((*(ushort *)(lVar4 + 0x34) & 0x200) != 0)) {
          *(longlong *)(param_1 + 0x50) = lVar4;
        }
        uVar2 = FUN_004e0f60(&PTR_FUN_0048f0b8,1);
        *(undefined8 *)(param_1 + 0x60) = uVar2;
        local_d8 = FUN_004c3700;
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        local_d0 = param_1;
        pcVar3 = (code *)FUN_00411550(uVar2,0xfffd);
        (*pcVar3)(uVar2,&local_d8,*(undefined8 *)(param_1 + 0x50));
      }
    }
    if ((*(ushort *)((longlong)param_2 + 0x34) & 0x200) != 0) {
      *(undefined8 **)(param_1 + 0x30) = param_2;
    }
    local_d8 = FUN_004c4a40;
    local_d0 = param_1;
    pcVar3 = (code *)FUN_00411550(param_2,0xfffd);
    (*pcVar3)(param_2,&local_d8,*(undefined8 *)(param_1 + 0x30));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x60) = local_20;
  *(undefined4 *)(param_1 + 0x68) = (undefined4)local_28;
  *(undefined4 *)(param_1 + 0x6c) = (undefined4)local_30;
  *(undefined8 *)(param_1 + 0x30) = local_38;
  *(undefined8 *)(param_1 + 0x50) = local_40;
  FUN_004c8510(param_1,0);
  if ((param_2 != *(undefined8 **)(param_1 + 0x30)) && (local_51 == 1)) {
    lVar4 = FUN_004c3810(param_1);
    if (lVar4 == local_50 + 2) {
      FUN_004c38b0(param_1,local_48);
    }
  }
  FUN_00414560(&local_c8,5);
  return;
}

