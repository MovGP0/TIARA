/* Ghidra address: 006deb80 */
/* Ghidra symbol: FUN_006deb80 */


void FUN_006deb80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_006decb0(*(undefined8 *)(param_1 + 0x10));
  if (*(int *)(param_1 + 8) < iVar1 + -1) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

