/* Ghidra address: 00bc1470 */
/* Ghidra symbol: FUN_00bc1470 */


void FUN_00bc1470(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  FUN_00bc1530(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

