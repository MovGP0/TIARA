/* Ghidra address: 004d1de0 */
/* Ghidra symbol: FUN_004d1de0 */


void FUN_004d1de0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x1b)) {
    if (param_2 == '\0') {
      FUN_004d1ec0();
    }
    else {
      FUN_004d1e40();
    }
  }
  return;
}

