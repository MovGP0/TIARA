/* Ghidra address: 004c19f0 */
/* Ghidra symbol: FUN_004c19f0 */


void FUN_004c19f0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x158) == 0) {
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x68));
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x180) + 0x68) = 0;
  return;
}

