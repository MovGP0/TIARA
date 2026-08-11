/* Ghidra address: 00c3ec10 */
/* Ghidra symbol: FUN_00c3ec10 */


void FUN_00c3ec10(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00c3f140(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

