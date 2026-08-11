/* Ghidra address: 00d49be0 */
/* Ghidra symbol: FUN_00d49be0 */


void FUN_00d49be0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(char *)(param_1 + 0x65) != '\0') {
    thunk_FUN_040dee27(*(undefined8 *)(param_1 + 8),10);
  }
  FUN_00788320(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

