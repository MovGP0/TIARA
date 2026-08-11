/* Ghidra address: 0122a690 */
/* Ghidra symbol: FUN_0122a690 */


void FUN_0122a690(int param_1,int param_2,int param_3,int param_4,int param_5,longlong *param_6)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)(param_3 - param_1);
  dVar4 = (double)(param_4 - param_2);
  iVar1 = FUN_0040c770(((double)(param_5 - param_2) * dVar3) / dVar4);
  iVar1 = param_1 + iVar1;
  if (iVar1 < *(int *)PTR_DAT_02003d58) {
    iVar1 = *(int *)PTR_DAT_02003d58;
    param_5 = FUN_0040c770(((double)(iVar1 - param_1) * dVar4) / dVar3);
    param_5 = param_2 + param_5;
  }
  iVar2 = *(int *)(*(longlong *)(DAT_021076a0 + 0x738) + 0x98) - *(int *)PTR_DAT_02002598;
  if (iVar2 < iVar1) {
    param_5 = FUN_0040c770(((double)(iVar2 - param_1) * dVar4) / dVar3);
    param_5 = param_2 + param_5;
    iVar1 = iVar2;
  }
  (**(code **)(*param_6 + 200))(param_6,param_1,param_2);
  (**(code **)(*param_6 + 0xc0))(param_6,iVar1,param_5);
  return;
}

