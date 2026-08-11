/* Ghidra address: 00c32c70 */
/* Ghidra symbol: FUN_00c32c70 */


void FUN_00c32c70(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00c32d00(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

