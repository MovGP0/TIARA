/* Ghidra address: 00ea4370 */
/* Ghidra symbol: FUN_00ea4370 */


undefined8 FUN_00ea4370(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x504) < 1) {
    FUN_00ea3290();
  }
  FUN_00ea46f0(param_1,param_2,0);
  return param_2;
}

