/* Ghidra address: 01b224b0 */
/* Ghidra symbol: FUN_01b224b0 */


undefined1 FUN_01b224b0(longlong *param_1,undefined8 param_2,int param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_4 = -1;
  local_49 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (param_3 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - param_3) + 1;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,param_3);
      if (param_5 != '\0') {
        FUN_0043e1a0(local_40,local_30[0]);
        FUN_00414b50(local_30,local_40[0]);
        FUN_0043e1a0(&local_48,local_res10[0]);
        FUN_00414b50(local_res10,local_48);
      }
      iVar2 = FUN_00416db0(local_res10[0],local_30[0]);
      if (iVar2 == 0) {
        local_49 = 1;
        *param_4 = param_3;
        break;
      }
      param_3 = param_3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_49;
}

