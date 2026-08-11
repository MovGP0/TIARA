/* Ghidra address: 0184ca00 */
/* Ghidra symbol: FUN_0184ca00 */


void FUN_0184ca00(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004d23a0(param_1,param_2 & 0xfffffffc);
  FUN_0184cb40(param_1);
  FUN_0184de20(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xc0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x148));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x128));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x140));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

