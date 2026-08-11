/* Ghidra address: 016164b0 */
/* Ghidra symbol: FUN_016164b0 */


undefined8 FUN_016164b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01615fd0(local_res18[0],local_30,&local_38,&local_40);
  uVar2 = FUN_01616190(param_1,local_38);
  uVar3 = FUN_01616190(param_1,local_40);
  FUN_016162b0(uVar2,uVar3,param_2,local_48,local_50);
  iVar1 = FUN_00416db0(local_30[0],&DAT_0161661c);
  if (iVar1 == 0) {
    uVar4 = FUN_016ee780(local_48[0],local_50[0],*(undefined8 *)(param_2 + 0x38));
  }
  else {
    uVar4 = 0;
  }
  FUN_00410f20(uVar2);
  FUN_00410f20(uVar3);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_res18);
  return uVar4;
}

