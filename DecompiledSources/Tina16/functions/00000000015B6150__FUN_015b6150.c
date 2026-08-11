/* Ghidra address: 015b6150 */
/* Ghidra symbol: FUN_015b6150 */


undefined1 FUN_015b6150(short *param_1,short *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  short *local_res8;
  short *local_res10;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_26;
  undefined2 local_24;
  bool local_21;
  int local_20;
  undefined1 local_19;
  
  local_50[0] = 0;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_26 = 0;
  local_24 = 0;
  local_2a = 0;
  local_28 = 0;
  iVar2 = FUN_004426c0(param_2,&DAT_015b63c0);
  local_res8 = param_1;
  local_res10 = param_2;
  if (iVar2 == 0) {
    local_19 = 1;
  }
  else {
    while (iVar2 = FUN_004426c0(local_res10,&LAB_015b63c8), iVar2 != 0) {
      if ((*local_res8 == 0) && (*local_res10 != 0)) {
        local_19 = 0;
        goto LAB_015b635f;
      }
      if (*local_res8 == 0) {
        local_19 = 1;
        goto LAB_015b635f;
      }
      if (*local_res10 == 0x2a) {
        iVar2 = FUN_00414d00();
        local_20 = 0;
        if (-1 < iVar2 + -1) goto LAB_015b6263;
        goto code_r0x015b62a3;
      }
      if (*local_res10 == 0x3f) {
        local_res8 = local_res8 + 1;
        local_res10 = local_res10 + 1;
      }
      else {
        FUN_00416780(&local_38,*local_res8);
        FUN_00416780(&local_40,*local_res10);
        if (param_3 == '\0') {
          iVar2 = FUN_00416db0(local_38,local_40);
        }
        else {
          FUN_0043e1a0(local_50,local_38);
          FUN_0043e1a0(&local_58,local_40);
          iVar2 = FUN_00416db0(local_50[0],local_58);
        }
        local_21 = iVar2 == 0;
        if (!local_21) {
          local_19 = 0;
          goto LAB_015b635f;
        }
        local_res8 = local_res8 + 1;
        local_res10 = local_res10 + 1;
      }
    }
    local_19 = 1;
  }
  goto LAB_015b635f;
  while( true ) {
    local_20 = local_20 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) break;
LAB_015b6263:
    cVar1 = FUN_015b6150(local_res8 + local_20,local_res10 + 1,param_3);
    if (cVar1 != '\0') {
      local_19 = 1;
      goto LAB_015b635f;
    }
  }
code_r0x015b62a3:
  local_19 = 0;
LAB_015b635f:
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,2);
  return local_19;
}

