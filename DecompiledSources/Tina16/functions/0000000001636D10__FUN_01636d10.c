/* Ghidra address: 01636d10 */
/* Ghidra symbol: FUN_01636d10 */


undefined8 FUN_01636d10(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_38 = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,iVar3);
      iVar2 = FUN_00416db0(local_30[0],local_res18[0]);
      if (iVar2 == 0) {
        local_38 = (**(code **)(*param_2 + 0x30))(param_2,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return local_38;
}

