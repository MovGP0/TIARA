/* Ghidra address: 0156ab10 */
/* Ghidra symbol: FUN_0156ab10 */


undefined4 FUN_0156ab10(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e1a0(&local_10,local_res8[0]);
  iVar1 = FUN_00416db0(local_10,L"std_logic");
  if (iVar1 == 0) {
    local_34 = 3;
  }
  else {
    FUN_0043e1a0(&local_18,local_res8[0]);
    iVar1 = FUN_00416db0(local_18,L"boolean");
    if (iVar1 == 0) {
      local_34 = 6;
    }
    else {
      FUN_0043e1a0(&local_20,local_res8[0]);
      iVar1 = FUN_00416db0(local_20,&DAT_0156acd4);
      if (iVar1 == 0) {
        local_34 = 2;
      }
      else {
        FUN_0043e1a0(&local_28,local_res8[0]);
        iVar1 = FUN_00416db0(local_28,L"integer");
        if (iVar1 == 0) {
          local_34 = 1;
        }
        else {
          FUN_0043e1a0(&local_30,local_res8[0]);
          iVar1 = FUN_00416db0(local_30,L"real");
          if (iVar1 == 0) {
            local_34 = 5;
          }
          else {
            local_34 = 0xffffffff;
          }
        }
      }
    }
  }
  FUN_00414560(&local_30,5);
  FUN_00414480(local_res8);
  return local_34;
}

