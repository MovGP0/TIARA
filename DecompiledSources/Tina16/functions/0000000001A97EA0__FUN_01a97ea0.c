/* Ghidra address: 01a97ea0 */
/* Ghidra symbol: FUN_01a97ea0 */


void FUN_01a97ea0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    FUN_00410f20(*(longlong *)(param_1 + 8));
    thunk_FUN_041a19a1(uVar1,*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_041a19a1(uVar1,*(undefined8 *)(param_1 + 0x18));
    thunk_FUN_041a19a1(uVar1,*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

