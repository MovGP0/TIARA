/* Ghidra address: 019a4d90 */
/* Ghidra symbol: FUN_019a4d90 */


void FUN_019a4d90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x3d8) + 0x10) + -1;
  iVar4 = *(int *)(param_1 + 0x400) + 1;
  if (iVar4 <= iVar1) {
    iVar4 = (iVar4 - iVar1) + -1;
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3d8),iVar1);
      FUN_00410f20(uVar3);
      iVar1 = iVar1 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_004ae7e0(*(undefined8 *)(param_1 + 0x3d8),param_2);
  *(undefined4 *)(param_1 + 0x400) = uVar2;
  FUN_019a4c90(param_1);
  return;
}

