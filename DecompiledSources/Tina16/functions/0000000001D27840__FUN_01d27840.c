/* Ghidra address: 01d27840 */
/* Ghidra symbol: FUN_01d27840 */


void FUN_01d27840(longlong param_1,int *param_2,float param_3)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_0040af10((double)(*(int *)(param_1 + 0x70) - *(int *)(param_1 + 0x60)));
  iVar1 = FUN_0040c770((dVar2 * ((double)param_3 - (double)*(int *)(param_1 + 0x58))) /
                       (double)(*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x58)));
  iVar1 = *(int *)(param_1 + 0x60) + iVar1;
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  if (param_2[1] < iVar1) {
    param_2[1] = iVar1;
  }
  return;
}

