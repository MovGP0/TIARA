/* Ghidra address: 00ad2f50 */
/* Ghidra symbol: FUN_00ad2f50 */


void FUN_00ad2f50(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x90) + 0xe8;
  *(undefined8 *)(param_2 + 0x58) = **(undefined8 **)(param_2 + 0x60);
  **(undefined8 **)(param_2 + 0x60) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

