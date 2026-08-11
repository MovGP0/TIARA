/* Ghidra address: 018210c0 */
/* Ghidra symbol: FUN_018210c0 */


void FUN_018210c0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_60 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_58 = 0x1ffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    FUN_0040f800(&local_58,&DAT_0182152c,0x20);
  }
  while (*(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x88)) {
    cVar2 = FUN_0043e100(*(undefined2 *)
                          (*(longlong *)(param_1 + 0xa8) + -2 +
                          (longlong)*(int *)(param_1 + 0x84) * 2),&local_58);
    if (cVar2 == '\0') break;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  }
  if (((*(int *)(param_1 + 0x84) <= *(int *)(param_1 + 0x88)) &&
      (*(longlong *)(param_1 + 0x90) != 0)) &&
     (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)*(int *)(param_1 + 0x84) * 2) ==
      **(short **)(param_1 + 0x90))) {
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    FUN_01821020(param_1);
    FUN_018210c0(param_1);
  }
  iVar5 = *(int *)(param_1 + 0x84);
  if (iVar5 < *(int *)(param_1 + 0x88)) {
    if (*(longlong *)(param_1 + 0x40) == 0) {
      FUN_00414b50(local_30,&LAB_01821558);
    }
    else {
      uVar4 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x40));
      FUN_00416dc0(local_30,*(undefined8 *)(param_1 + 0xa8),iVar5,uVar4);
    }
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_00414b50(&local_38,&LAB_01821558);
    }
    else {
      uVar4 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x48));
      FUN_00416dc0(&local_38,*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x84),uVar4);
    }
    iVar5 = FUN_00416db0(local_30[0],*(undefined8 *)(param_1 + 0x40));
    if (iVar5 != 0) {
      iVar5 = FUN_00416db0(local_38,*(undefined8 *)(param_1 + 0x48));
      if (iVar5 != 0) {
        bVar1 = false;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          uVar4 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x18));
          FUN_00416dc0(local_30,*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x84),
                       uVar4);
          iVar5 = FUN_00416db0(local_30[0],*(undefined8 *)(param_1 + 0x18));
          if (iVar5 == 0) {
            bVar1 = true;
            FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 0x20));
          }
        }
        if ((!bVar1) && (*(longlong *)(param_1 + 0x28) != 0)) {
          uVar4 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x30));
          FUN_00416dc0(local_30,*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x84),
                       uVar4);
          iVar5 = FUN_00416db0(local_30[0],*(undefined8 *)(param_1 + 0x30));
          if (iVar5 == 0) {
            bVar1 = true;
            FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 0x38));
          }
        }
        if (bVar1) {
          iVar5 = FUN_00414cb0(local_38);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar5;
          while (iVar5 = *(int *)(param_1 + 0x84), iVar5 <= *(int *)(param_1 + 0x88)) {
            uVar4 = FUN_00414cb0(local_38);
            FUN_00416dc0(&local_60,*(undefined8 *)(param_1 + 0xa8),iVar5,uVar4);
            iVar5 = FUN_00416db0(local_60,local_38);
            if (iVar5 == 0) break;
            *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
          }
          iVar5 = FUN_00414cb0(local_38);
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar5;
          FUN_018210c0(param_1);
        }
        goto LAB_018214a7;
      }
    }
    iVar5 = *(int *)(param_1 + 0x84) + -1;
    if (((iVar5 < 1) || (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)iVar5 * 2) == 10)
        ) || (*(char *)(param_1 + 0x98) != '\0')) {
      bVar3 = 0;
    }
    else {
      bVar3 = 1;
    }
    while( true ) {
      iVar5 = *(int *)(param_1 + 0x84);
      if (((*(int *)(param_1 + 0x88) < iVar5) ||
          (*(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)iVar5 * 2) == 10)) ||
         ((bool)(bVar3 & *(short *)(*(longlong *)(param_1 + 0xa8) + -2 + (longlong)iVar5 * 2) == 0xd
                ))) break;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
    FUN_018210c0(param_1);
  }
LAB_018214a7:
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x84);
  FUN_00414480(&local_60);
  FUN_00414560(&local_38,2);
  return;
}

