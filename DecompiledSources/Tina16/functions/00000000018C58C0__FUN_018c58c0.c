/* Ghidra address: 018c58c0 */
/* Ghidra symbol: FUN_018c58c0 */


void FUN_018c58c0(longlong param_1)

{
  undefined8 uVar1;
  
  while (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x10)) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 8),0);
    FUN_00410f20(uVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 8));
  }
  return;
}

