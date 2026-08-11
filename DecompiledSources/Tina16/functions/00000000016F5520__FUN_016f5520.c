/* Ghidra address: 016f5520 */
/* Ghidra symbol: FUN_016f5520 */


void FUN_016f5520(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
    while (iVar1 < *(int *)(param_1 + 0x2d8)) {
      iVar1 = iVar1 + 1;
      FUN_01b05110(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8));
    }
  }
  else {
    FUN_01b05110(param_2);
  }
  return;
}

