/* Ghidra address: 0122a340 */
/* Ghidra symbol: FUN_0122a340 */


void FUN_0122a340(int param_1,int param_2,int param_3,int param_4,int param_5,longlong *param_6)

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
  iVar2 = (param_1 + iVar1) - iVar2;
  iVar1 = FUN_0040c770(((double)(param_3 - param_1) * (double)(iVar2 - param_1)) /
                       (double)(param_4 - param_2));
  iVar1 = param_2 - iVar1;
  iVar3 = iVar1 - param_5;
  if (iVar2 < *(int *)PTR_DAT_02003d58) {
    (**(code **)(*param_6 + 0x60))
              (param_6,iVar2 - iVar3,iVar1 - iVar3,iVar2 + iVar3,iVar1 + iVar3,param_1,param_2,
               *(undefined4 *)PTR_DAT_02003d58,param_5);
  }
  else {
    (**(code **)(*param_6 + 0x60))
              (param_6,iVar2 - iVar3,iVar1 - iVar3,iVar2 + iVar3,iVar1 + iVar3,param_1,param_2,iVar2
               ,param_5);
  }
  return;
}

