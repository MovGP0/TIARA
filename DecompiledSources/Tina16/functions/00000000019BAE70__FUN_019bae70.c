/* Ghidra address: 019bae70 */
/* Ghidra symbol: FUN_019bae70 */


void FUN_019bae70(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4b0));
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

