/* Ghidra address: 00469c90 */
/* Ghidra symbol: FUN_00469c90 */


void FUN_00469c90(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (param_3 == 3) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005a10);
    uVar1 = FUN_0044d490(&PTR_FUN_00435a90,1,local_10);
    FUN_004134c0(uVar1);
  }
  else if (param_3 - 4U < 2) {
    FUN_0041ddd0(&local_18,PTR_PTR_02005218);
    uVar1 = FUN_0044d490(&PTR_FUN_004354a0,1,local_18);
    FUN_004134c0(uVar1);
  }
  else {
    FUN_00460b80(param_1);
  }
  FUN_00414560(&local_18,2);
  return;
}

