/* Ghidra address: 00f85530 */
/* Ghidra symbol: FUN_00f85530 */


void FUN_00f85530(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0xd60) = param_2;
  *(undefined8 *)(param_1 + 0xd00) = *(undefined8 *)(param_2 + 0x8d0);
  *(undefined8 *)(param_1 + 0xd08) = *(undefined8 *)(*(longlong *)(param_1 + 0xd60) + 0xa28);
  return;
}

