/* Ghidra address: 01b1f7e0 */
/* Ghidra symbol: FUN_01b1f7e0 */


int FUN_01b1f7e0(undefined8 param_1,longlong param_2,longlong param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong local_res10;
  longlong local_res18;
  undefined1 auStack_78 [32];
  int *local_58;
  int *local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_48 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_2c = *local_48;
  local_30 = *param_5;
  local_34 = *local_48;
  local_38 = *param_5;
  local_58 = &local_2c;
  FUN_01b1f700(auStack_78,local_res10,*local_48,&local_34);
  local_58 = &local_30;
  FUN_01b1f700(auStack_78,local_res18,*param_5,&local_38);
  iVar1 = *local_48;
  *local_48 = local_34 + -1;
  iVar2 = *param_5;
  *param_5 = local_38 + -1;
  if (local_34 - local_2c < local_38 - local_30) {
    local_3c = -1;
  }
  else {
    iVar3 = local_2c;
    iVar4 = local_30;
    if (local_38 - local_30 < local_34 - local_2c) {
      local_3c = 1;
    }
    else {
      for (; iVar3 <= *local_48; iVar3 = iVar3 + 1) {
        local_3c = FUN_01b1f6c0(param_1,*(undefined2 *)(local_res10 + -2 + (longlong)iVar3 * 2),
                                *(undefined2 *)(local_res18 + -2 + (longlong)iVar4 * 2));
        if (local_3c != 0) goto LAB_01b1f95c;
        iVar4 = iVar4 + 1;
      }
      if (local_34 - iVar1 == local_38 - iVar2) {
        local_3c = 0;
      }
      else if (local_38 - iVar2 < local_34 - iVar1) {
        local_3c = -1;
      }
      else {
        local_3c = 1;
      }
    }
  }
LAB_01b1f95c:
  FUN_00414560(&local_res10,2);
  return local_3c;
}

