/* Ghidra address: 00ab4050 */
/* Ghidra symbol: FUN_00ab4050 */


void FUN_00ab4050(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    iVar1 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + -8);
  }
  if (0 < iVar1) {
    *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + (longlong)(iVar1 + -1)) = 3;
  }
  return;
}

