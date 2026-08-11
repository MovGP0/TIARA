/* Ghidra address: 019805c0 */
/* Ghidra symbol: FUN_019805c0 */


void FUN_019805c0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) != 1) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),param_2);
    FUN_00410f20(uVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x10),param_2);
    if (param_2 == *(int *)(param_1 + 0x18)) {
      FUN_01980710(param_1,*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1);
    }
    else {
      *(int *)(param_1 + 0x18) = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
    }
  }
  return;
}

