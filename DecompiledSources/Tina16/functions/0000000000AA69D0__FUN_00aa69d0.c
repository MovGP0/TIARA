/* Ghidra address: 00aa69d0 */
/* Ghidra symbol: FUN_00aa69d0 */


void FUN_00aa69d0(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x80) + 0x88;
  *(undefined8 *)(param_2 + 0x50) = **(undefined8 **)(param_2 + 0x58);
  **(undefined8 **)(param_2 + 0x58) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  return;
}

