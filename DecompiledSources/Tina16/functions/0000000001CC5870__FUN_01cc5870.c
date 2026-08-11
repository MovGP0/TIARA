/* Ghidra address: 01cc5870 */
/* Ghidra symbol: FUN_01cc5870 */


void FUN_01cc5870(longlong param_1,undefined4 param_2,double param_3,ulonglong *param_4,
                 undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  double dVar8;
  ulonglong uVar9;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = FUN_01d347d0(lVar1,param_2);
  cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01cb4260);
  if (cVar2 == '\0') {
    lVar5 = FUN_01d347d0(lVar1,param_2);
    uVar7 = *(undefined4 *)(lVar5 + 0x40);
  }
  else {
    lVar5 = FUN_01d347d0(lVar1,param_2);
    uVar7 = *(undefined4 *)(lVar5 + 0x3c);
  }
  plVar6 = (longlong *)FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar1 + 0x440) + 8),uVar7);
  lVar5 = FUN_01d347d0(lVar1,param_2);
  if (*(int *)(lVar5 + 0x2c) == 0) {
    *param_4 = *(ulonglong *)PTR_DAT_020011b0 ^ 0x8000000000000000;
    *param_5 = *(undefined8 *)PTR_DAT_020011b0;
  }
  else {
    dVar8 = (double)(**(code **)(*plVar6 + 0x60))(plVar6,0);
    if (dVar8 <= param_3) {
      dVar8 = (double)(**(code **)(*plVar6 + 0x60))(plVar6,*(int *)(lVar5 + 0x2c) + -1);
      if (param_3 <= dVar8) {
        uVar4 = FUN_01d347d0(*(undefined8 *)(*(longlong *)(lVar1 + 0x440) + 8),uVar7);
        iVar3 = FUN_01cc5810(param_1,uVar4,param_3,*(int *)(lVar5 + 0x2c) + -1);
        uVar9 = (**(code **)(*plVar6 + 0x60))(plVar6,iVar3);
        *param_4 = uVar9;
        uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,iVar3 + 1);
        *param_5 = uVar4;
      }
      else {
        uVar9 = (**(code **)(*plVar6 + 0x60))(plVar6,*(int *)(lVar5 + 0x2c) + -1);
        *param_4 = uVar9;
        *param_5 = *(undefined8 *)PTR_DAT_020011b0;
      }
    }
    else {
      *param_4 = *(ulonglong *)PTR_DAT_020011b0 ^ 0x8000000000000000;
      uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,0);
      *param_5 = uVar4;
    }
  }
  return;
}

