/* Ghidra address: 0176ace0 */
/* Ghidra symbol: FUN_0176ace0 */


void FUN_0176ace0(undefined8 param_1,longlong param_2)

{
  if ((*(longlong *)(param_2 + 0x90) != *(longlong *)(param_2 + 0x88)) &&
     (*(longlong *)(param_2 + 0x88) != 0)) {
    FUN_00414b50(param_2 + 0x80,*(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x10));
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  if (*(longlong *)(param_2 + 0x80) != 0) {
    FUN_004412f0(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

