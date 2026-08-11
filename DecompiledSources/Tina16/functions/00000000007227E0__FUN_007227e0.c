/* Ghidra address: 007227e0 */
/* Ghidra symbol: FUN_007227e0 */


void FUN_007227e0(undefined8 param_1,longlong param_2)

{
  FUN_007f95c0(*(undefined8 *)(param_2 + 0x58));
  thunk_FUN_04161dbd(*(undefined8 *)(param_2 + 0x50));
  FUN_007f9270(*(undefined8 *)(param_2 + 0x48));
  *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x70) + 0x88;
  *(undefined8 *)(param_2 + 0x38) = **(undefined8 **)(param_2 + 0x40);
  **(undefined8 **)(param_2 + 0x40) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  return;
}

