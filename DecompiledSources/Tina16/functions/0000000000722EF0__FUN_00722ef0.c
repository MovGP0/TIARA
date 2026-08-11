/* Ghidra address: 00722ef0 */
/* Ghidra symbol: FUN_00722ef0 */


void FUN_00722ef0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  FUN_00414b50(&local_30,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xe0));
  iVar2 = 1;
  iVar1 = FUN_0044f900(&DAT_007230f8,local_30);
  while (iVar1 != 0) {
    lVar4 = FUN_00726e20(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xc0));
    FUN_00416dc0(lVar4 + 0x18,local_30,iVar2,iVar1 - iVar2);
    if (PTR_DAT_02005bd0[0xc] == '\0') {
      iVar2 = FUN_004170c0(&DAT_007230f8,local_30,iVar1 + 1);
    }
    else {
      FUN_00416dc0(local_40,local_30,iVar1 + 1,0x7fffffff);
      iVar3 = FUN_0044f900(&DAT_007230f8,local_40[0]);
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = iVar3 + iVar1 + 1 + -1;
      }
    }
    if (iVar2 == 0) {
      iVar2 = 0;
      if (local_30 != 0) {
        iVar2 = *(int *)(local_30 + -4);
      }
      iVar2 = iVar2 + 1;
    }
    FUN_00416dc0(lVar4 + 0x28,local_30,iVar1 + 1,(iVar2 - iVar1) + -1);
    iVar2 = iVar2 + 1;
    if (PTR_DAT_02005bd0[0xc] == '\0') {
      iVar1 = FUN_004170c0(&DAT_007230f8,local_30,iVar2);
    }
    else {
      FUN_00416dc0(&local_48,local_30,iVar2,0x7fffffff);
      iVar1 = FUN_0044f900(&DAT_007230f8,local_48);
      if (iVar1 == 0) {
        iVar3 = 0;
        if (local_30 != 0) {
          iVar3 = *(int *)(local_30 + -4);
        }
        iVar1 = 0;
        if (iVar2 < iVar3) {
          iVar1 = 0;
          if (local_30 != 0) {
            iVar1 = *(int *)(local_30 + -4);
          }
          iVar1 = iVar1 + 1;
        }
      }
      else {
        iVar1 = iVar1 + iVar2 + -1;
      }
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return;
}

