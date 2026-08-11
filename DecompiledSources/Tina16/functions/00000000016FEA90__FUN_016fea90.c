/* Ghidra address: 016fea90 */
/* Ghidra symbol: FUN_016fea90 */


void FUN_016fea90(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (param_2 == 0) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_18,param_1);
    FUN_016fd940(local_18);
  }
  else {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_10,param_1);
    FUN_016fd9b0(local_10,param_2);
  }
  FUN_00414560(&local_18,2);
  return;
}

