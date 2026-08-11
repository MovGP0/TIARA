/* Ghidra address: 00a949e0 */
/* Ghidra symbol: FUN_00a949e0 */


int FUN_00a949e0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  do {
    iVar1 = param_3;
    if (iVar3 < 1) {
      *param_4 = 0;
      break;
    }
    iVar3 = iVar3 + -1;
    lVar2 = FUN_004aeac0(param_1,iVar3);
    *param_4 = lVar2;
    param_3 = *(int *)(*param_4 + 0x30);
  } while (param_2 < *(int *)(*param_4 + 0x30));
  return iVar1 - param_2;
}

