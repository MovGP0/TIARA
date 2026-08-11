/* Ghidra address: 018dc2d0 */
/* Ghidra symbol: FUN_018dc2d0 */


longlong * FUN_018dc2d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  lVar3 = FUN_00418c80(*(undefined8 *)(param_1 + 0xc0));
  FUN_00419260(param_2,&DAT_004066f0,1,lVar3 + 1);
  lVar3 = FUN_00418c80(*(undefined8 *)(param_1 + 0xc0));
  FUN_00409a70(*(undefined8 *)(param_1 + 0xc0),*param_2,lVar3 * 4);
  dVar5 = (double)FUN_018dbb10(param_1);
  iVar2 = FUN_0040c770(dVar5 * *(double *)(param_1 + 0x98));
  lVar3 = FUN_00418c90(*param_2);
  *(int *)(*param_2 + lVar3 * 4) = iVar2 + 1;
  lVar3 = FUN_00418c90(*param_2);
  if (0 < lVar3) {
    lVar3 = FUN_00418c90(*param_2);
    lVar4 = FUN_00418c90(*param_2);
    piVar1 = (int *)(*param_2 + lVar3 * 4);
    *piVar1 = *piVar1 + *(int *)(*param_2 + -4 + lVar4 * 4);
  }
  return param_2;
}

