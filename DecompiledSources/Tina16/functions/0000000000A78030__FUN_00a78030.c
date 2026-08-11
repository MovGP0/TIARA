/* Ghidra address: 00a78030 */
/* Ghidra symbol: FUN_00a78030 */


void FUN_00a78030(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x4b0)) {
    *(char *)(param_1 + 0x4b0) = param_2;
    if (param_2 == '\0') {
      FUN_0064e6f0();
    }
    else {
      FUN_0064e700();
    }
  }
  return;
}

