/* Ghidra address: 018bac00 */
/* Ghidra symbol: FUN_018bac00 */


void FUN_018bac00(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_01803cc0(param_2,&local_10,&DAT_018bace8);
  if (local_10 == 0) {
    dVar1 = 0.0;
  }
  else {
    FUN_01803cc0(param_2,&local_18,&DAT_018bace8);
    dVar1 = (double)FUN_0180d800(local_18);
  }
  FUN_00448430(&local_20,dVar1 + *(double *)(param_1 + 0x60));
  FUN_01803ed0(param_2,&DAT_018bace8,local_20);
  FUN_00414560(&local_20,3);
  return;
}

