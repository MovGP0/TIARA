/* Ghidra address: 016f5480 */
/* Ghidra symbol: FUN_016f5480 */


void FUN_016f5480(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 0;
    while (iVar1 < *(int *)(param_1 + 0x2d8)) {
      iVar1 = iVar1 + 1;
      FUN_016ea110(*(undefined8 *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar1 * 8),0);
    }
  }
  else {
    FUN_016ea110(param_2,0);
  }
  return;
}

