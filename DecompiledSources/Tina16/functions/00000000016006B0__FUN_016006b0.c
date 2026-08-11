/* Ghidra address: 016006b0 */
/* Ghidra symbol: FUN_016006b0 */


undefined1
FUN_016006b0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8,longlong *param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined1 *local_450;
  undefined1 local_43a [1026];
  undefined8 local_38;
  undefined1 local_21;
  undefined8 local_20;
  
  local_450 = auStack_488;
  FUN_00414610(param_7);
  local_21 = 1;
  *param_9 = 0;
  if (param_8 == 4) {
    lVar1 = FUN_01027c00(&PTR_FUN_01027818,1);
    *param_9 = lVar1;
  }
  else if (param_8 == 2) {
    lVar1 = FUN_0103c730(&PTR_FUN_0103c4c8,1);
    *param_9 = lVar1;
  }
  else if (param_8 == 8) {
    lVar1 = FUN_00ff2d40(&PTR_FUN_00ff2748,1);
    *param_9 = lVar1;
  }
  else {
    lVar1 = FUN_00fd92a0(&PTR_FUN_00fd8e68,1);
    *param_9 = lVar1;
  }
  local_20 = FUN_00f627f0(&DAT_00f613b8,1);
  uVar2 = FUN_00442620(local_43a,param_7);
  _CreateSimulatorObject(param_3,param_8,uVar2);
  local_38 = *(undefined8 *)(param_1 + 0xf8);
  FUN_01600610(auStack_488,local_38);
  *(int *)(*param_9 + 0x8d4) = param_8;
  *(undefined4 *)(*param_9 + 0x8dc) = param_2;
  FUN_00414ad0(*param_9 + 0x8e8,param_7);
  local_468 = param_7;
  FUN_00f792f0(*param_9,param_4,param_5,param_6);
  FUN_00f79fa0(*param_9,param_3);
  FUN_00f787a0(*param_9,local_20);
  (**(code **)(*(longlong *)*param_9 + 8))((longlong *)*param_9);
  FUN_00410f20(local_20);
  _FreeSimulatorObject(param_3);
  FUN_00414480(&param_7);
  return local_21;
}

