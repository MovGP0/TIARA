/* Ghidra address: 0122a4d0 */
/* Ghidra symbol: FUN_0122a4d0 */


void FUN_0122a4d0(int param_1,int param_2,int param_3,int param_4,int param_5,longlong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar1 = FUN_0040c770(((double)(param_5 - param_2) * (double)(param_3 - param_1)) /
                       (double)(param_4 - param_2));
  dVar4 = (double)(param_1 - (param_1 + iVar1));
  FUN_0040c760(dVar4 * dVar4 + (double)(param_2 - param_5) * (double)(param_2 - param_5));
  iVar2 = FUN_0040c770();
  iVar2 = param_1 + iVar1 + iVar2;
  iVar1 = FUN_0040c770(((double)(param_3 - param_1) * (double)(iVar2 - param_1)) /
                       (double)(param_4 - param_2));
  iVar1 = param_2 - iVar1;
  iVar3 = iVar1 - param_5;
  if (*(int *)(*(longlong *)(DAT_021076a0 + 0x738) + 0x98) - *(int *)PTR_DAT_02002598 < iVar2) {
    (**(code **)(*param_6 + 0x60))
              (param_6,iVar2 - iVar3,iVar1 - iVar3,iVar2 + iVar3,iVar1 + iVar3,
               *(int *)(*(longlong *)(DAT_021076a0 + 0x738) + 0x98) - *(int *)PTR_DAT_02002598,
               param_5,param_1,param_2);
  }
  else {
    (**(code **)(*param_6 + 0x60))
              (param_6,iVar2 - iVar3,iVar1 - iVar3,iVar2 + iVar3,iVar1 + iVar3,iVar2,param_5,param_1
               ,param_2);
  }
  return;
}

