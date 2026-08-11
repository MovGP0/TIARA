/* Ghidra address: 01d314e0 */
/* Ghidra symbol: FUN_01d314e0 */


void FUN_01d314e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  int local_1c [3];
  
  local_28 = 0;
  FUN_01d30f00(param_1,local_1c,4);
  if (local_1c[0] < 1) {
    FUN_00414480(param_2);
  }
  else {
    uVar1 = FUN_00409570((longlong)local_1c[0]);
    FUN_01d30f00(param_1,uVar1,local_1c[0]);
    FUN_004147f0(&local_28,uVar1,local_1c[0],0);
    FUN_004095f0(uVar1);
    FUN_00416880(param_2,local_28);
  }
  FUN_004144d0(&local_28);
  return;
}

