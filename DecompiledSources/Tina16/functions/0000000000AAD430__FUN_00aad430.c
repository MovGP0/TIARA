/* Ghidra address: 00aad430 */
/* Ghidra symbol: FUN_00aad430 */


void FUN_00aad430(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6
                 ,undefined4 param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  if (param_3 <= param_4) {
    iVar6 = (param_3 - param_4) + -1;
    do {
      lVar5 = (longlong)param_4;
      if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar5) == '\x02') {
        if (param_8 < 2) {
          piVar1 = (int *)(*param_2 + lVar5 * 4);
          *piVar1 = *piVar1 + ((param_5 - param_6) - iVar3);
          return;
        }
        iVar4 = iVar4 + *(int *)(*(longlong *)(param_1 + 0xe0) + lVar5 * 4);
        iVar2 = thunk_FUN_03f3ed25(param_5 - param_6,iVar4,param_7);
        piVar1 = (int *)(*param_2 + lVar5 * 4);
        *piVar1 = *piVar1 + (iVar2 - iVar3);
        iVar3 = iVar3 + (iVar2 - iVar3);
        param_8 = param_8 + -1;
      }
      param_4 = param_4 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0);
  }
  return;
}

