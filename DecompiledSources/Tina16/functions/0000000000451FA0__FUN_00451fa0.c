/* Ghidra address: 00451fa0 */
/* Ghidra symbol: FUN_00451fa0 */


void FUN_00451fa0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004520b0(param_1);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0x20));
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 0x28));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

