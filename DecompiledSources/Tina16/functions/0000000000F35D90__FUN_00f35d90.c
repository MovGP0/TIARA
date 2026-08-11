/* Ghidra address: 00f35d90 */
/* Ghidra symbol: FUN_00f35d90 */


undefined8 FUN_00f35d90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00f35190(param_1,param_3);
  iVar2 = FUN_00f350e0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_00f34b90(param_2,param_3,0);
  }
  else {
    FUN_00f354b0(param_1,local_20,param_3,uVar1,3);
    FUN_00f34b90(param_2,param_3,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2;
}

