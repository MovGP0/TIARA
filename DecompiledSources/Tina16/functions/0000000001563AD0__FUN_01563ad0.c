/* Ghidra address: 01563ad0 */
/* Ghidra symbol: FUN_01563ad0 */


undefined8 FUN_01563ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_50[0] = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_2,&LAB_01563c38);
  iVar1 = (**(code **)(*param_4 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_4 + 0x18))(param_4,local_30,iVar3);
      FUN_01b218c0(local_30[0],&local_38,&local_40);
      FUN_0043e130(local_50,local_res18[0]);
      FUN_0043e130(&local_58,local_38);
      iVar2 = FUN_00416db0(local_50[0],local_58);
      if (iVar2 == 0) {
        FUN_00414ad0(param_2,local_40);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return param_2;
}

