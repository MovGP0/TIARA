/* Ghidra address: 0114eb60 */
/* Ghidra symbol: FUN_0114eb60 */


undefined8 FUN_0114eb60(float *param_1)

{
  undefined8 uVar1;
  
  if ((((*param_1 == 0.0) && (param_1[1] == 0.0)) && (*(float *)((longlong)param_1 + 0xb) == 0.0))
     && (*(float *)((longlong)param_1 + 0xf) == 0.0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

