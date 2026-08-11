/* Ghidra address: 00f4b360 */
/* Ghidra symbol: FUN_00f4b360 */


void FUN_00f4b360(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x6c0);
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468) +
                  0x10);
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      iVar4 = iVar3 + -1;
      uVar2 = FUN_004aeac0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468),iVar4);
      FUN_00f4af00(local_40,uVar2,*(undefined8 *)PTR_DAT_02001f18);
      FUN_0084e3e0(uVar1,0,iVar4,local_40[0]);
      FUN_00b8fec0(&local_48,*(undefined8 *)(param_1 + 0x6c8 + (longlong)iVar3 * 8),
                   *PTR_DAT_02005310,0,0x3cd203af9ee75616);
      FUN_0084e3e0(uVar1,1,iVar4,local_48);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_30);
  return;
}

