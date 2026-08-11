/* Ghidra address: 00618c60 */
/* Ghidra symbol: FUN_00618c60 */


void FUN_00618c60(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004278e0(param_1 + 8);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

