/* Ghidra address: 019a5170 */
/* Ghidra symbol: FUN_019a5170 */


void FUN_019a5170(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(param_2,iVar5);
      FUN_0198b6a0(param_1,uVar3);
      uVar3 = FUN_004aeac0(param_2,iVar5);
      (**(code **)(**(longlong **)(param_1 + 200) + 0x20))(*(longlong **)(param_1 + 200),uVar3);
      plVar4 = (longlong *)FUN_004aeac0(param_2,iVar5);
      cVar1 = (**(code **)(*plVar4 + 0x118))(plVar4);
      if (cVar1 != '\0') {
        uVar3 = FUN_004aeac0(param_2,iVar5);
        FUN_017ff4f0(uVar3,local_30);
        FUN_00416cd0(local_40,3,L"DeletePart(",local_30[0],&LAB_019a5348);
        (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
        FUN_0135ac90(*(undefined8 *)PTR_DAT_02001f10,local_30[0]);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_00b95360(param_1);
  }
  FUN_019ad9f0(param_1,plVar2,1);
  iVar6 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (0 < iVar6) {
    FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar2,0,1);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return;
}

