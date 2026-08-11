/* Ghidra address: 0195e390 */
/* Ghidra symbol: FUN_0195e390 */


void FUN_0195e390(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x40));
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

