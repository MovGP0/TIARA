/* Ghidra address: 01544ff0 */
/* Ghidra symbol: FUN_01544ff0 */


void FUN_01544ff0(longlong param_1)

{
  if (*(int *)(param_1 + 8) == 1) {
    FUN_0153dc10(L"block_analog_typ");
  }
  else {
    FUN_0153dc10(L"block_digital_typ");
  }
  return;
}

