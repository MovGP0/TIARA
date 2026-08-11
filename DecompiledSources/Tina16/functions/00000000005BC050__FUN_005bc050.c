/* Ghidra address: 005bc050 */
/* Ghidra symbol: FUN_005bc050 */


undefined8 FUN_005bc050(longlong param_1,undefined8 param_2,undefined2 param_3,short param_4)

{
  if (param_4 == -1) {
    if (*(double *)(param_1 + 0x168) == 0.0) {
      FUN_0041ddd0(param_2,PTR_PTR_02002070);
    }
    else {
      FUN_0043f750(param_2,param_3);
    }
  }
  else {
    FUN_0043f750(param_2,param_4);
  }
  return param_2;
}

