/* Ghidra address: 01b22dd0 */
/* Ghidra symbol: FUN_01b22dd0 */


void FUN_01b22dd0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *local_res18 [2];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  bool local_32;
  bool local_31;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_20 = (longlong *)FUN_00c32af0(&PTR_FUN_00c17678,1);
  local_28 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
  local_30 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
  if (local_res18[0] == &DAT_01b22fe8) {
    local_31 = true;
  }
  else if (local_res18[0] == (undefined *)0x0) {
    local_31 = false;
  }
  else {
    iVar1 = FUN_0043e420(local_res18[0],&DAT_01b22fe8);
    local_31 = iVar1 == 0;
  }
  if (local_31 == false) {
    if (local_res18[0] == &DAT_01b22ffc) {
      local_32 = true;
    }
    else if (local_res18[0] == (undefined *)0x0) {
      local_32 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_res18[0],&DAT_01b22ffc);
      local_32 = iVar1 == 0;
    }
    if (local_32 == false) {
      (**(code **)(*local_28 + 0x10))(local_28,param_1);
      (**(code **)(*local_28 + 200))(local_28,param_2);
    }
    else {
      (**(code **)(*local_30 + 0x10))(local_30,param_1);
      (**(code **)(*local_30 + 200))(local_30,param_2);
    }
  }
  else {
    (**(code **)(*local_20 + 0x10))(local_20,param_1);
    (**(code **)(*local_20 + 200))(local_20,param_2);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(local_res18);
  return;
}

