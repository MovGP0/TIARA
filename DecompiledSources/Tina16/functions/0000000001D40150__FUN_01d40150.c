/* Ghidra address: 01d40150 */
/* Ghidra symbol: FUN_01d40150 */


undefined4 FUN_01d40150(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined4 local_3c;
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_3c = 0xffffffff;
  iVar1 = (**(code **)(*param_1 + 0x1c8))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x298))(param_1,&local_30,iVar3);
      iVar2 = FUN_00416db0(local_30,local_res10[0]);
      if (iVar2 == 0) {
        local_3c = (**(code **)(*param_1 + 0x210))(param_1,iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return local_3c;
}

