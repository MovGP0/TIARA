/* Ghidra address: 00f8e9a0 */
/* Ghidra symbol: FUN_00f8e9a0 */


void FUN_00f8e9a0(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined1 local_2c [4];
  
  local_60 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_38 = 0;
  uVar5 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x3518) = uVar5;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_58,iVar8);
      FUN_0043e1a0(local_50,local_58);
      FUN_00414ad0(param_1 + 0x3440,local_50[0]);
      lVar6 = FUN_00f8c610(param_1,local_40);
      lVar7 = FUN_00f8a420(&DAT_00f878f0,1);
      *(longlong *)(lVar7 + 8) = lVar6;
      FUN_00414ad0(lVar7 + 0x10,*(undefined8 *)(param_1 + 0x3440));
      uVar4 = FUN_00f8a6f0(param_1,*(undefined4 *)(lVar6 + 0x100));
      *(undefined4 *)(lVar7 + 0x18) = uVar4;
      FUN_00f8b940(param_1,&local_60,*(undefined8 *)(lVar7 + 0x10),&local_38);
      FUN_00414ad0(lVar7 + 0x40,local_60);
      uVar2 = FUN_015fbbb0(*(undefined8 *)(lVar7 + 0x40),local_2c);
      *(undefined1 *)(lVar7 + 0x60) = uVar2;
      uVar4 = FUN_00f8ed10(param_1,*(undefined8 *)(param_1 + 0x3440));
      *(undefined4 *)(lVar7 + 0x1c) = uVar4;
      uVar5 = FUN_00442620(param_1 + 0x2be0,*(undefined8 *)(lVar7 + 0x40));
      _CreateSimulatorObject(*(undefined8 *)(param_1 + 0x60),uVar4,uVar5);
      FUN_015fbde0(*(undefined8 *)(param_1 + 0x60),lVar7 + 0x20,lVar7 + 0x24,lVar7 + 0x34,
                   lVar7 + 0x38,*(undefined8 *)(lVar7 + 0x40),*(undefined4 *)(lVar7 + 0x1c));
      *(int *)(lVar7 + 0x28) = (*(int *)(lVar7 + 0x24) - *(int *)(lVar7 + 0x20)) + 1;
      _FreeSimulatorObject(*(undefined8 *)(param_1 + 0x60));
      *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar7 + 0x20);
      if (*(uint *)(lVar7 + 0x28) < 0x65) {
        *(uint *)(lVar7 + 0x2c) = *(uint *)(lVar7 + 0x28);
      }
      else if (*(int *)(lVar7 + 0x1c) == 0x800) {
        *(undefined4 *)(lVar7 + 0x2c) = 0x40;
      }
      else {
        *(undefined4 *)(lVar7 + 0x2c) = 0x14;
      }
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3518),lVar7);
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x345c) = 0;
  FUN_00f8c990(param_1,0);
  FUN_00414560(&local_60,3);
  FUN_00414480(&local_38);
  return;
}

