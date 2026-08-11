/* Ghidra address: 00aad510 */
/* Ghidra symbol: FUN_00aad510 */


void FUN_00aad510(longlong param_1,char param_2,longlong *param_3,int param_4,int param_5,
                 int param_6,int param_7,int param_8,longlong param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  iVar3 = 0;
  iVar4 = 0;
  if (param_4 <= param_5) {
    iVar7 = (param_4 - param_5) + -1;
    iVar5 = param_5;
    do {
      lVar6 = (longlong)iVar5;
      if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar6) == param_2) {
        if (param_8 < 2) {
          if (param_2 == '\0') {
            iVar4 = 0;
            if (param_4 <= param_5) {
              iVar2 = (param_4 - param_5) + -1;
              iVar7 = param_5;
              do {
                lVar6 = (longlong)iVar7;
                if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar6) == '\0') {
                  iVar4 = iVar4 + *(int *)(*param_3 + lVar6 * 4) + *(int *)(param_9 + lVar6 * 4);
                }
                iVar7 = iVar7 + -1;
                iVar2 = iVar2 + 1;
              } while (iVar2 != 0);
            }
            param_7 = (param_6 - iVar3) - param_7;
            if (((0 < param_7) && (0 < iVar4)) && (param_4 + 1 <= param_5)) {
              iVar7 = ((param_4 + 1) - param_5) + -1;
              do {
                lVar6 = (longlong)param_5;
                if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar6) == '\0') {
                  iVar2 = ((*(int *)(*param_3 + lVar6 * 4) + *(int *)(param_9 + lVar6 * 4)) *
                          param_7) / iVar4;
                  piVar1 = (int *)(*param_3 + lVar6 * 4);
                  *piVar1 = *piVar1 + iVar2;
                  iVar3 = iVar3 + iVar2;
                }
                param_5 = param_5 + -1;
                iVar7 = iVar7 + 1;
              } while (iVar7 != 0);
            }
          }
          piVar1 = (int *)(*param_3 + (longlong)iVar5 * 4);
          *piVar1 = *piVar1 + (param_6 - iVar3);
          return;
        }
        iVar4 = iVar4 + *(int *)(param_9 + lVar6 * 4);
        iVar2 = thunk_FUN_03f3ed25(param_6,iVar4,param_7);
        piVar1 = (int *)(*param_3 + lVar6 * 4);
        *piVar1 = *piVar1 + (iVar2 - iVar3);
        iVar3 = iVar3 + (iVar2 - iVar3);
        param_8 = param_8 + -1;
      }
      iVar5 = iVar5 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0);
  }
  return;
}

