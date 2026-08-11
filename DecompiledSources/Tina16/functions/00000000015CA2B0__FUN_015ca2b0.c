/* Ghidra address: 015ca2b0 */
/* Ghidra symbol: FUN_015ca2b0 */


void FUN_015ca2b0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x84)) {
    if (param_2 == '\0') {
      FUN_015dcd20(param_1);
    }
    else {
      FUN_015dc950(param_1);
    }
  }
  return;
}

