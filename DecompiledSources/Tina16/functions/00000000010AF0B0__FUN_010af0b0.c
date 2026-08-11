/* Ghidra address: 010af0b0 */
/* Ghidra symbol: FUN_010af0b0 */


void FUN_010af0b0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))(*(longlong **)(param_1 + 0x20));
  *(int *)(param_1 + 0xc) = iVar1;
  uVar2 = FUN_004095c0((longlong)(iVar1 * 4));
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  FUN_0040d200(uVar2,(longlong)(*(int *)(param_1 + 0xc) * 4),0xffffffff);
  return;
}

