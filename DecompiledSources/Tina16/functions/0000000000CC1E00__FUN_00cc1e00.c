/* Ghidra address: 00cc1e00 */
/* Ghidra symbol: FUN_00cc1e00 */


void FUN_00cc1e00(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x78);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x78) + 0x10));
  return;
}

