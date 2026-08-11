/* Ghidra address: 00e0aab0 */
/* Ghidra symbol: FUN_00e0aab0 */


undefined8 FUN_00e0aab0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414480(local_30);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_40,iVar2);
      FUN_00416ad0(local_30,local_40[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(param_2);
  FUN_00414ad0(param_1,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return param_1;
}

