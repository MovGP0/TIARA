/* Ghidra address: 00b59cd0 */
/* Ghidra symbol: FUN_00b59cd0 */


undefined1 FUN_00b59cd0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong local_res10 [3];
  undefined1 local_19;
  undefined8 local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  local_19 = 0;
  uVar1 = 0;
  if (local_res10[0] != 0) {
    uVar1 = *(uint *)(local_res10[0] + -4) >> 1;
  }
  if ((uVar1 == 0) || (0xff < uVar1)) {
    local_19 = 7;
  }
  else {
    FUN_004168b0(&local_18,local_res10[0]);
    FUN_0043ea00(&local_10,local_18);
    if (local_10 == 0) {
      local_19 = 6;
    }
    else {
      lVar2 = FUN_00b59a20(param_1,local_res10[0]);
      if (lVar2 != 0) {
        local_19 = 6;
      }
    }
  }
  FUN_00414560(&local_18,2);
  FUN_00414520(local_res10);
  return local_19;
}

