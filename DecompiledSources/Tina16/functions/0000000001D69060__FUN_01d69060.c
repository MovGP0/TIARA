/* Ghidra address: 01d69060 */
/* Ghidra symbol: FUN_01d69060 */


void FUN_01d69060(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x10);
  uVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(uint *)(*param_1 + 0x10) <= uVar1) {
        FUN_00594f90();
      }
      FUN_004095f0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + (longlong)(int)uVar1 * 8));
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(*param_1);
  return;
}

