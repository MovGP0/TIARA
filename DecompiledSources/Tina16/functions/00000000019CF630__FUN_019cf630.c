/* Ghidra address: 019cf630 */
/* Ghidra symbol: FUN_019cf630 */


void FUN_019cf630(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xb8) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x20) + 0x70);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x10));
  *(undefined8 *)(param_2 + 0xa8) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xb0) + 0x20) + 0x78);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x10));
  return;
}

