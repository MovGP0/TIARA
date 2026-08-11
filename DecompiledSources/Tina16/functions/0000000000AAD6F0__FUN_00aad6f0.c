/* Ghidra address: 00aad6f0 */
/* Ghidra symbol: FUN_00aad6f0 */


void FUN_00aad6f0(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6
                 ,char param_7)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  int local_3c;
  
  dVar8 = 0.0;
  local_3c = 0;
  if (param_3 <= param_4) {
    iVar3 = (param_3 - param_4) + -1;
    iVar6 = param_4;
    dVar8 = 0.0;
    do {
      lVar2 = (longlong)iVar6;
      if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar2) == '\x03') {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0xe8) + lVar2 * 4);
        if (iVar5 < 1) {
          param_5 = param_5 - *(int *)(*param_2 + lVar2 * 4);
        }
        else {
          local_3c = local_3c + 1;
          if ((param_7 != '\0') &&
             (dVar7 = (double)*(int *)(*param_2 + lVar2 * 4) / (double)iVar5, dVar8 <= dVar7)) {
            dVar8 = dVar7;
          }
        }
      }
      iVar6 = iVar6 + -1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0);
  }
  if (dVar8 <= (double)param_5 / (double)param_6) {
    dVar8 = (double)param_5 / (double)param_6;
  }
  lVar2 = FUN_0040c840(dVar8 * (double)param_6);
  if (param_5 < lVar2) {
    lVar2 = (longlong)param_5;
  }
  iVar6 = 0;
  iVar3 = 0;
  if (param_3 <= param_4) {
    iVar5 = (param_3 - param_4) + -1;
    do {
      lVar4 = (longlong)param_4;
      if ((*(char *)(*(longlong *)(param_1 + 0x110) + lVar4) == '\x03') &&
         (0 < *(int *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 4))) {
        if (local_3c < 2) {
          *(int *)(*param_2 + lVar4 * 4) = (int)lVar2 - iVar6;
          return;
        }
        iVar3 = iVar3 + *(int *)(*(longlong *)(param_1 + 0xe8) + lVar4 * 4);
        iVar1 = FUN_0040c840((double)iVar3 * dVar8);
        *(int *)(*param_2 + lVar4 * 4) = iVar1 - iVar6;
        iVar6 = iVar6 + *(int *)(*param_2 + lVar4 * 4);
        local_3c = local_3c + -1;
      }
      param_4 = param_4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  return;
}

