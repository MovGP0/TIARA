/* Ghidra address: 00653e20 */
/* Ghidra symbol: FUN_00653e20 */


void FUN_00653e20(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x70)) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x310) = 0;
  }
  return;
}

