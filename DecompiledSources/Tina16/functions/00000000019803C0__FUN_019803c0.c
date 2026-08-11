/* Ghidra address: 019803c0 */
/* Ghidra symbol: FUN_019803c0 */


void FUN_019803c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10));
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar1);
  FUN_01980710(param_1,0);
  return;
}

