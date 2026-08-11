/* Ghidra address: 01c02290 */
/* Ghidra symbol: FUN_01c02290 */


void FUN_01c02290(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_40 = param_3;
  local_3c = param_4;
  uVar4 = FUN_01c01390(param_1,&local_40);
  uVar2 = FUN_01bff8e0(param_1,uVar4,param_3,param_4);
  uVar4 = FUN_01c019a0(param_1);
  plVar5 = (longlong *)FUN_004b23b0(uVar4,uVar2);
  FUN_01bfdfd0(plVar5,*(undefined8 *)(param_2 + 0x68));
  iVar3 = FUN_01bfee50(param_2);
  if (iVar3 == 0) {
    return;
  }
  uVar4 = FUN_01c019a0(param_1);
  uVar2 = FUN_004b1870(plVar5);
  uVar4 = FUN_01bfb960(uVar4,uVar2);
  FUN_01bfdfd0(uVar4,*(undefined8 *)(param_2 + 0x68));
  iVar3 = FUN_01bfee50();
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_01c019a0(param_1);
      uVar2 = FUN_004b1870(plVar5);
      uVar4 = FUN_01bfb960(uVar4,uVar2);
      uVar4 = FUN_01bfaa70(uVar4);
      uVar4 = FUN_004b23b0(uVar4,iVar8);
      uVar4 = FUN_004113f0(uVar4,&PTR_FUN_01bf1690);
      uVar6 = FUN_01bfee10(param_2,iVar8);
      FUN_01bfde30(uVar4,uVar6);
      FUN_01bfe240(uVar4,*(undefined4 *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0xe0) + 0x48)
                  );
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*(longlong *)plVar5[0x10] + 0x260))((longlong *)plVar5[0x10]);
  (**(code **)(*plVar5 + 0x60))(plVar5,1);
  lVar7 = FUN_01bfd980(plVar5);
  if (lVar7 == 0) {
    cVar1 = FUN_01bfaa20(plVar5);
    if (cVar1 != '\0') {
      uVar4 = FUN_01bfaa70(plVar5);
      lVar7 = FUN_01bfbe40(uVar4);
      if (0 < (int)lVar7) goto LAB_01c0241b;
    }
    uVar2 = 0;
  }
  else {
LAB_01c0241b:
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
  }
  (**(code **)(*(longlong *)plVar5[0x10] + 0x128))((longlong *)plVar5[0x10],uVar2);
  return;
}

