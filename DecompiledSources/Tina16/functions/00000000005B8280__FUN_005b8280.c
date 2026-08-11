/* Ghidra address: 005b8280 */
/* Ghidra symbol: FUN_005b8280 */


void FUN_005b8280(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_005b8110(param_1);
  FUN_00419430(param_1 + 8,&DAT_005b7570);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

