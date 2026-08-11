/* Ghidra address: 01616360 */
/* Ghidra symbol: FUN_01616360 */


void FUN_01616360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01615fd0(local_res18[0],&local_20,&local_28,&local_30);
  *param_4 = 0xffffffff;
  *param_5 = 0xffffffff;
  uVar2 = FUN_01616190(param_1,local_28);
  uVar3 = FUN_01616190(param_1,local_30);
  FUN_016162b0(uVar2,uVar3,param_2,local_38,local_40);
  iVar1 = FUN_00416db0(local_20,&DAT_016164ac);
  if (iVar1 == 0) {
    *param_4 = local_38[0];
    *param_5 = local_40[0];
  }
  FUN_00410f20(uVar2);
  FUN_00410f20(uVar3);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  return;
}

