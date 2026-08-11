/* Ghidra address: 00abef70 */
/* Ghidra symbol: FUN_00abef70 */


void FUN_00abef70(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00a9b850(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

