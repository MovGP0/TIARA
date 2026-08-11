/* Ghidra address: 00a7af90 */
/* Ghidra symbol: FUN_00a7af90 */


void FUN_00a7af90(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00a7b020(param_1,iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))(*(longlong **)(param_1 + 0xb0));
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_00410f20(uVar1);
  return;
}

