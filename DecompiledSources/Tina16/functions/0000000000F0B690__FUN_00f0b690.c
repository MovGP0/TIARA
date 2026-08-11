/* Ghidra address: 00f0b690 */
/* Ghidra symbol: FUN_00f0b690 */


undefined8 FUN_00f0b690(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],L"space");
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,&DAT_00f0b7ac);
  }
  else {
    iVar1 = FUN_00416db0(local_res10[0],&DAT_00f0b7bc);
    if (iVar1 == 0) {
      FUN_00414ad0(param_1,&DAT_00f0b7d0);
    }
    else {
      iVar1 = FUN_00416db0(local_res10[0],L"comma");
      if (iVar1 == 0) {
        FUN_00414ad0(param_1,&DAT_00f0b7f8);
      }
      else {
        iVar1 = FUN_00416db0(local_res10[0],L"semicolon");
        if (iVar1 == 0) {
          FUN_00414ad0(param_1,&LAB_00f0b828);
        }
        else {
          FUN_00414ad0(param_1,&DAT_00f0b7d0);
        }
      }
    }
  }
  FUN_00414480(local_res10);
  return param_1;
}

