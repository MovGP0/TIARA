/* Ghidra address: 00ae6a50 */
/* Ghidra symbol: FUN_00ae6a50 */


void FUN_00ae6a50(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x90) + 0xe8;
  *(undefined8 *)(param_2 + 0x48) = **(undefined8 **)(param_2 + 0x50);
  **(undefined8 **)(param_2 + 0x50) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  return;
}

