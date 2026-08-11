/* Ghidra address: 00b078d0 */
/* Ghidra symbol: FUN_00b078d0 */


void FUN_00b078d0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4d8));
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

