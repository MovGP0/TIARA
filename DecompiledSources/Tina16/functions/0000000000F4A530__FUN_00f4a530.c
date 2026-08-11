/* Ghidra address: 00f4a530 */
/* Ghidra symbol: FUN_00f4a530 */


void FUN_00f4a530(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [512];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_248 = 0;
  local_240 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = *(longlong **)(param_1 + 0x490);
  FUN_005ff880(plVar1,*(undefined8 *)(param_1 + 0xb8));
  FUN_005fdab0(plVar1[0x10],*(undefined4 *)(param_1 + 200));
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  FUN_0084e320(param_1,&local_240,param_2,param_3);
  FUN_00442620(local_238,local_240);
  uVar3 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
  FUN_00416830(&local_248,local_238,0x100);
  uVar2 = FUN_00414d00(local_238);
  FUN_004287d0(uVar3,(int)local_38 + 2,local_38._4_4_ + 2,6,&local_38,local_248,uVar2,0);
  FUN_0084ddf0(param_1,param_2,param_3,&local_38,param_5);
  FUN_00414560(&local_248,2);
  return;
}

