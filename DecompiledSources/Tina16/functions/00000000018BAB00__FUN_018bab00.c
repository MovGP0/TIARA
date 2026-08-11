/* Ghidra address: 018bab00 */
/* Ghidra symbol: FUN_018bab00 */


void FUN_018bab00(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_01803cc0(param_2,&local_10,&LAB_018babf8);
  if (local_10 == 0) {
    dVar1 = 0.0;
  }
  else {
    FUN_01803cc0(param_2,&local_18,&LAB_018babf8);
    dVar1 = (double)FUN_0180d800(local_18);
  }
  if (*(double *)(param_1 + 0x68) != 0.0) {
    FUN_00448430(&local_20,dVar1 + *(double *)(param_1 + 0x68));
    FUN_01803ed0(param_2,&LAB_018babf8,local_20);
  }
  FUN_00414560(&local_20,3);
  return;
}

