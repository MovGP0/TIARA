/* Ghidra address: 01051c30 */
/* Ghidra symbol: FUN_01051c30 */


void FUN_01051c30(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res20;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  uVar4 = FUN_00b89270();
  FUN_0041ddd0(&local_38,PTR_PTR_020015a0);
  FUN_00b8e650(uVar4,&local_30,L"HDLStrings.sDebuggerCaption",local_38);
  FUN_00416ba0(param_1 + 0x8e0,local_30,L"  -  < %s > - %s");
  FUN_0104e1f0(param_1,300);
  *(undefined4 *)(param_1 + 0x918) = 1;
  *(undefined8 *)(param_1 + 0x970) = param_5;
  FUN_00414b50(local_20,*(undefined8 *)(param_3 + 0x790));
  uVar4 = FUN_019a45d0();
  uVar4 = FUN_00f8a4f0(&DAT_00f87d08,1,param_3,local_res20,param_5,uVar4);
  *(undefined8 *)(param_1 + 0x9d8) = uVar4;
  uVar5 = FUN_0065b870();
  FUN_00f8faa0(uVar4,*(undefined8 *)(param_1 + 0x958),*(undefined8 *)(param_1 + 0x950),
               *(undefined8 *)(param_1 + 0x960),*(undefined8 *)(param_1 + 0x968),
               *(undefined8 *)(param_1 + 0x6d0),*(undefined8 *)(param_1 + 0x798),
               *(undefined8 *)(param_1 + 0x7a0),uVar5,param_2,local_20[0],param_6,param_7);
  FUN_00f8edf0(*(undefined8 *)(param_1 + 0x9d8),param_1);
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x958));
  thunk_FUN_041b2403(uVar4,0x435,0,0x7fffffff);
  FUN_00f8f2b0(*(undefined8 *)(param_1 + 0x9d8),param_1,0,1);
  FUN_00f8e6f0(*(undefined8 *)(param_1 + 0x9d8),&local_40);
  FUN_00414ad0(param_1 + 0x9b0,local_40);
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x870),0);
  FUN_007e2f80(*(undefined8 *)(param_1 + 0x870),0);
  uVar2 = FUN_00f8f600(*(undefined8 *)(param_1 + 0x9d8));
  *(undefined4 *)(param_1 + 0x9a0) = uVar2;
  uVar4 = FUN_00442620(&DAT_0202f42c,*(undefined8 *)(param_1 + 0x9b0));
  _CreateSimulatorObject(*(undefined8 *)(param_1 + 0x970),uVar2,uVar4);
  FUN_01053210(param_1);
  *(undefined4 *)(param_1 + 0x91c) = 0;
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    iVar3 = FUN_01052670(param_1);
    FUN_006807e0(*(undefined8 *)(param_1 + 0x958),iVar3 == 2);
    uVar2 = FUN_01052670(param_1);
    *(undefined4 *)(param_1 + 0x91c) = uVar2;
  }
  FUN_010504b0(param_1,*(undefined4 *)(param_1 + 0x918),*(undefined4 *)(param_1 + 0x91c));
  cVar1 = FUN_01053d50(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x858) + 0x268))(*(longlong **)(param_1 + 0x858),1);
    FUN_01053d10(param_1,0);
  }
  uVar2 = FUN_01053d50(param_1);
  FUN_01050370(param_1,*(undefined8 *)(param_1 + 0x858),uVar2);
  lVar6 = FUN_00f8c610(*(undefined8 *)(param_1 + 0x9d8),local_28);
  *(undefined8 *)(param_1 + 0x9b8) = *(undefined8 *)(lVar6 + 0x108);
  *(undefined8 *)(param_1 + 0x9c8) = *(undefined8 *)(lVar6 + 0xd8);
  cVar1 = FUN_01053d50(param_1);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(lVar6 + 0xf8);
    FUN_01050730();
  }
  else {
    FUN_006d68c0(*(undefined8 *)(param_1 + 0x6e0),0);
    FUN_006d68c0(*(undefined8 *)(param_1 + 0x768),0);
    FUN_006d68c0(*(undefined8 *)(param_1 + 0x7a8),0);
    FUN_01051600(param_1);
    FUN_010515d0(param_1,DAT_0202f414);
  }
  FUN_01051360(param_1);
  FUN_00414560(&local_40,3);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return;
}

