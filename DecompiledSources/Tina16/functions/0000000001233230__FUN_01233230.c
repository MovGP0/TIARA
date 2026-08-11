/* Ghidra address: 01233230 */
/* Ghidra symbol: FUN_01233230 */


void FUN_01233230(longlong param_1)

{
  if (*(double *)(PTR_DAT_020040b8 + 0xb0) <= 1.0 && *(double *)(PTR_DAT_020040b8 + 0xb0) != 1.0) {
    *(undefined8 *)(PTR_DAT_020040b8 + 0xb0) = 0x3ff0000000000000;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x800),*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
  return;
}

