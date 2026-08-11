/* Ghidra address: 00aad350 */
/* Ghidra symbol: FUN_00aad350 */


void FUN_00aad350(longlong param_1,char param_2,longlong *param_3,int param_4,int param_5,
                 int param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar3 = 0;
  if (param_4 <= param_5) {
    iVar5 = (param_4 - param_5) + -1;
    do {
      lVar4 = (longlong)param_5;
      if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar4) == param_2) {
        if (param_8 < 2) {
          *(int *)(*param_3 + lVar4 * 4) = param_6 - iVar3;
          return;
        }
        iVar2 = iVar2 + *(int *)(*param_3 + lVar4 * 4);
        iVar1 = thunk_FUN_03f3ed25(iVar2,param_6,param_7);
        *(int *)(*param_3 + lVar4 * 4) = iVar1 - iVar3;
        iVar3 = iVar3 + *(int *)(*param_3 + lVar4 * 4);
        param_8 = param_8 + -1;
      }
      param_5 = param_5 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  return;
}

