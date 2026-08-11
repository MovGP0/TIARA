/* Ghidra address: 00cac700 */
/* Ghidra symbol: FUN_00cac700 */


void FUN_00cac700(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x38) = *(longlong *)(param_2 + 0x50) + 0x140;
  *(undefined8 *)(param_2 + 0x30) = **(undefined8 **)(param_2 + 0x38);
  **(undefined8 **)(param_2 + 0x38) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x30));
  return;
}

