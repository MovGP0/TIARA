/* Ghidra address: 015fba60 */
/* Ghidra symbol: FUN_015fba60 */


void FUN_015fba60(longlong *param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                 undefined1 param_6)

{
  int iVar1;
  undefined8 local_res20;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  (**(code **)(*param_1 + 0x28))(param_1);
  if (param_2 <= param_3) {
    iVar1 = (param_3 - param_2) + 1;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,param_2);
      FUN_00450070(local_40,local_30[0],local_res20,param_5,param_6);
      FUN_00414b50(local_30,local_40[0]);
      (**(code **)(*param_1 + 0x40))(param_1,param_2,local_30[0]);
      param_2 = param_2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414560(&local_res20,2);
  return;
}

