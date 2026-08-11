/* Ghidra address: 00ad1a00 */
/* Ghidra symbol: FUN_00ad1a00 */


void FUN_00ad1a00(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x90) + 0xe8;
  *(undefined8 *)(param_2 + 0x50) = **(undefined8 **)(param_2 + 0x58);
  **(undefined8 **)(param_2 + 0x58) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x50));
  return;
}

