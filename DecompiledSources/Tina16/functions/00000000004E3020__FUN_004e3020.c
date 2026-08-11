/* Ghidra address: 004e3020 */
/* Ghidra symbol: FUN_004e3020 */


undefined8 FUN_004e3020(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_004e2420(param_1,param_3);
  iVar2 = FUN_004e2370(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_004e1e20(param_2,param_3,0);
  }
  else {
    FUN_004e2740(param_1,local_20,param_3,uVar1,3);
    FUN_004e1e20(param_2,param_3,local_20[0]);
  }
  FUN_0041b800(local_20);
  return param_2;
}

