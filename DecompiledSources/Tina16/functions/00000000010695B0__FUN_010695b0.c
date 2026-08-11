/* Ghidra address: 010695b0 */
/* Ghidra symbol: FUN_010695b0 */


void FUN_010695b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x150);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)(param_1 + 0x162) = 9;
  *(undefined1 *)(param_1 + 0x163) = 0x23;
  if (*(char *)(param_1 + 0x161) == '\x04') {
    *(undefined1 *)(param_1 + 0x161) = 0;
  }
  return;
}

