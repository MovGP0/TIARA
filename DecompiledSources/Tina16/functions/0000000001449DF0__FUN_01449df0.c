/* Ghidra address: 01449df0 */
/* Ghidra symbol: FUN_01449df0 */


void FUN_01449df0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double local_68;
  double local_60;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  
  iVar3 = 0;
  iVar5 = (int)param_1[1] + (int)param_2[1];
  if (-1 < iVar5) {
    iVar5 = iVar5 + 1;
    do {
      local_68 = 0.0;
      local_60 = 0.0;
      iVar4 = 0;
      if (-1 < (int)param_1[1]) {
        iVar6 = (int)param_1[1] + 1;
        do {
          iVar2 = iVar3 - iVar4;
          if ((iVar2 <= (int)param_2[1]) && (-1 < iVar2)) {
            local_48 = *(double *)(*param_1 + (longlong)iVar4 * 0x10);
            local_40 = *(double *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
            local_58 = *(undefined8 *)(*param_2 + (longlong)iVar2 * 0x10);
            local_50 = *(undefined8 *)(*param_2 + 8 + (longlong)iVar2 * 0x10);
            FUN_01449560(&local_48,&local_58,&local_48,param_4);
            local_68 = local_68 + local_48;
            local_60 = local_60 + local_40;
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      lVar1 = *param_3;
      *(double *)(lVar1 + (longlong)iVar3 * 0x10) = local_68;
      *(double *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = local_60;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)(param_3 + 1) = (int)param_1[1] + (int)param_2[1];
  return;
}

