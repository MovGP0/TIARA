/* Ghidra address: 00848e30 */
/* Ghidra symbol: FUN_00848e30 */


void FUN_00848e30(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(*(longlong *)(param_2 + 0x50) + 0x518) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_2 + 0x50) + 0x51c) = 0xffffffff;
  FUN_0083e670(*(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x510));
  if (*(char *)(*(longlong *)(param_2 + 0x50) + 0x478) != '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x50) + 0x180))(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}

