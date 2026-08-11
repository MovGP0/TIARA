/* Ghidra address: 014a0a80 */
/* Ghidra symbol: FUN_014a0a80 */


void FUN_014a0a80(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  *(longlong *)(param_1 + 0x760) = param_2;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  bVar1 = FUN_01773f90(param_2,0x400,&local_40);
  bVar11 = (local_40 & 2) != 0;
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2c0))
            (*(longlong **)(param_1 + 0x740),bVar1 | bVar11);
  if (*(char *)(param_2 + 0x62) == '\0') {
    if (bVar11) {
      uVar8 = FUN_01774900(param_2,0xffffffff,&local_30,&local_3c,1);
      local_3c = 0;
      (**(code **)(*plVar3 + 0x10))(plVar3,uVar8);
    }
    else {
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_2 + 0xb0));
    }
  }
  else {
    FUN_01768520(&local_50,*(undefined8 *)(param_2 + 0x48),0);
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_50);
  }
  if (bVar1 != 0) {
    if (!bVar11) {
      FUN_01774900(param_2,0,&local_30,&local_3c,0);
    }
    if (0 < local_3c) {
      FUN_0064cbf0(*(undefined8 *)(param_1 + 0x730),0x96);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),1);
      (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2c0))(*(longlong **)(param_1 + 0x740),1);
      uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x730) + 0x550);
      FUN_006ded30(uVar8);
      uVar4 = FUN_006def00(uVar8,0,L"preview");
      FUN_006dc990(uVar4,0);
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*plVar5 + 0x10))(plVar5,plVar3);
      if (!bVar11) {
        FUN_00414b50(&local_30,L"systemc_model.vhd");
      }
      uVar6 = FUN_006dee40(uVar8,uVar4,local_30);
      FUN_006dc990(uVar6,plVar5);
      iVar9 = 0;
      iVar10 = local_3c;
      if (-1 < local_3c + -1) {
        do {
          uVar6 = FUN_01774900(param_2,iVar9,&local_30,&local_3c,1);
          FUN_00441920(&local_58,local_30);
          FUN_00414b50(&local_30,local_58);
          uVar7 = FUN_006dee40(uVar8,uVar4,local_30);
          FUN_006dc990(uVar7,uVar6);
          iVar9 = iVar9 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      FUN_006e23c0(*(undefined8 *)(param_1 + 0x730));
    }
  }
  if (bVar11) {
    FUN_00414b50(&local_48,&LAB_014a0eac);
  }
  else {
    FUN_014a10e0(param_1,&local_48,param_2);
  }
  uVar8 = FUN_01099960(*(undefined8 *)(param_1 + 0x778),local_48);
  FUN_00c03380(*(undefined8 *)(param_1 + 0x740),uVar8);
  cVar2 = FUN_01a90ed0();
  if (cVar2 != '\0') {
    FUN_01b25310(*(undefined8 *)(param_1 + 0x740));
  }
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x4e8);
  (**(code **)(*plVar5 + 0x10))(plVar5,plVar3);
  FUN_00410f20(plVar3);
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_38,2);
  return;
}

