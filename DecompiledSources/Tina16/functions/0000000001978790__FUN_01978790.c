/* Ghidra address: 01978790 */
/* Ghidra symbol: FUN_01978790 */


void FUN_01978790(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x708));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x718));
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

