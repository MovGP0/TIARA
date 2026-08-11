/* Ghidra address: 0080d560 */
/* Ghidra symbol: FUN_0080d560 */


void FUN_0080d560(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 200) != *(longlong *)(param_2 + 0xc0)) {
    thunk_FUN_041cc6e2(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x2d0),0,
                       *(int *)(param_2 + 0xac) +
                       (*(int *)(param_2 + 0xb4) - *(int *)(param_2 + 0xac)) / 2,
                       *(int *)(param_2 + 0xb0) +
                       (*(int *)(param_2 + 0xb8) - *(int *)(param_2 + 0xb0)) / 2,0,0,0x1d);
  }
  FUN_007f95c0(*(undefined8 *)(param_2 + 0xa0));
  thunk_FUN_04161dbd(*(undefined8 *)(param_2 + 0x98));
  FUN_007f9270(*(undefined8 *)(param_2 + 0x90));
  return;
}

