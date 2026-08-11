/* Ghidra address: 01437510 */
/* Ghidra symbol: FUN_01437510 */


void FUN_01437510(undefined8 param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *PTR_DAT_020039a8 = DAT_0210e4c0;
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

