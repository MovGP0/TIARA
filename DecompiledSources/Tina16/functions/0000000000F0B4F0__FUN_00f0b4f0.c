/* Ghidra address: 00f0b4f0 */
/* Ghidra symbol: FUN_00f0b4f0 */


undefined8 FUN_00f0b4f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00416db0(local_res10[0],&DAT_00f0b5f4);
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,L"space");
  }
  else {
    iVar1 = FUN_00416db0(local_res10[0],&DAT_00f0b61c);
    if (iVar1 == 0) {
      FUN_00414ad0(param_1,&DAT_00f0b62c);
    }
    else {
      iVar1 = FUN_00416db0(local_res10[0],&DAT_00f0b640);
      if (iVar1 == 0) {
        FUN_00414ad0(param_1,L"comma");
      }
      else {
        iVar1 = FUN_00416db0(local_res10[0],&DAT_00f0b668);
        if (iVar1 == 0) {
          FUN_00414ad0(param_1,L"semicolon");
        }
        else {
          FUN_00414ad0(param_1,&DAT_00f0b62c);
        }
      }
    }
  }
  FUN_00414480(local_res10);
  return param_1;
}

