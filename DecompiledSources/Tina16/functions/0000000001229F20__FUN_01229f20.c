/* Ghidra address: 01229f20 */
/* Ghidra symbol: FUN_01229f20 */


void FUN_01229f20(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)(PTR_DAT_020040b8 + 0xd8) == 1) {
    dVar3 = *(double *)(PTR_DAT_020040b8 + 0xb0);
    dVar4 = *(double *)(PTR_DAT_020040b8 + 0xb8);
  }
  else {
    dVar3 = (double)FUN_00c42800(*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
    dVar4 = (double)FUN_00c42800(*(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
  }
  iVar1 = *(int *)(*(longlong *)(DAT_021076a0 + 0x738) + 0x98);
  iVar2 = *(int *)PTR_DAT_02001888;
  if (*(int *)(PTR_DAT_020040b8 + 0xd8) == 0) {
    param_1 = (double)FUN_00c42800(param_1);
  }
  FUN_0040c770(((param_1 - dVar3) * (double)(iVar1 - iVar2)) / (dVar4 - dVar3) + 0.0);
  return;
}

