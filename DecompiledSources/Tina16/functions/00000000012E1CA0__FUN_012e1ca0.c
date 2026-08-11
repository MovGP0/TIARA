/* Ghidra address: 012e1ca0 */
/* Ghidra symbol: FUN_012e1ca0 */


short FUN_012e1ca0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  short local_1a;
  undefined4 local_18 [2];
  undefined1 local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1a = 0x20;
  if (param_3 == 0) {
    local_1a = FUN_012e1bd0(param_1,local_res10[0]);
    if (local_1a == 0x20) {
      local_18[0] = 0;
      local_10 = 0;
      uVar1 = FUN_0044d530(&PTR_FUN_004334c0,1,
                           L"Separate character is not standard! Use comma or semicolon.",local_18,0
                          );
      FUN_004134c0(uVar1);
    }
  }
  else if (param_3 == 1) {
    local_1a = FUN_012e1bd0(param_1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return local_1a;
}

