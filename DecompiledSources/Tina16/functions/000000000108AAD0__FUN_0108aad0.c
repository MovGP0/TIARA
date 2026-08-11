/* Ghidra address: 0108aad0 */
/* Ghidra symbol: FUN_0108aad0 */


void FUN_0108aad0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar3,1);
  iVar2 = _get_mcu_register_count();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = _get_mcu_register_name(*(undefined8 *)(param_1 + 0xb20),iVar5);
      FUN_00442ae0(local_30,uVar4);
      FUN_00416880(local_40,local_30[0]);
      (**(code **)(*plVar3 + 0x78))(plVar3,local_40[0]);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(int *)(param_1 + 0xad8) == 2) {
    (**(code **)(*plVar3 + 0x78))(plVar3,L"PIN0");
    (**(code **)(*plVar3 + 0x78))(plVar3,L"PIN1");
    (**(code **)(*plVar3 + 0x78))(plVar3,L"PIN2");
    (**(code **)(*plVar3 + 0x78))(plVar3,L"PIN3");
  }
  uVar4 = FUN_007fc180(&PTR_FUN_00f85688,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001858 = uVar4;
  *(longlong **)(*(longlong *)PTR_DAT_02001858 + 0x708) = plVar3;
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001858 + 0x710) + 0x10))
            (*(longlong **)(*(longlong *)PTR_DAT_02001858 + 0x710),
             *(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0xe8));
  iVar2 = (**(code **)(**(longlong **)PTR_DAT_02001858 + 0x2d0))(*(longlong **)PTR_DAT_02001858);
  if (iVar2 == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xad0) + 0xe8);
    (**(code **)(*plVar1 + 0x90))(plVar1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xad0) + 0xe8);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)PTR_DAT_02001858 + 0x710));
    FUN_010892f0(param_1);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001858);
  FUN_00410f20(plVar3);
  FUN_00414480(local_40);
  FUN_004144d0(local_30);
  return;
}

