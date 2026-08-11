/* Ghidra address: 00bbc490 */
/* Ghidra symbol: FUN_00bbc490 */


undefined8 FUN_00bbc490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  if (DAT_02019ad8 == 0) {
    DAT_02019ad8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  }
  iVar4 = *(int *)(DAT_02019ad8 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(DAT_02019ad8,iVar3);
      FUN_0043e130(local_30,param_3);
      iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),local_30[0]);
      if (iVar1 == 0) {
        lVar2 = FUN_004aeac0(DAT_02019ad8,iVar3);
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        local_40 = *(undefined8 *)(lVar2 + 0x18);
        goto LAB_00bbc5b2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_40 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(local_40,param_2,param_3);
  lVar2 = FUN_00410e60(&DAT_00bbc1f0,1);
  *(undefined4 *)(lVar2 + 8) = 1;
  FUN_0043e130(&local_38,param_3);
  FUN_00414ad0(lVar2 + 0x10,local_38);
  *(undefined8 *)(lVar2 + 0x18) = local_40;
  FUN_004ae7e0(DAT_02019ad8,lVar2);
LAB_00bbc5b2:
  FUN_00414560(&local_38,2);
  return local_40;
}

