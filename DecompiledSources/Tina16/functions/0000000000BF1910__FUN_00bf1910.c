/* Ghidra address: 00bf1910 */
/* Ghidra symbol: FUN_00bf1910 */


undefined8 FUN_00bf1910(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x52c);
  iVar1 = *(int *)(param_1 + 0x508) * iVar3;
  if ((iVar1 <= param_3) && (param_3 = iVar1 + -1, param_3 < 0)) {
    param_3 = 0;
  }
  lVar2 = FUN_0040c770((double)((float)((param_2 - *(int *)(param_1 + 0x910)) + -2) /
                               (float)*(int *)(param_1 + 0x4d4)));
  lVar2 = *(int *)(param_1 + 0x50c) + lVar2;
  if (lVar2 < 1) {
    lVar2 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x534) + param_3 / iVar3;
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  return CONCAT44(iVar3,(int)lVar2);
}

