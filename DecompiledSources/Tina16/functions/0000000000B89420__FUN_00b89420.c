/* Ghidra address: 00b89420 */
/* Ghidra symbol: FUN_00b89420 */


void FUN_00b89420(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (DAT_02019900 == param_1) {
    DAT_02019900 = 0;
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

