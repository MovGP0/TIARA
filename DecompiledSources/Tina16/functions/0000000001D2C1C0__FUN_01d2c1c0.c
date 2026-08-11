/* Ghidra address: 01d2c1c0 */
/* Ghidra symbol: FUN_01d2c1c0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01d2c1c0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((cVar1 == '\0') ||
     (cVar1 = FUN_01d2dd00((longlong)param_1 + 0x14,param_3,param_4), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else if ((((param_3 < *(int *)((longlong)param_1 + 0x24)) ||
            (*(int *)((longlong)param_1 + 0x2c) < param_3)) || (param_4 < (int)param_1[5])) ||
          ((int)param_1[6] < param_4)) {
    if ((*(char *)((longlong)param_1 + 0x5c) == '\0') || ((int)param_1[9] < 2)) {
      uVar2 = 0;
    }
    else {
      iVar4 = (int)param_1[9] + -1;
      iVar3 = 1;
      if (0 < iVar4) {
        do {
          dVar7 = (double)*(int *)(param_1[10] + -8 + (longlong)iVar3 * 8);
          dVar8 = (double)*(int *)(param_1[10] + -4 + (longlong)iVar3 * 8);
          dVar9 = (double)*(int *)(param_1[10] + -8 + (longlong)(iVar3 + 1) * 8);
          dVar10 = (double)*(int *)(param_1[10] + -4 + (longlong)(iVar3 + 1) * 8);
          dVar5 = (double)FUN_0040c760((dVar9 - dVar7) * (dVar9 - dVar7) +
                                       (dVar10 - dVar8) * (dVar10 - dVar8));
          dVar6 = (double)FUN_00b90650(dVar7,dVar9);
          if ((((dVar6 - (double)_DAT_01ff3f88 <= (double)param_3) &&
               (dVar6 = (double)FUN_00b90620(dVar7,dVar9),
               (double)param_3 <= dVar6 + (double)_DAT_01ff3f88)) &&
              ((dVar6 = (double)FUN_00b90650(dVar8,dVar10),
               dVar6 - (double)_DAT_01ff3f88 <= (double)param_4 &&
               (dVar6 = (double)FUN_00b90620(dVar8,dVar10),
               (double)param_4 <= dVar6 + (double)_DAT_01ff3f88)))) &&
             (((dVar5 != 0.0 &&
               (FUN_0040c850((dVar9 - dVar7) * ((double)param_4 - dVar8) -
                             (dVar10 - dVar8) * ((double)param_3 - dVar7)),
               extraout_XMM0_Qa <= dVar5 * (double)_DAT_01ff3f88)) ||
              ((dVar5 == 0.0 &&
               (FUN_0040c760(((double)param_3 - dVar7) * ((double)param_3 - dVar7) +
                             ((double)param_4 - dVar8) * ((double)param_4 - dVar8)),
               extraout_XMM0_Qa_00 < (double)_DAT_01ff3f88)))))) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

