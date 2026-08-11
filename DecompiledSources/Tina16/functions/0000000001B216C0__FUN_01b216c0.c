/* Ghidra address: 01b216c0 */
/* Ghidra symbol: FUN_01b216c0 */


int FUN_01b216c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  int local_3c;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_3c = -1;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar4 = 0;
  iVar1 = local_3c;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar4);
      iVar3 = FUN_004170c0(local_res10[0],local_30[0],1);
      iVar1 = iVar4;
      if (0 < iVar3) break;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
      iVar1 = local_3c;
    } while (iVar2 != 0);
  }
  local_3c = iVar1;
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_3c;
}

