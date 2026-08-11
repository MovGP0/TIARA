/* Ghidra address: 01bb6e90 */
/* Ghidra symbol: FUN_01bb6e90 */


void FUN_01bb6e90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_38;
  longlong local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  lVar1 = FUN_004113f0(param_2,&PTR_FUN_00eff918);
  FUN_0084e320(lVar1,local_30,param_3,param_4);
  if (local_30[0] == 0) {
    uVar2 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),1);
    FUN_00f03530(uVar2,2);
  }
  else {
    FUN_0084e320(lVar1,&local_38,param_3,param_4);
    iVar3 = FUN_00416db0(local_38,&DAT_01bb6fc8);
    if (iVar3 == 0) {
      uVar2 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),1);
      FUN_00f03530(uVar2,1);
    }
    else {
      uVar2 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),1);
      FUN_00f03530(uVar2,0);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

