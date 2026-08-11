/* Ghidra address: 00537120 */
/* Ghidra symbol: FUN_00537120 */


void FUN_00537120(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0xb0) + 0x98);
  FUN_00419430(param_2 + 0x80,*(undefined8 *)(param_2 + 0x88));
  return;
}

