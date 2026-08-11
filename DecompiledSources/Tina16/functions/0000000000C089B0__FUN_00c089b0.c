/* Ghidra address: 00c089b0 */
/* Ghidra symbol: FUN_00c089b0 */


void FUN_00c089b0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 == '\0') {
    local_20[0] = FUN_00bfaa10(param_1);
    FUN_00c0fa70(param_1,local_20);
  }
  else {
    local_20[0] = FUN_00bf2b90(param_1);
    FUN_00c0fa70(param_1,local_20);
  }
  return;
}

