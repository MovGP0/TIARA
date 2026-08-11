/* Ghidra address: 00bf19b0 */
/* Ghidra symbol: FUN_00bf19b0 */


undefined8 FUN_00bf19b0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50c) +
          ((param_2 - *(int *)(param_1 + 0x910)) + -2) / *(int *)(param_1 + 0x4d4);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x534) + param_3 / *(int *)(param_1 + 0x52c);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return CONCAT44(iVar1,iVar2);
}

