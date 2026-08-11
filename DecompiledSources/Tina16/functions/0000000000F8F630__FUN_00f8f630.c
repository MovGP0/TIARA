/* Ghidra address: 00f8f630 */
/* Ghidra symbol: FUN_00f8f630 */


void FUN_00f8f630(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar2,1);
  iVar1 = _get_mcu_register_count();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = _get_mcu_register_name(*(undefined8 *)(param_1 + 0x60),iVar4);
      FUN_00442ae0(local_30,uVar3);
      FUN_00416880(local_40,local_30[0]);
      (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x3464) == 2) {
    (**(code **)(*plVar2 + 0x78))(plVar2,L"PIN0");
    (**(code **)(*plVar2 + 0x78))(plVar2,L"PIN1");
    (**(code **)(*plVar2 + 0x78))(plVar2,L"PIN2");
    (**(code **)(*plVar2 + 0x78))(plVar2,L"PIN3");
  }
  uVar3 = FUN_007fc180(&PTR_FUN_00f85688,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02001858 = uVar3;
  *(longlong **)(*(longlong *)PTR_DAT_02001858 + 0x708) = plVar2;
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001858 + 0x710) + 0x10))
            (*(longlong **)(*(longlong *)PTR_DAT_02001858 + 0x710),*(undefined8 *)(param_1 + 0x3448)
            );
  iVar1 = (**(code **)(**(longlong **)PTR_DAT_02001858 + 0x2d0))(*(longlong **)PTR_DAT_02001858);
  if (iVar1 == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x3448) + 0x90))(*(longlong **)(param_1 + 0x3448));
    (**(code **)(**(longlong **)(param_1 + 0x3448) + 0x10))
              (*(longlong **)(param_1 + 0x3448),
               *(undefined8 *)(*(longlong *)PTR_DAT_02001858 + 0x710));
    FUN_00f8a700(param_1,0);
  }
  FUN_00410f20(*(undefined8 *)PTR_DAT_02001858);
  FUN_00410f20(plVar2);
  FUN_00414480(local_40);
  FUN_004144d0(local_30);
  return;
}

