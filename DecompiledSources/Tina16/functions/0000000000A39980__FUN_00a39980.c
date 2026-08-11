/* Ghidra address: 00a39980 */
/* Ghidra symbol: FUN_00a39980 */


void FUN_00a39980(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00a39570(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x160));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x148));
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

