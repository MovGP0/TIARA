/* Ghidra address: 0068c510 */
/* Ghidra symbol: FUN_0068c510 */


void FUN_0068c510(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = param_1[0x13];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x9c);
  FUN_00655080(param_1);
  uVar3 = FUN_0065b870(param_1);
  uVar4 = 0;
  thunk_FUN_041cc6e2(uVar3,0,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),(int)lVar6
                     ,uVar1,0x14);
  if ((int)param_1[0x9a] != 0) {
    uVar3 = FUN_0065b870(param_1);
    uVar4 = 0x192;
    thunk_FUN_041b2403(uVar3,0x192,1,param_1 + 0x9a);
  }
  FUN_0068b940(param_1);
  if (*(uint *)(param_1 + 0x9d) != 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x9d);
    FUN_0068e290(param_1,uVar4);
  }
  if (((int)param_1[0x99] != -1) || (param_1[0x9b] != 0)) {
    if (*(byte *)((longlong)param_1 + 0x4cc) < 8) {
      bVar7 = ((int)CONCAT71((int7)(uVar4 >> 8),1) << (*(byte *)((longlong)param_1 + 0x4cc) & 0x1f)
              & 0x18U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      FUN_0068e020(param_1,(int)param_1[0x99]);
    }
    if (param_1[0x9b] != 0) {
      (**(code **)(*param_1 + 0x2d0))(param_1,param_1[0x9b]);
      lVar6 = param_1[0x9b];
      param_1[0x9b] = 0;
      FUN_00410f20(lVar6);
    }
    FUN_0068c170(param_1,(int)param_1[0x9c]);
    (**(code **)(*param_1 + 0x268))(param_1,*(undefined4 *)((longlong)param_1 + 0x4e4));
    if ((char)param_1[0x92] != '\0') {
      lVar6 = 0;
      if (param_1[0x9e] != 0) {
        lVar6 = *(longlong *)(param_1[0x9e] + -8);
      }
      iVar2 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
      if (lVar6 == iVar2) {
        iVar2 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))();
        iVar5 = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_0068bd10(param_1,iVar5,*(undefined1 *)(param_1[0x9e] + (longlong)iVar5));
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
    FUN_00419430(param_1 + 0x9e,&DAT_00676a88);
    *(undefined4 *)(param_1 + 0x99) = 0xffffffff;
  }
  return;
}

