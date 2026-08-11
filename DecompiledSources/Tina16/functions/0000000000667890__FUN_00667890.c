/* Ghidra address: 00667890 */
/* Ghidra symbol: FUN_00667890 */


void FUN_00667890(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xa8) = *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x48);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0xa8) + 0x10));
  return;
}

