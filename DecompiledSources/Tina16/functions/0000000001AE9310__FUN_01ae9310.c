/* Ghidra address: 01ae9310 */
/* Ghidra symbol: FUN_01ae9310 */


undefined8 FUN_01ae9310(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(local_20,*(undefined8 *)PTR_DAT_02005010,L"\\DiagOpt.tmp");
  uVar1 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,local_20[0]);
  if (param_3 == 0) {
    param_3 = FUN_01ae91c0(param_1);
  }
  if (param_3 != 0) {
    uVar2 = FUN_01cc6a70(param_3,local_res10[0]);
    FUN_005dd980(uVar1,uVar2);
    FUN_00410f20(uVar2);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return uVar1;
}

