/* Ghidra address: 018b80f0 */
/* Ghidra symbol: FUN_018b80f0 */


void FUN_018b80f0(longlong param_1)

{
  undefined8 uVar1;
  
  while (0 < *(int *)(*(longlong *)(param_1 + 0x88) + 0x10)) {
    uVar1 = FUN_004aeac0(*(longlong *)(param_1 + 0x88),0);
    FUN_00410f20(uVar1);
    FUN_004ae870(*(undefined8 *)(param_1 + 0x88));
  }
  return;
}

