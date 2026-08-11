/* Ghidra address: 01500140 */
/* Ghidra symbol: FUN_01500140 */


void FUN_01500140(longlong param_1)

{
  if ((*(char *)(param_1 + 0x74b) == '\0') && (*(char *)(param_1 + 0x74c) != '\0')) {
    FUN_014ffe80(param_1);
  }
  if (*(short *)(param_1 + 0x34) != 8) {
    FUN_00805200(param_1);
  }
  return;
}

