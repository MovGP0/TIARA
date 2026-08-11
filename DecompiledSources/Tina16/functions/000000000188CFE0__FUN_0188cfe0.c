/* Ghidra address: 0188cfe0 */
/* Ghidra symbol: FUN_0188cfe0 */


void FUN_0188cfe0(longlong param_1)

{
  undefined8 uVar1;
  
  while (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10)) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x20),0);
    FUN_00410f20(uVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x20));
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  return;
}

