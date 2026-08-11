/* Ghidra address: 0137c4e0 */
/* Ghidra symbol: FUN_0137c4e0 */


void FUN_0137c4e0(longlong param_1,int *param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  
  if (*param_2 < 1) {
    *param_2 = 1;
  }
  if (((*(char *)(param_1 + 0x98) == '\x04') && (*(char *)(param_1 + 0x104) == '\0')) ||
     (*(char *)(param_1 + 0x98) == '\b')) {
    if (param_4 == '\0') {
      if (1 < *param_2) {
        *param_2 = *param_2 + -1;
      }
    }
    else if ((param_4 == '\x02') && (*param_2 < 100)) {
      *param_2 = *param_2 + 1;
    }
  }
  else {
    FUN_00c42780(0x4000000000000000,(double)(*param_2 / *(int *)PTR_DAT_02002968));
    iVar1 = FUN_0040c770();
    iVar1 = iVar1 + 1;
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    if (5 < iVar1) {
      iVar1 = 6;
    }
    *param_2 = *(int *)(PTR_DAT_02002968 + (longlong)iVar1 * 4 + -4);
    if (param_4 == '\0') {
      if (1 < iVar1) {
        iVar1 = iVar1 + -1;
      }
    }
    else if ((param_4 == '\x02') && (iVar1 < 6)) {
      iVar1 = iVar1 + 1;
    }
    *param_2 = *(int *)(PTR_DAT_02002968 + (longlong)iVar1 * 4 + -4);
  }
  return;
}

