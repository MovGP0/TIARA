/* Ghidra address: 006da6b0 */
/* Ghidra symbol: FUN_006da6b0 */


void FUN_006da6b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x490));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4c0));
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x498));
  }
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

