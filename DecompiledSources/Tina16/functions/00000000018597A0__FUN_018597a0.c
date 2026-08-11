/* Ghidra address: 018597a0 */
/* Ghidra symbol: FUN_018597a0 */


void FUN_018597a0(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 *local_38;
  undefined1 *local_30;
  
  uVar6 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *param_2 = uVar6;
  FUN_0060bbf0(*param_2,7);
  uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*(longlong *)*param_2 + 0x88))((longlong *)*param_2,uVar3);
  uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,uVar3);
  iVar4 = (**(code **)(*param_1 + 0x48))();
  iVar8 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar7 = FUN_00a3c1b0(param_1,iVar8);
      local_38 = (undefined1 *)FUN_0060a050(*param_2,iVar8);
      local_30 = (undefined1 *)FUN_00a3c240(param_1,iVar8);
      iVar5 = (**(code **)(*param_1 + 0x60))();
      iVar9 = 0;
      if (-1 < iVar5 + -1) {
        do {
          uVar1 = *(undefined1 *)(lVar7 + iVar9);
          uVar2 = thunk_FUN_03f3ed25(*local_30,uVar1,0xff);
          *local_38 = uVar2;
          uVar2 = thunk_FUN_03f3ed25(local_30[1],uVar1,0xff);
          local_38[1] = uVar2;
          uVar2 = thunk_FUN_03f3ed25(local_30[2],uVar1,0xff);
          local_38[2] = uVar2;
          local_30 = local_30 + 3;
          local_38[3] = uVar1;
          local_38 = local_38 + 4;
          iVar9 = iVar9 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

