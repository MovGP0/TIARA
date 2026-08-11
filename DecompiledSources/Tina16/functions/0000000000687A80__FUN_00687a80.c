/* Ghidra address: 00687a80 */
/* Ghidra symbol: FUN_00687a80 */


void FUN_00687a80(longlong param_1,longlong param_2)

{
  FUN_00654e40(param_1,param_2);
  if (*(char *)(param_1 + 0x491) != '\0') {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
  }
  return;
}

