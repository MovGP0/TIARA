/* Ghidra address: 017d13d0 */
/* Ghidra symbol: FUN_017d13d0 */


double * FUN_017d13d0(double *param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                     char param_5,int param_6,int param_7,undefined1 param_8,undefined1 param_9)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  if (*(longlong *)(param_2 + 0x4c0) != 0) {
    iVar5 = FUN_01b07e10(param_2,param_4);
    if (*(int *)(param_2 + 0x2d8) < iVar5) {
      pdVar1 = (double *)(PTR_DAT_020025e0 + 8);
      *param_1 = *(double *)PTR_DAT_020025e0;
      param_1[1] = *pdVar1;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)iVar5 * 8);
      lVar9 = FUN_01d347d0(*(undefined8 *)(param_2 + 0x4c0),param_3);
      lVar2 = *(longlong *)(lVar9 + 8);
      lVar9 = *(longlong *)(lVar9 + 0x10);
      if (param_5 == '\0') {
        iVar5 = FUN_01b05690(lVar3,param_8,param_9);
        *param_1 = *(double *)(lVar2 + (longlong)iVar5 * 8);
        param_1[1] = *(double *)(lVar9 + (longlong)iVar5 * 8);
      }
      else {
        iVar5 = FUN_01b05600(lVar3,(undefined1)param_6);
        sVar4 = (**(code **)(*param_4 + 0xf8))(param_4);
        if (sVar4 == 4) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_01b05600(lVar3,(undefined1)param_7);
        }
        if (iVar6 == -1) {
          iVar6 = 0;
        }
        iVar7 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0x220))
                          (*(longlong **)(lVar3 + 0x128),param_6 + -1);
        sVar4 = (**(code **)(*param_4 + 0xf8))(param_4);
        iVar8 = iVar7;
        if (sVar4 != 4) {
          iVar8 = (**(code **)(**(longlong **)(lVar3 + 0x128) + 0x220))
                            (*(longlong **)(lVar3 + 0x128),param_7 + -1);
        }
        if (iVar7 == iVar8) {
          *param_1 = *(double *)(lVar2 + (longlong)iVar5 * 8) -
                     *(double *)(lVar2 + (longlong)iVar6 * 8);
          param_1[1] = *(double *)(lVar9 + (longlong)iVar5 * 8) -
                       *(double *)(lVar9 + (longlong)iVar6 * 8);
        }
        else {
          pdVar1 = (double *)(PTR_DAT_020025e0 + 8);
          *param_1 = *(double *)PTR_DAT_020025e0;
          param_1[1] = *pdVar1;
        }
      }
    }
  }
  return param_1;
}

