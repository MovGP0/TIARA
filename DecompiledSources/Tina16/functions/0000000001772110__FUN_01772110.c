/* Ghidra address: 01772110 */
/* Ghidra symbol: FUN_01772110 */


void FUN_01772110(longlong param_1,undefined8 param_2,char param_3,char param_4)

{
  if (param_4 == '\0') {
    if (param_3 != '\0') {
      FUN_00414ad0(param_1 + 0x48);
    }
    *(char *)(param_1 + 0x62) = param_3;
  }
  else {
    FUN_00414ad0(param_1 + 0x48);
  }
  return;
}

