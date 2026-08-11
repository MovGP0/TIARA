/* Ghidra address: 006a0620 */
/* Ghidra symbol: FUN_006a0620 */


void FUN_006a0620(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x6c0) = 0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 - 10U < 2) {
    *(undefined1 *)(param_1 + 0x6c0) = 1;
  }
  else if ((iVar1 == 0xc) || (iVar1 == 0xf)) {
    *(undefined1 *)(param_1 + 0x6c0) = 2;
  }
  FUN_00807410();
  return;
}

