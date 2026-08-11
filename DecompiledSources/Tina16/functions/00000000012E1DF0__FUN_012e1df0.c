/* Ghidra address: 012e1df0 */
/* Ghidra symbol: FUN_012e1df0 */


void FUN_012e1df0(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 *param_4,
                 int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined2 local_res18;
  undefined8 *local_res20;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  int local_1c;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610();
  if (param_5 == 0) {
    uVar3 = FUN_00448650(local_res10,PTR_DAT_02004830);
    *local_res20 = uVar3;
  }
  else {
    local_4c = param_5;
    local_14 = 0;
    if (-1 < param_5) {
      local_4c = param_5 + 1;
      local_28 = local_res20;
      do {
        FUN_00416780(&local_38,local_res18);
        iVar1 = FUN_004170c0(local_38,local_res10,1);
        if (iVar1 + -1 < 1) {
          uVar3 = FUN_00448650(local_res10,PTR_DAT_02004830);
          *local_28 = uVar3;
        }
        else {
          FUN_00414480(&local_10);
          FUN_00416780(&local_40,local_res18);
          local_1c = FUN_004170c0(local_40,local_res10,1);
          local_1c = local_1c + -1;
          FUN_00416dc0(&local_10,local_res10,1,local_1c);
          uVar3 = FUN_00448650(local_10,PTR_DAT_02004830);
          *local_28 = uVar3;
          FUN_00414480(&local_10);
        }
        FUN_00416780(&local_48,local_res18);
        uVar2 = FUN_004170c0(local_48,local_res10,1);
        FUN_00416e20(&local_res10,1,uVar2);
        local_28 = local_28 + 1;
        local_4c = local_4c + -1;
      } while (local_4c != 0);
    }
  }
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res10);
  return;
}

