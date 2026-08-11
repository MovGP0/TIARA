/* Ghidra address: 0108ce80 */
/* Ghidra symbol: FUN_0108ce80 */


void FUN_0108ce80(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x9e8) + 0x4a0) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(short *)(*(longlong *)(param_1 + 0xb10) + -2 + (longlong)(iVar2 + 1) * 2) == 0x31) {
        FUN_00821790(*(undefined8 *)(param_1 + 0x9e8),iVar2,1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

