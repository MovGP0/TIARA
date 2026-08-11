/* Ghidra address: 00ae6a10 */
/* Ghidra symbol: FUN_00ae6a10 */


void FUN_00ae6a10(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x90) + 0x48;
  *(undefined8 *)(param_2 + 0x58) = **(undefined8 **)(param_2 + 0x60);
  **(undefined8 **)(param_2 + 0x60) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}

