/* Ghidra address: 019c1e50 */
/* Ghidra symbol: FUN_019c1e50 */


longlong * FUN_019c1e50(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  lVar6 = 0;
  if (param_2 != (int *)0x0) {
    lVar6 = *(longlong *)(param_2 + -2);
  }
  if (lVar6 < 2) {
    FUN_004194b0(param_1,param_2,&DAT_0147b748);
  }
  else {
    FUN_00419260(param_1,&DAT_0147b748,1,1);
    *(undefined8 *)*param_1 = *(undefined8 *)param_2;
    iVar10 = 0;
    if (param_2 != (int *)0x0) {
      iVar10 = (int)*(undefined8 *)(param_2 + -2);
    }
    iVar9 = 2;
    if (1 < iVar10 + -1) {
      iVar10 = iVar10 + -2;
      iVar5 = param_2[2] - *param_2;
      iVar7 = param_2[3] - param_2[1];
      do {
        iVar1 = param_2[(longlong)iVar9 * 2];
        iVar2 = param_2[(longlong)(iVar9 + -1) * 2];
        iVar3 = param_2[(longlong)iVar9 * 2 + 1];
        iVar4 = param_2[(longlong)(iVar9 + -1) * 2 + 1];
        if ((iVar1 - iVar2 != iVar5) || (iVar3 - iVar4 != iVar7)) {
          lVar6 = 0;
          if (*param_1 != 0) {
            lVar6 = *(longlong *)(*param_1 + -8);
          }
          FUN_00419260(param_1,&DAT_0147b748,1,lVar6 + 1);
          lVar6 = 0;
          if (*param_1 != 0) {
            lVar6 = *(longlong *)(*param_1 + -8);
          }
          *(undefined8 *)(*param_1 + (lVar6 + -1) * 8) =
               *(undefined8 *)(param_2 + (longlong)(iVar9 + -1) * 2);
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
        iVar5 = iVar1 - iVar2;
        iVar7 = iVar3 - iVar4;
      } while (iVar10 != 0);
    }
    lVar6 = 0;
    if (*param_1 != 0) {
      lVar6 = *(longlong *)(*param_1 + -8);
    }
    FUN_00419260(param_1,&DAT_0147b748,1,lVar6 + 1);
    lVar6 = 0;
    if (*param_1 != 0) {
      lVar6 = *(longlong *)(*param_1 + -8);
    }
    lVar8 = 0;
    if (param_2 != (int *)0x0) {
      lVar8 = *(longlong *)(param_2 + -2);
    }
    *(undefined8 *)(*param_1 + (lVar6 + -1) * 8) = *(undefined8 *)(param_2 + (lVar8 + -1) * 2);
  }
  return param_1;
}

