/* Ghidra address: 01b1caf0 */
/* Ghidra symbol: FUN_01b1caf0 */


void FUN_01b1caf0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  thunk_FUN_041bc5c8(*(undefined8 *)(param_1 + 8));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

