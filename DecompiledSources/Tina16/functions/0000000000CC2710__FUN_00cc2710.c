/* Ghidra address: 00cc2710 */
/* Ghidra symbol: FUN_00cc2710 */


void FUN_00cc2710(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x78);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}

