/* Ghidra address: 00685570 */
/* Ghidra symbol: FUN_00685570 */


void FUN_00685570(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x550));
  FUN_00683790(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

