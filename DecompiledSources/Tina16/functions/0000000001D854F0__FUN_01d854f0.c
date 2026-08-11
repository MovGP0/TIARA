/* Ghidra address: 01d854f0 */
/* Ghidra symbol: FUN_01d854f0 */


undefined8 FUN_01d854f0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_00414ad0(param_2,L"LocalServer32");
  }
  else {
    FUN_00414ad0(param_2,L"InprocServer32");
  }
  return param_2;
}

