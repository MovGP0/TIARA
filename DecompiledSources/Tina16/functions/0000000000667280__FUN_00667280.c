/* Ghidra address: 00667280 */
/* Ghidra symbol: FUN_00667280 */


void FUN_00667280(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x78) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0xe0) + 0x48);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x78) + 0x10));
  return;
}

