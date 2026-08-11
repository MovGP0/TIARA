/* Ghidra address: 010c86f0 */
/* Ghidra symbol: FUN_010c86f0 */


void FUN_010c86f0(longlong param_1)

{
  if (*(double *)(param_1 + 8) <= 0.0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 8) = 0x3ff0000000000000;
  }
  return;
}

