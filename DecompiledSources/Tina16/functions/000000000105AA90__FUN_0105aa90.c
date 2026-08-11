/* Ghidra address: 0105aa90 */
/* Ghidra symbol: FUN_0105aa90 */


undefined4 FUN_0105aa90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined4 local_c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_c = 0;
  iVar1 = FUN_004170c0(L"atsam",local_res10[0],1);
  if (iVar1 < 1) {
    iVar1 = FUN_00416db0(local_res10[0],L"atmega4809");
    if (iVar1 == 0) {
      local_c = 2;
    }
    else {
      iVar1 = FUN_00416db0(local_res10[0],L"nrf51822");
      if (iVar1 == 0) {
        local_c = 3;
      }
    }
  }
  else {
    local_c = 1;
  }
  FUN_00414480(local_res10);
  return local_c;
}

