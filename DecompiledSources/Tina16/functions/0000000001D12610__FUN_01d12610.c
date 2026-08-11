/* Ghidra address: 01d12610 */
/* Ghidra symbol: FUN_01d12610 */


undefined4 FUN_01d12610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  double dVar3;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00b0b6e8);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00b0bbb8);
    if (cVar1 == '\0') {
      FUN_004167d0(&local_20,param_3);
      local_24 = FUN_005fdff0(param_2,local_20);
    }
    else {
      FUN_004167d0(&local_18,param_3);
      local_24 = FUN_00b0cc40(param_2,local_18);
    }
  }
  else {
    FUN_004167d0(&local_10,param_3);
    local_24 = FUN_00b0c7f0(param_2,local_10);
  }
  dVar3 = (double)FUN_01d11720(param_1);
  uVar2 = FUN_0040c770(dVar3 * (double)local_24);
  FUN_00414560(&local_20,3);
  return uVar2;
}

