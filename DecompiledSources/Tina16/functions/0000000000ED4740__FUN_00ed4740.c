/* Ghidra address: 00ed4740 */
/* Ghidra symbol: FUN_00ed4740 */


int FUN_00ed4740(undefined8 param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_res18 [2];
  int local_34;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (param_4 == -1) {
        (**(code **)(*param_2 + 0x18))(param_2,&local_20,local_34);
      }
      else {
        (**(code **)(*param_2 + 0x18))(param_2,local_30,local_34);
        FUN_00ed4490(param_1,&local_20,local_30[0],param_4);
      }
      iVar2 = FUN_004170c0(local_20,local_res18[0],1);
      if (0 < iVar2) goto LAB_00ed4819;
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_34 = -1;
LAB_00ed4819:
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  FUN_00414480(local_res18);
  return local_34;
}

