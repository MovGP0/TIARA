/* Ghidra address: 016f54d0 */
/* Ghidra symbol: FUN_016f54d0 */


void FUN_016f54d0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
    while (iVar1 < *(int *)(param_1 + 0x2d8)) {
      iVar1 = iVar1 + 1;
      FUN_016ea170(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8),0);
    }
  }
  else {
    FUN_016ea170(param_2,0);
  }
  return;
}

