/* Ghidra address: 016446f0 */
/* Ghidra symbol: FUN_016446f0 */


void FUN_016446f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x139d0) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x139d0);
      uVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar7);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x139d0);
      (**(code **)(*plVar6 + 0x18))(plVar6,local_40,iVar7);
      plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b4b10(plVar6,local_40[0]);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_48,0);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_50,1);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_58,2);
      iVar3 = FUN_0043fc00(local_50);
      if (iVar3 < 0) {
        FUN_01613110(L"THDLDesign.ProcessADDAList");
      }
      FUN_00410f20(plVar6);
      uVar4 = FUN_01643ae0(param_1,local_58,local_48,local_50);
      FUN_016271b0(uVar5,0,uVar4,*(undefined8 *)(param_1 + 0x78));
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))(*(longlong **)(param_1 + 0x80),uVar5);
      piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 0x74);
      *piVar1 = *piVar1 + 1;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_58,4);
  return;
}

