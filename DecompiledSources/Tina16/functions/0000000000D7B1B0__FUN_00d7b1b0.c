/* Ghidra address: 00d7b1b0 */
/* Ghidra symbol: FUN_00d7b1b0 */


void FUN_00d7b1b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x130));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x138));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x140));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x148));
  FUN_00d78760(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

