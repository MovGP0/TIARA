/* Ghidra address: 01bb6d00 */
/* Ghidra symbol: FUN_01bb6d00 */


void FUN_01bb6d00(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_858;
  undefined8 local_850 [2];
  undefined1 local_83a [2050];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_858 = 0;
  local_850[0] = 0;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  lVar2 = FUN_004113f0(param_2,&PTR_FUN_0083c350);
  FUN_0084e320(lVar2,local_850,1,param_4);
  iVar1 = FUN_00416db0(local_850[0],&DAT_01bb6e78);
  if (iVar1 == 0) {
    (**(code **)(**(longlong **)(lVar2 + 0x490) + 0xa8))(*(longlong **)(lVar2 + 0x490),&local_38);
    thunk_FUN_04176532(&local_38,0xfffffffe,0);
    FUN_005fce70(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x70),1);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(lVar2 + 0x490) + 0x70),0xff);
    uVar3 = FUN_005ffa40(*(undefined8 *)(lVar2 + 0x490));
    FUN_0084e320(lVar2,&local_858,param_3,param_4);
    uVar4 = FUN_00442620(local_83a,local_858);
    thunk_FUN_041a24be(uVar3,uVar4,0xffffffff,&local_38,0x124);
  }
  FUN_00414560(&local_858,2);
  return;
}

