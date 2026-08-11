/* Ghidra address: 01241b70 */
/* Ghidra symbol: FUN_01241b70 */


void FUN_01241b70(longlong param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 0x600) + 0x1fc8) != '\0') {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x3880);
    iVar2 = 0;
    if (iVar3 - 1U < 0x80000000) {
      do {
        pdVar1 = *(double **)(param_1 + 0x30);
        if ((((*pdVar1 <= 0.0 && *pdVar1 != 0.0) || (pdVar1[1] <= 0.0 && pdVar1[1] != 0.0)) ||
            (*(double *)(*(longlong *)(param_1 + 0x30) + 0x12e0 + (longlong)iVar2 * 8) < 0.0)) ||
           (*(double *)(*(longlong *)(param_1 + 0x30) + 0x1c48 + (longlong)iVar2 * 8) < 0.0)) {
          iVar3 = 0x1241c54;
          param_1 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71((int7)((ulonglong)pdVar1 >> 8),1));
          iVar2 = FUN_004134c0();
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

