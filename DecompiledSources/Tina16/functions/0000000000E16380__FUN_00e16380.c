/* Ghidra address: 00e16380 */
/* Ghidra symbol: FUN_00e16380 */


uint FUN_00e16380(uint param_1,uint param_2)

{
  if (param_1 == 0) {
    param_2 = FUN_00e16370(1,param_2);
  }
  else if (param_1 == 1) {
    param_2 = FUN_00e16370(0,param_2);
  }
  else if (param_1 == 2) {
    param_2 = FUN_00e16370(4,param_2);
  }
  else if (param_1 == 4) {
    param_2 = FUN_00e16370(2,param_2);
  }
  return param_2 | param_1;
}

