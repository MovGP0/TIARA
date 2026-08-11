/* Ghidra address: 00f839c0 */
/* Ghidra symbol: FUN_00f839c0 */


void FUN_00f839c0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x80);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}

