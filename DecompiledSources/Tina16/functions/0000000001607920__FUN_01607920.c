/* Ghidra address: 01607920 */
/* Ghidra symbol: FUN_01607920 */


void FUN_01607920(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x5f8));
  if (*(longlong *)(param_2 + 0x5f0) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x5f0));
  }
  if (*(longlong *)(param_2 + 0x5e8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x5e8));
  }
  if (*(longlong *)(param_2 + 0x5e0) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x5e0));
  }
  if (*(longlong *)(param_2 + 0x5d8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x5d8));
  }
  if (*(longlong *)(param_2 + 0x5d0) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x5d0));
  }
  if (*(longlong *)(param_2 + 0x5c8) != 0) {
    uVar1 = FUN_00442620(param_2 + 0x1c6,*(undefined8 *)(param_2 + 0x1b8));
    FUN_015fcd60(*(undefined8 *)(param_2 + 0x5c8),uVar1,0);
  }
  return;
}

