/* Ghidra address: 010af040 */
/* Ghidra symbol: FUN_010af040 */


void FUN_010af040(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18),(longlong)(*(int *)(param_1 + 0xc) * 4));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
  *(int *)(param_1 + 0xc) = iVar1;
  uVar2 = FUN_004095c0((longlong)(iVar1 * 4));
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_0040d200(uVar2,(longlong)(*(int *)(param_1 + 0xc) * 4),0xffffffff);
  return;
}

