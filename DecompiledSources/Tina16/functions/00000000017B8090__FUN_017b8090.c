/* Ghidra address: 017b8090 */
/* Ghidra symbol: FUN_017b8090 */


void FUN_017b8090(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x80))(*(longlong **)(param_1 + 0x48),0);
  plVar4 = (longlong *)FUN_017b7ed0(param_1,*(undefined8 *)(param_1 + 0x48),param_2);
  *(longlong **)(param_1 + 0x48) = plVar4;
  uVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48));
  plVar4 = (longlong *)FUN_007d5160(&PTR_FUN_006441f8,1,uVar1,uVar2);
  local_40 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_40,6);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x90))();
  iVar9 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_007d5cb0(*(undefined8 *)(param_1 + 0x68),iVar9,local_40);
      local_40 = FUN_017b7ed0(param_1,local_40,param_2);
      FUN_007d5ad0(plVar4,local_40,0x1fffffff);
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_40);
  plVar5 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x60))(*(longlong **)(param_1 + 0x48));
  iVar9 = (**(code **)(*plVar4 + 0x90))(plVar4);
  (**(code **)(*plVar5 + 0x88))(plVar5,iVar3 * iVar9);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x48))(*(longlong **)(param_1 + 0x48));
  (**(code **)(*plVar5 + 0x70))(plVar5,uVar1);
  FUN_0060bbf0(plVar5,6);
  lVar6 = FUN_00609e10(plVar5);
  plVar7 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x40));
  uVar1 = (**(code **)(*plVar7 + 0x30))(plVar7,0,0);
  FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),uVar1);
  plVar7 = (longlong *)FUN_00609e10(plVar5);
  uVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
  uVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
  FUN_00498370(local_38,0,0,uVar1,uVar2);
  (**(code **)(*plVar7 + 0xa8))(plVar7,local_38);
  iVar9 = 0;
  iVar3 = (**(code **)(*plVar4 + 0x90))();
  iVar10 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar8 = FUN_00609e10(plVar5);
      FUN_007d6c70(plVar4,uVar8,iVar9,0,iVar10,1);
      iVar9 = iVar9 + *(int *)((longlong)plVar4 + 0x94);
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
  *(longlong **)(param_1 + 0x68) = plVar4;
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  *(longlong **)(param_1 + 0x40) = plVar5;
  return;
}

