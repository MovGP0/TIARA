/* Ghidra address: 01af2a90 */
/* Ghidra symbol: FUN_01af2a90 */


void FUN_01af2a90(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x48) = param_2;
  if (param_2 != 0) {
    FUN_012db220(param_2,*(undefined8 *)(param_1 + 0x38));
  }
  return;
}

