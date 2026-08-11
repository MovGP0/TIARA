/* Ghidra address: 01aa8e20 */
/* Ghidra symbol: FUN_01aa8e20 */


longlong FUN_01aa8e20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x41e8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x41e8));
    *(undefined8 *)(param_1 + 0x41e8) = 0;
  }
  return param_1;
}

