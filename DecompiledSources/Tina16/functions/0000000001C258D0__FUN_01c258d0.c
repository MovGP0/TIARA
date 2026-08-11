/* Ghidra address: 01c258d0 */
/* Ghidra symbol: FUN_01c258d0 */


void FUN_01c258d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [10];
  
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_60 = 0;
  iVar1 = FUN_01c232b0();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_01c233d0(param_1,iVar5);
      if ((*(longlong *)(lVar3 + 8) == 0) &&
         (lVar3 = FUN_01c233d0(param_1,iVar5), lVar3 != *(longlong *)(param_1 + 0x540))) {
        local_60 = local_60 + 1;
      }
      lVar3 = FUN_01c233d0(param_1,iVar5);
      if (*(longlong *)(lVar3 + 8) != 0) {
        lVar3 = FUN_01c233d0(param_1,iVar5);
        local_48[(ulonglong)*(byte *)(*(longlong *)(lVar3 + 8) + 0x36) + 4] =
             local_48[(ulonglong)*(byte *)(*(longlong *)(lVar3 + 8) + 0x36) + 4] + 1;
        lVar3 = FUN_01c233d0(param_1,iVar5);
        iVar6 = local_48[*(byte *)(*(longlong *)(lVar3 + 8) + 0x36)];
        uVar4 = FUN_01c233d0(param_1,iVar5);
        iVar2 = FUN_01c23490(param_1,uVar4);
        if (iVar6 <= iVar2 + 4) {
          iVar6 = iVar2 + 4;
        }
        lVar3 = FUN_01c233d0(param_1,iVar5);
        local_48[*(byte *)(*(longlong *)(lVar3 + 8) + 0x36)] = iVar6;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01c25630(auStack_98,&local_58);
  *(undefined8 *)(param_1 + 0x4ec) = local_58;
  *(undefined8 *)(param_1 + 0x4f4) = uStack_50;
  local_5c = local_48[4];
  if (local_48[4] == 0) {
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4f0);
  }
  else {
    *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f0) + 0x18;
    if (0 < local_48[7]) {
      *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + local_48[3];
    }
    if (0 < local_48[5]) {
      *(int *)(param_1 + 0x4f4) = *(int *)(param_1 + 0x4f4) - local_48[1];
    }
  }
  FUN_01c25630(auStack_98,&local_58);
  iVar1 = local_48[6];
  *(undefined8 *)(param_1 + 0x50c) = local_58;
  *(undefined8 *)(param_1 + 0x514) = uStack_50;
  if (local_48[6] == 0) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x518);
  }
  else {
    *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x518) + -0x18;
    if (0 < local_48[7]) {
      *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + local_48[3];
    }
    if (0 < local_48[5]) {
      *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) - local_48[1];
    }
  }
  FUN_01c25630(auStack_98,&local_58);
  *(undefined8 *)(param_1 + 0x51c) = local_58;
  *(undefined8 *)(param_1 + 0x524) = uStack_50;
  if (local_48[7] == 0) {
    *(undefined4 *)(param_1 + 0x524) = *(undefined4 *)(param_1 + 0x51c);
  }
  else {
    *(int *)(param_1 + 0x524) = *(int *)(param_1 + 0x51c) + local_48[3];
    if (0 < local_5c) {
      *(int *)(param_1 + 0x520) = *(int *)(param_1 + 0x520) + 0x18;
    }
    if (0 < iVar1) {
      *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + -0x18;
    }
  }
  FUN_01c25630(auStack_98,&local_58);
  *(undefined8 *)(param_1 + 0x4fc) = local_58;
  *(undefined8 *)(param_1 + 0x504) = uStack_50;
  if (local_48[5] == 0) {
    *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x504);
  }
  else {
    *(int *)(param_1 + 0x4fc) = *(int *)(param_1 + 0x504) - local_48[1];
    if (0 < local_5c) {
      *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + 0x18;
    }
    if (0 < iVar1) {
      *(int *)(param_1 + 0x508) = *(int *)(param_1 + 0x508) + -0x18;
    }
  }
  FUN_01c25680(auStack_98,&local_58);
  *(undefined8 *)(param_1 + 0x4dc) = local_58;
  *(undefined8 *)(param_1 + 0x4e4) = uStack_50;
  if ((local_60 == 0) && (*(char *)(param_1 + 0x5c9) == '\0')) {
    iVar1 = 0;
  }
  else {
    uVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    iVar1 = FUN_005fdfd0(uVar4,*(undefined8 *)(param_1 + 0x5c0));
    iVar1 = iVar1 + 4;
  }
  if (*(char *)(param_1 + 0x4d9) == '\0') {
    iVar1 = *(int *)(param_1 + 0x4e8) - *(int *)(param_1 + 0x4e0);
    *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + iVar1;
    *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f8) + iVar1;
    *(int *)(param_1 + 0x520) = *(int *)(param_1 + 0x520) + iVar1;
    *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + iVar1;
  }
  else if (*(char *)(param_1 + 0x4d9) == '\x02') {
    iVar1 = *(int *)(param_1 + 0x4e8) - (*(int *)(param_1 + 0x4e0) - iVar1);
    *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x510) - iVar1;
    *(int *)(param_1 + 0x518) = *(int *)(param_1 + 0x518) - iVar1;
    *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) - iVar1;
    *(int *)(param_1 + 0x508) = *(int *)(param_1 + 0x508) - iVar1;
  }
  local_78 = *(undefined4 *)(param_1 + 0x510);
  FUN_004238d0(&local_58,*(undefined4 *)(param_1 + 0x524),*(undefined4 *)(param_1 + 0x4f8),
               *(undefined4 *)(param_1 + 0x4fc));
  *(undefined8 *)(param_1 + 0x52c) = local_58;
  *(undefined8 *)(param_1 + 0x534) = uStack_50;
  return;
}

