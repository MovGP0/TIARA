/* Ghidra address: 006d89f0 */
/* Ghidra symbol: FUN_006d89f0 */


void FUN_006d89f0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x498));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x490));
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

