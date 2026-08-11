/* Ghidra address: 01af2a70 */
/* Ghidra symbol: FUN_01af2a70 */


void FUN_01af2a70(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x798) = param_2;
  }
  return;
}

