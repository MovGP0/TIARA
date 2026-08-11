/* Ghidra address: 00a274a0 */
/* Ghidra symbol: FUN_00a274a0 */


undefined8 FUN_00a274a0(undefined8 param_1,longlong param_2,short *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if ((iVar1 < 1) || (*(short *)(param_2 + -2 + (longlong)iVar1 * 2) != 0x5c)) {
    iVar1 = 0;
    if (param_3 != (short *)0x0) {
      iVar1 = *(int *)(param_3 + -2);
    }
    if ((iVar1 < 1) || (*param_3 != 0x5c)) {
      FUN_00416cd0(param_1,3,param_2,&LAB_00a275c4,param_3);
    }
    else {
      FUN_00416ba0(param_1,param_2,param_3);
    }
  }
  else {
    iVar2 = 0;
    if (param_3 != (short *)0x0) {
      iVar2 = *(int *)(param_3 + -2);
    }
    if ((iVar2 < 1) || (*param_3 != 0x5c)) {
      FUN_00416ba0(param_1,param_2,param_3);
    }
    else {
      FUN_00416dc0(&local_10,param_2,1,iVar1 + -1);
      FUN_00416ba0(param_1,local_10,param_3);
    }
  }
  FUN_00414480(&local_10);
  return param_1;
}

