/* Ghidra address: 00819570 */
/* Ghidra symbol: FUN_00819570 */


void FUN_00819570(longlong param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar9;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined1 local_38 [24];
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  bVar2 = true;
  iVar1 = *param_2;
  if (iVar1 == 0x14) {
    plVar8 = (longlong *)FUN_00781840();
    cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8);
    if (cVar3 != '\0') {
      local_44[0] = 0x1f;
      local_40 = 0;
      uVar4 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x10));
      uVar5 = FUN_0064d120(*(undefined8 *)(param_1 + 0x10));
      FUN_004238d0(local_38,0,0,uVar4,CONCAT44(uVar9,uVar5));
      plVar8 = (longlong *)FUN_00781840();
      cVar3 = (**(code **)(*plVar8 + 0x90))(plVar8);
      if (cVar3 != '\0') {
        uVar7 = FUN_00781840();
        FUN_00778dc0(uVar7,*(undefined8 *)(param_2 + 2),local_44,local_38,0,0);
      }
      bVar2 = false;
    }
  }
  else if (iVar1 == 0x83) {
    bVar2 = false;
  }
  else if (iVar1 == 0x85) {
    bVar2 = false;
  }
  else if (iVar1 == 0x86) {
    lVar6 = FUN_007ff990(*(undefined8 *)(param_1 + 0x10));
    if (lVar6 != 0) {
      uVar7 = FUN_007ff990(*(undefined8 *)(param_1 + 0x10));
      uVar7 = FUN_0065b870(uVar7);
      thunk_FUN_041b2403(uVar7,*param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    }
    bVar2 = false;
    param_2[6] = 1;
    param_2[7] = 0;
  }
  if (bVar2) {
    lVar6 = FUN_008199e0(param_1);
    uVar7 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 200),*(undefined8 *)(lVar6 + 0x698),
                               *param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar7;
  }
  return;
}

