/* Ghidra address: 0196fcb0 */
/* Ghidra symbol: FUN_0196fcb0 */


void FUN_0196fcb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xa8) != 0) {
    FUN_00414ad0(*(longlong *)(param_2 + 0xe0) + 0x1c0,*(undefined8 *)(param_2 + 0xa8));
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0xe0) + 0xc0) = *(undefined1 *)(param_2 + 0xa7);
  return;
}

