/* Ghidra address: 00b06bf0 */
/* Ghidra symbol: FUN_00b06bf0 */


void FUN_00b06bf0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x4a8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

