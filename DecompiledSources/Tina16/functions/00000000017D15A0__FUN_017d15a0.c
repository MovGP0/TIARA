/* Ghidra address: 017d15a0 */
/* Ghidra symbol: FUN_017d15a0 */


double * FUN_017d15a0(double *param_1,longlong param_2,undefined4 param_3,longlong *param_4,
                     int param_5,int param_6)

{
  double *pdVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  if (param_2 != 0) {
    lVar8 = FUN_01d347d0(param_2,param_3);
    lVar2 = *(longlong *)(lVar8 + 8);
    lVar8 = *(longlong *)(lVar8 + 0x10);
    iVar4 = (**(code **)(*param_4 + 0x210))(param_4,param_5 + -1);
    sVar3 = (**(code **)(*param_4 + 0xf8))(param_4);
    if (sVar3 == 4) {
      iVar5 = 0;
    }
    else {
      iVar5 = (**(code **)(*param_4 + 0x210))(param_4,param_6 + -1);
    }
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    iVar6 = (**(code **)(*param_4 + 0x220))(param_4,param_5 + -1);
    sVar3 = (**(code **)(*param_4 + 0xf8))(param_4);
    iVar7 = iVar6;
    if (sVar3 != 4) {
      iVar7 = (**(code **)(*param_4 + 0x220))(param_4,param_6 + -1);
    }
    if (iVar6 == iVar7) {
      *param_1 = *(double *)(lVar2 + (longlong)iVar4 * 8) - *(double *)(lVar2 + (longlong)iVar5 * 8)
      ;
      param_1[1] = *(double *)(lVar8 + (longlong)iVar4 * 8) -
                   *(double *)(lVar8 + (longlong)iVar5 * 8);
    }
    else {
      pdVar1 = (double *)(PTR_DAT_020025e0 + 8);
      *param_1 = *(double *)PTR_DAT_020025e0;
      param_1[1] = *pdVar1;
    }
  }
  return param_1;
}

