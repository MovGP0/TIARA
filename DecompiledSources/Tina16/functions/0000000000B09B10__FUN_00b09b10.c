/* Ghidra address: 00b09b10 */
/* Ghidra symbol: FUN_00b09b10 */


void FUN_00b09b10(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x628));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x630));
  FUN_0084d770(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

