/* Ghidra address: 015d4bc0 */
/* Ghidra symbol: FUN_015d4bc0 */


char FUN_015d4bc0(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_58;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  char local_19;
  
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_3 == 0) {
    local_19 = '\0';
  }
  else {
    FUN_015bf370(&local_28,param_3,&DAT_015d4e4c,&DAT_015d4e60,0);
    local_34 = 0;
    if (param_3 != 0) {
      local_34 = *(int *)(param_3 + -4);
    }
    if (*(short *)(param_3 + -2 + (longlong)local_34 * 2) == 0x2e) {
      local_38 = 0;
      if (local_28 != 0) {
        local_38 = *(int *)(local_28 + -4);
      }
      FUN_00416dc0(&local_28,local_28,1,local_38 + -1);
    }
    local_3c = 0;
    if (param_2 != 0) {
      local_3c = *(int *)(param_2 + -4);
    }
    if (*(short *)(param_2 + -2 + (longlong)local_3c * 2) == 0x2e) {
      local_40 = 0;
      if (param_2 != 0) {
        local_40 = *(int *)(param_2 + -4);
      }
      FUN_00416dc0(&local_30,param_2,1,local_40 + -1);
      uVar2 = FUN_00416740(local_30);
      uVar3 = FUN_00416740(local_28);
      local_19 = FUN_015bf330(uVar2,uVar3,1);
    }
    else {
      uVar2 = FUN_00416740(param_2);
      uVar3 = FUN_00416740(local_28);
      local_19 = FUN_015bf330(uVar2,uVar3,1);
    }
    if (local_19 != '\0') {
      local_44 = 0;
      if (param_3 != 0) {
        local_44 = *(int *)(param_3 + -4);
      }
      if (*(short *)(param_3 + -2 + (longlong)local_44 * 2) == 0x2e) {
        FUN_015bf830(&local_50,param_2);
        iVar1 = FUN_00416db0(local_50,&LAB_015d4e74);
        if ((iVar1 == 0) || (FUN_015bf830(&local_58,param_2), local_58 == 0)) {
          local_19 = '\x01';
        }
        else {
          local_19 = '\0';
        }
      }
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_30,2);
  return local_19;
}

