/* Ghidra address: 00a997b0 */
/* Ghidra symbol: FUN_00a997b0 */


void FUN_00a997b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xf0));
  FUN_00a93170(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

