/* Ghidra address: 00ad4a50 */
/* Ghidra symbol: FUN_00ad4a50 */


void FUN_00ad4a50(longlong param_1)

{
  short sVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_00414480(param_1 + 0x38);
  FUN_00a74cd0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x28));
  sVar1 = *(short *)(*(longlong *)(param_1 + 0x70) + 0x20);
  if (sVar1 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x44) = 4;
  }
  else if (sVar1 == 0xd) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x44) = 3;
    FUN_00ad1170(*(undefined8 *)(param_1 + 0x70));
  }
  else if (sVar1 == 0x26) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe8);
    lVar3 = FUN_004aeac0(lVar3,*(int *)(lVar3 + 0x10) + -1);
    FUN_00ae7160(*(undefined8 *)(param_1 + 0x70),local_30,*(undefined4 *)(lVar3 + 0x70));
    lVar3 = local_30[0];
    iVar5 = 0;
    if (local_30[0] != 0) {
      iVar5 = *(int *)(local_30[0] + -4);
    }
    if (0 < iVar5) {
      iVar6 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x38) + -4);
      }
      FUN_004169f0(param_1 + 0x38,iVar6 + iVar5);
      uVar4 = FUN_00416740(lVar3);
      lVar3 = FUN_00414de0(param_1 + 0x38);
      FUN_00409a70(uVar4,lVar3 + -2 + (longlong)(iVar6 + 1) * 2,(longlong)(iVar5 * 2));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x44) = 1;
  }
  else if (sVar1 == 0x3c) {
    FUN_00ad4810(auStack_58);
  }
  else {
    cVar2 = FUN_00ad4960(auStack_58);
    if (cVar2 == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x44) = 0;
      FUN_00416780(param_1 + 0x38,*(undefined2 *)(*(longlong *)(param_1 + 0x70) + 0x20));
      FUN_00ad1170(*(undefined8 *)(param_1 + 0x70));
    }
    else {
      *(undefined1 *)(*(longlong *)(param_1 + 0x70) + 0x44) = 2;
    }
  }
  FUN_00414480(local_30);
  return;
}

