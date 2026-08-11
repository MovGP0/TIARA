/* Ghidra address: 00618580 */
/* Ghidra symbol: FUN_00618580 */


void FUN_00618580(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  thunk_FUN_041d2921(*(undefined8 *)(param_1 + 8));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

