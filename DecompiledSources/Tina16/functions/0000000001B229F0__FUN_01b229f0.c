/* Ghidra address: 01b229f0 */
/* Ghidra symbol: FUN_01b229f0 */


void FUN_01b229f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_38,iVar2);
      FUN_00450070(local_30,local_38,local_res10,local_res18,1);
      (**(code **)(*param_1 + 0x40))(param_1,iVar2,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res10,2);
  return;
}

