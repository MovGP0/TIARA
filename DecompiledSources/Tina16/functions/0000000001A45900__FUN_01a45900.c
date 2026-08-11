/* Ghidra address: 01a45900 */
/* Ghidra symbol: FUN_01a45900 */


undefined1 FUN_01a45900(longlong param_1)

{
  longlong *plVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_49 = 1;
  FUN_00414b50(local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x848));
  FUN_01a45520(local_40,local_20[0]);
  FUN_00414b50(local_20,local_40[0]);
  iVar3 = FUN_00416db0(local_20[0],&DAT_01a45bfc);
  if (iVar3 == 0) {
    local_49 = 0;
  }
  else {
    iVar3 = FUN_004170c0(&DAT_01a45c0c,local_20[0],1);
    if (iVar3 < 1) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x2b60) = 0xffffffff;
      local_49 = 0;
    }
    else {
      FUN_00416dc0(&local_28,local_20[0],1,iVar3 + -1);
      FUN_00416dc0(&local_30,local_20[0],iVar3 + 2,0xff);
      FUN_01a3c820(&local_48,local_28);
      FUN_00414b50(&local_28,local_48);
      uVar4 = FUN_0043fc00(local_30);
      uVar5 = FUN_0040c840((double)(int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)));
      *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x2b60) = uVar5;
      lVar7 = FUN_01a492a0(*(undefined8 *)(param_1 + 0x1d0),local_28);
      *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x2b00) = lVar7;
      if (lVar7 == 0) {
        uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Switch handling error");
        FUN_004134c0(uVar8);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1d0) + 0x2b00);
      sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (sVar2 == 0x7d) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0x2b5c) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x1d0) + 0x2b43) = 1;
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x1d0) + 0x2b60) < 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x2b00) = 0;
    }
    FUN_01a49490(*(undefined8 *)(param_1 + 0x1d0),*(longlong *)(param_1 + 0x1d0) + 0x2b60,
                 *(longlong *)(param_1 + 0x1d0) + 0x2b64);
    if (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + 0x2b00) != 0) {
      iVar6 = FUN_01a453f0(*(undefined8 *)(param_1 + 0x1d0));
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x1d0) + 0x2b60);
      if (iVar6 != iVar3) {
        FUN_01a45430(*(undefined8 *)(param_1 + 0x1d0),iVar3);
      }
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_30,3);
  return local_49;
}

