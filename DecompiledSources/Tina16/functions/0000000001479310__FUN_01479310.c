/* Ghidra address: 01479310 */
/* Ghidra symbol: FUN_01479310 */


void FUN_01479310(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0xa8));
  }
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0xa0));
  }
  FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0xc0) + 8));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x98));
  return;
}

