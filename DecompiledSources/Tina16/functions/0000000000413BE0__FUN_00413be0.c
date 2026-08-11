/* Ghidra address: 00413be0 */
/* Ghidra symbol: FUN_00413be0 */


void FUN_00413be0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      FUN_00414b90(*(undefined8 *)(param_1 + (longlong)iVar1 * 4 + -2),
                   *(undefined8 *)(param_1 + (longlong)iVar1 * 4 + -2 + 2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

