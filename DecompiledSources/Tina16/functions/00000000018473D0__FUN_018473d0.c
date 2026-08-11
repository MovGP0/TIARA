/* Ghidra address: 018473d0 */
/* Ghidra symbol: FUN_018473d0 */


void FUN_018473d0(longlong param_1)

{
  undefined8 uVar1;
  
  while (0 < *(int *)(*(longlong *)(param_1 + 8) + 0x10)) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 8),0);
    FUN_00410f20(uVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 8));
  }
  return;
}

