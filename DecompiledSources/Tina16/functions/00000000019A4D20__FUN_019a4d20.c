/* Ghidra address: 019a4d20 */
/* Ghidra symbol: FUN_019a4d20 */


void FUN_019a4d20(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x3d8) + 0x10) + -1;
    if (-1 < iVar2) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3d8),iVar2);
        FUN_00410f20(uVar1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x10))(*(longlong **)(param_1 + 0x3d8));
    FUN_019a4fe0(param_1);
  }
  *(undefined4 *)(param_1 + 0x400) = 0xffffffff;
  FUN_019a4c90(param_1);
  return;
}

