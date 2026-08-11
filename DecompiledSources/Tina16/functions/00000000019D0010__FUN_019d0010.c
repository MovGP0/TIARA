/* Ghidra address: 019d0010 */
/* Ghidra symbol: FUN_019d0010 */


void FUN_019d0010(longlong param_1,double *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_2[1];
  dVar3 = (double)FUN_005264b0(*param_2 / *(double *)(param_1 + 0x78));
  dVar4 = (double)FUN_005264b0(*(double *)(param_1 + 0x80) / *(double *)(param_1 + 0x78));
  iVar1 = *(int *)(param_1 + 0x90);
  iVar2 = FUN_0040c770((dVar3 / dVar4) * (double)(*(int *)(param_1 + 0x98) - iVar1));
  *param_3 = iVar1 + iVar2;
  iVar1 = *(int *)(param_1 + 0x94);
  dVar5 = (double)FUN_0040c850(dVar5 / *(double *)(param_1 + 0x88));
  iVar2 = FUN_0040c770(dVar5 * (double)(*(int *)(param_1 + 0x9c) - iVar1));
  param_3[1] = iVar1 + iVar2;
  return;
}

