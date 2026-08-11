/* Ghidra address: 00aad8f0 */
/* Ghidra symbol: FUN_00aad8f0 */


void FUN_00aad8f0(longlong param_1,char param_2,longlong *param_3,int param_4,int param_5,
                 int param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_4 <= param_5) {
    iVar4 = (param_4 - param_5) + -1;
    iVar2 = param_6;
    do {
      lVar3 = (longlong)param_5;
      if (*(char *)(*(longlong *)(param_1 + 0x110) + lVar3) == param_2) {
        if (param_8 < 2) {
          *(int *)(*param_3 + lVar3 * 4) = iVar2;
          return;
        }
        param_8 = param_8 + -1;
        uVar1 = thunk_FUN_03f3ed25(*(undefined4 *)(*param_3 + lVar3 * 4),param_6,param_7);
        *(undefined4 *)(*param_3 + lVar3 * 4) = uVar1;
        iVar2 = iVar2 - *(int *)(*param_3 + lVar3 * 4);
      }
      param_5 = param_5 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  return;
}

