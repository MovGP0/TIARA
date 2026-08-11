/* Ghidra address: 00a7af40 */
/* Ghidra symbol: FUN_00a7af40 */


void FUN_00a7af40(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00a7af90(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

