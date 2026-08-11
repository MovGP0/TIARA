/* Ghidra address: 00ae5ff0 */
/* Ghidra symbol: FUN_00ae5ff0 */


void FUN_00ae5ff0(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  int local_50;
  char local_49;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  char local_29;
  undefined8 local_28;
  longlong local_20;
  
  local_70 = auStack_b8;
  local_20 = FUN_00a74ba0(&DAT_00a6bb20,1);
  FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
  local_40 = *(longlong *)(param_1 + 0x48);
  if (local_40 == 0) {
    local_98 = 0;
    FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),0x88,0,0);
  }
  else {
    local_28 = 0;
    local_48 = 0;
    iVar4 = *(int *)(local_40 + 0x10);
    local_50 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_00a72910(local_40,local_50);
        if (*(char *)(lVar2 + 8) == 'P') {
          local_49 = '\x01';
          local_48 = FUN_00a72910(local_40,local_50);
          goto code_r0x00ae60c2;
        }
        local_50 = local_50 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_49 = '\0';
code_r0x00ae60c2:
    if (local_49 != '\0') {
      local_28 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_48 + 0x28),local_28);
    }
    local_98 = 0;
    FUN_00ac0980(*(undefined8 *)(param_1 + 0xe8),0x88,local_28,local_40);
    FUN_00410f20(local_28);
  }
  local_60 = *(longlong *)(param_1 + 0xe8);
  local_98 = FUN_004aeac0(local_60,*(int *)(local_60 + 0x10) + -1);
  local_38 = FUN_00a9c430(&PTR_FUN_00a865e0,1,*(undefined8 *)(param_1 + 0x68),
                          *(undefined8 *)(param_1 + 0x48));
  FUN_00a9b890(*(undefined8 *)(param_1 + 0x68),local_38,*(undefined4 *)(param_1 + 0x7c));
  uVar3 = *(undefined8 *)(local_38 + 0xa8);
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  local_68 = *(longlong *)(param_1 + 0xe8);
  local_98 = FUN_004aeac0(local_68,*(int *)(local_68 + 0x10) + -1);
  local_90 = *(undefined8 *)(param_1 + 0x70);
  local_88 = 0;
  uVar3 = FUN_00ab3440(&PTR_FUN_00a92a10,1,uVar3,0);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  local_29 = '\0';
  while (local_29 == '\0') {
    sVar1 = *(short *)(param_1 + 0x20);
    if (sVar1 == 0) {
      local_29 = '\x01';
    }
    else if (sVar1 == 0xd) {
      FUN_00ae5f20(auStack_b8);
      FUN_00ad1170(param_1);
    }
    else {
      FUN_00a74c70(local_20,sVar1,*(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28));
      if (200 < *(int *)(local_20 + 0x14)) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 200))
                  (*(longlong **)(param_1 + 0x60),local_20);
        FUN_00a74cd0(local_20);
      }
      FUN_00ad1170(param_1);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x60) + 200))(*(longlong **)(param_1 + 0x60),local_20);
  FUN_00a9b900(*(undefined8 *)(param_1 + 0x68),param_1 + 0x60,*(undefined4 *)(param_1 + 0x7c));
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_00ac0ab0(*(undefined8 *)(param_1 + 0xe8),0x88);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(local_38 + 0x28);
  FUN_00410f20(local_20);
  return;
}

