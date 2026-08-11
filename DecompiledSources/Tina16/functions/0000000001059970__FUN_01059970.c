/* Ghidra address: 01059970 */
/* Ghidra symbol: FUN_01059970 */


undefined8 FUN_01059970(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40 [2];
  short *local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = (short *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(*param_3 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_48,iVar2);
      FUN_00416ba0(local_40,local_res10[0],local_48);
      (**(code **)(*param_3 + 0x40))(param_3,iVar2,local_40[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b37d0(param_3,local_30);
  iVar1 = 0;
  if (local_30[0] != (short *)0x0) {
    iVar1 = *(int *)(local_30[0] + -2);
  }
  if ((0 < iVar1) && (*local_30[0] != 0x22)) {
    FUN_00416cd0(local_30,3,&LAB_01059af4,local_30[0],&LAB_01059af4);
  }
  FUN_00414ad0(param_1,local_30[0]);
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return param_1;
}

