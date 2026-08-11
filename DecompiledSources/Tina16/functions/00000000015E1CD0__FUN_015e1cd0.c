/* Ghidra address: 015e1cd0 */
/* Ghidra symbol: FUN_015e1cd0 */


void FUN_015e1cd0(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0x111) = *(undefined1 *)(param_2 + 0x4d);
  if (*(longlong *)(*(longlong *)(param_2 + 0x60) + 0x238) != 0) {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x238));
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x238) = 0;
  return;
}

