/* Ghidra address: 017d86b0 */
/* Ghidra symbol: FUN_017d86b0 */


void FUN_017d86b0(longlong param_1,longlong *param_2,int param_3,undefined4 param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int local_40;
  
  lVar1 = *param_2;
  lVar2 = param_2[2];
  *param_5 = *(int *)(param_1 + 8) + -1;
  local_40 = (int)lVar2;
  iVar4 = 0;
  if (-1 < local_40 + -1) {
    do {
      sVar3 = *(short *)(lVar1 + (longlong)iVar4 * 2);
      if (param_3 <= sVar3) {
        FUN_017d8580(param_1,param_4,(int)sVar3);
        sVar3 = *(short *)(lVar1 + (longlong)iVar4 * 2);
        if ((int)sVar3 < *param_5) {
          *param_5 = (int)sVar3;
        }
      }
      iVar4 = iVar4 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}

