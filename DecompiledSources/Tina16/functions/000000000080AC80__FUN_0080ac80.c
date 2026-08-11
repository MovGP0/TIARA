/* Ghidra address: 0080ac80 */
/* Ghidra symbol: FUN_0080ac80 */


void FUN_0080ac80(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((*(longlong *)(param_1 + 0x2d0) != 0) && (0 < *(int *)(param_1 + 0x128))) &&
     (*(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1, *(int *)(param_1 + 0x128) == 0)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x120) + 0x10) + -1;
    if (-1 < iVar2) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x120),iVar2);
        thunk_FUN_041cc6e2(uVar1,0xffffffffffffffff,0,0,0,0,0x213);
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))(*(longlong **)(param_1 + 0x120));
  }
  return;
}

