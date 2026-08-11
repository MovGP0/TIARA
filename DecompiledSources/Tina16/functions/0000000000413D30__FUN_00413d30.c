/* Ghidra address: 00413d30 */
/* Ghidra symbol: FUN_00413d30 */


void FUN_00413d30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_00414520(*(undefined8 *)(param_1 + (longlong)iVar1 * 4 + -2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

