/* Ghidra address: 01b227a0 */
/* Ghidra symbol: FUN_01b227a0 */


undefined1 FUN_01b227a0(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  *param_4 = -1;
  local_39 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      iVar2 = FUN_004170c0(local_res10,local_30[0],1);
      if (0 < iVar2) {
        (**(code **)(*param_1 + 0x18))(param_1,&local_38,iVar3);
        iVar2 = FUN_004170c0(local_res18,local_38,1);
        if (0 < iVar2) {
          local_39 = 1;
          *param_4 = iVar3;
          break;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_res10,2);
  return local_39;
}

