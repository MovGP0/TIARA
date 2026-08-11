/* Ghidra address: 01649f90 */
/* Ghidra symbol: FUN_01649f90 */


undefined8 FUN_01649f90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  lVar2 = FUN_01649f20(param_1,param_3);
  if (lVar2 == 0) {
    FUN_0043f750(local_20,param_3);
    FUN_00416ba0(&local_10,&LAB_0164a094,local_20[0]);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10e8) + 0xb0))
                      (*(longlong **)(param_1 + 0x10e8),local_10);
    if (iVar1 == -1) {
      (**(code **)(**(longlong **)(param_1 + 0x10e8) + 0x78))
                (*(longlong **)(param_1 + 0x10e8),local_10);
    }
    FUN_00414ad0(param_2,local_10);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 0x10));
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_2;
}

