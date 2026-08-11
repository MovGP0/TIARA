/* Ghidra address: 00c85140 */
/* Ghidra symbol: FUN_00c85140 */


void FUN_00c85140(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x90))(*(longlong **)(param_1 + 0x18));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x90))(*(longlong **)(param_1 + 0x20));
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8));
  return;
}

