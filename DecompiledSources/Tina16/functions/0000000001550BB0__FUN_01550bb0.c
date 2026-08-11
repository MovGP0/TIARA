/* Ghidra address: 01550bb0 */
/* Ghidra symbol: FUN_01550bb0 */


undefined8 FUN_01550bb0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x9d9) == '\0') {
    FUN_00414ad0(param_2,L"no_memory_comp");
  }
  else {
    FUN_00414ad0(param_2,L"memory_comp");
  }
  return param_2;
}

