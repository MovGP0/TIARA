/* Ghidra address: 00a55db0 */
/* Ghidra symbol: FUN_00a55db0 */


void FUN_00a55db0(longlong param_1,int *param_2,int *param_3,char param_4)

{
  int iVar1;
  
  if (param_4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x20);
    if (0 < iVar1) {
      if (*(int *)(param_1 + 0x78) <= iVar1) {
        iVar1 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar1;
      iVar1 = *(int *)(param_1 + 0x20);
      if (*param_3 <= iVar1) {
        iVar1 = *param_3;
      }
      *param_3 = iVar1;
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (0 < iVar1) {
      if (iVar1 <= *(int *)(param_1 + 0x78)) {
        iVar1 = *(int *)(param_1 + 0x78);
      }
      *(int *)(param_1 + 0x78) = iVar1;
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar1 <= *param_2) {
        iVar1 = *param_2;
      }
      *param_2 = iVar1;
    }
  }
  return;
}

