/* Ghidra address: 00cf4020 */
/* Ghidra symbol: FUN_00cf4020 */


void FUN_00cf4020(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00cddbf0(param_1,&local_10);
  iVar1 = FUN_00416db0(param_2,local_10);
  if (iVar1 != 0) {
    FUN_00cddc80(param_1,param_2);
    FUN_00cddbf0(param_1,&local_18);
    FUN_00cf2a80(local_18,param_1 + 0x40,param_1 + 0x38);
  }
  FUN_00414560(&local_18,2);
  return;
}

