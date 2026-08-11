/* Ghidra address: 00a20010 */
/* Ghidra symbol: FUN_00a20010 */


void FUN_00a20010(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  (**(code **)(*(longlong *)(param_1 + 0x1f0) + 0x10))();
  iVar1 = *(int *)(lVar2 + 0x20);
  if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x108) != 0) {
      *(undefined4 *)(lVar2 + 0x20) = 1;
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0x20) = 2;
      goto LAB_00a20069;
    }
    if ((iVar1 != 0) || (*(undefined4 *)(lVar2 + 0x20) = 2, *(int *)(param_1 + 0x108) != 0))
    goto LAB_00a20069;
  }
  *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
LAB_00a20069:
  *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + 1;
  return;
}

