/* Ghidra address: 00561c30 */
/* Ghidra symbol: FUN_00561c30 */


undefined8 FUN_00561c30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00560fe0(param_1,param_3);
  iVar2 = FUN_00560f30(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_005609e0(param_2,param_3,0);
  }
  else {
    FUN_00561330(param_1,local_20,param_3,uVar1,3);
    FUN_005609e0(param_2,param_3,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2;
}

