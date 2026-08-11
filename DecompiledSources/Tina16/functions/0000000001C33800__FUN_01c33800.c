/* Ghidra address: 01c33800 */
/* Ghidra symbol: FUN_01c33800 */


bool FUN_01c33800(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  bool local_41;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_0043ea00(local_30,local_res10);
  FUN_0043e1a0(&local_10,local_30[0]);
  FUN_0043ea00(&local_38,local_res8);
  FUN_0043e1a0(&local_18,local_38);
  if (param_3 == '\0') {
    iVar2 = FUN_004170c0(&DAT_01c339dc,local_18,1);
    if (iVar2 < 1) {
      cVar1 = FUN_01c33730(local_18);
      if (cVar1 != '\0') {
        cVar1 = FUN_01c33730(local_10);
        if (cVar1 != '\0') {
          iVar2 = FUN_00416db0(local_18,local_10);
          local_41 = iVar2 == 0;
          goto code_r0x01c33954;
        }
      }
      cVar1 = FUN_01c33730(local_18);
      if (cVar1 == '\0') {
        iVar2 = FUN_00416db0(local_10,local_18);
        local_41 = iVar2 == 0;
      }
      else {
        local_41 = false;
      }
    }
    else {
      FUN_00416dc0(&local_40,local_18,1,iVar2 + -1);
      iVar2 = FUN_00416db0(local_40,local_10);
      local_41 = iVar2 == 0;
    }
  }
  else {
    iVar2 = FUN_00416db0(local_10,local_18);
    local_41 = iVar2 == 0;
  }
code_r0x01c33954:
  FUN_00414560(&local_40,3);
  FUN_00414560(&local_20,3);
  FUN_00414560(&local_res8,2);
  return local_41;
}

