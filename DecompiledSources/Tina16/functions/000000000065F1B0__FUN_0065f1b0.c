/* Ghidra address: 0065f1b0 */
/* Ghidra symbol: FUN_0065f1b0 */


void FUN_0065f1b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (DAT_01df5bf8 == param_1) {
    FUN_00648970(0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x310));
  FUN_0064be90(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

