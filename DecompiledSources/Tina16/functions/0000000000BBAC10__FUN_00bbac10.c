/* Ghidra address: 00bbac10 */
/* Ghidra symbol: FUN_00bbac10 */


int FUN_00bbac10(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x4a) == '\0') {
    iVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      if (*(char *)(param_1 + 0x4c) == '\0') {
        iVar1 = *(int *)(param_1 + 0x18);
      }
      else {
        iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30);
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) +
              *(int *)(param_1 + 0x50) * param_2 + *(int *)(param_1 + 0x30);
    }
    if (*(char *)(param_1 + 0x1d) != '\0') {
      iVar1 = iVar1 + *(int *)(param_1 + 0x6c);
    }
  }
  return iVar1;
}

