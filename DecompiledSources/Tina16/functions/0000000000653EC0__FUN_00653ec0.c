/* Ghidra address: 00653ec0 */
/* Ghidra symbol: FUN_00653ec0 */


void FUN_00653ec0(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x58) = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70) + 0x310;
  *(undefined8 *)(param_2 + 0x50) = **(undefined8 **)(param_2 + 0x58);
  **(undefined8 **)(param_2 + 0x58) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  return;
}

