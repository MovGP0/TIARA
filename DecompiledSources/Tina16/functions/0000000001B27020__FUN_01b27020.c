/* Ghidra address: 01b27020 */
/* Ghidra symbol: FUN_01b27020 */


undefined8 FUN_01b27020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_01b263a0(param_1,param_3);
  iVar2 = FUN_01b262e0(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_01b25d80(param_2,param_3,0);
  }
  else {
    FUN_01b26710(param_1,local_20,param_3,uVar1,3);
    FUN_01b25d80(param_2,param_3,local_20[0]);
  }
  FUN_00414480(local_20);
  return param_2;
}

