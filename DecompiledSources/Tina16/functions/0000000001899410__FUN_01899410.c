/* Ghidra address: 01899410 */
/* Ghidra symbol: FUN_01899410 */


void FUN_01899410(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

