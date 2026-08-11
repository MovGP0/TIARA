/* Ghidra address: 00741810 */
/* Ghidra symbol: FUN_00741810 */


void FUN_00741810(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x318));
  FUN_0065f1b0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

