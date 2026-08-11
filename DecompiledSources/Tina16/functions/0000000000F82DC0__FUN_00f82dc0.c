/* Ghidra address: 00f82dc0 */
/* Ghidra symbol: FUN_00f82dc0 */


void FUN_00f82dc0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x80);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x10));
  return;
}

