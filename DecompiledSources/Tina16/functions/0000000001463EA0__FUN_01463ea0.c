/* Ghidra address: 01463ea0 */
/* Ghidra symbol: FUN_01463ea0 */


void FUN_01463ea0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  longlong *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_58 = 0;
  FUN_01aee720(&local_58,0x410,*(undefined4 *)(param_1 + 0x6b8),L"EECpyBtn");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_58);
  if (*(char *)(param_1 + 0x858) == '\0') {
    local_30 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_68 = 0;
    local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_30,1);
    local_40 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x860) + 0xa0);
    (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x750) + 0x4d8));
    FUN_01d12000(local_40[0x12],*(undefined8 *)(param_1 + 0x860));
    *(undefined1 *)(local_40 + 0x10) = 1;
    (**(code **)(*local_40 + 0x40))(local_40,local_20);
    FUN_00410f20(local_40);
    FUN_00410f20(local_20);
    uVar1 = (**(code **)*local_30)(local_30);
    local_28 = thunk_FUN_0412a7bb(2,uVar1);
    local_38 = thunk_FUN_0416a623(local_28);
    uVar1 = (**(code **)*local_30)(local_30);
    FUN_00409a70(local_30[1],local_38,uVar1);
    plVar2 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar2 + 0x30))(plVar2);
    uVar1 = FUN_006a6030();
    FUN_006a5e10(uVar1,DAT_01f4c0e8,local_28);
    FUN_01464f00(param_1,param_2);
    FUN_01463140(param_1,0);
    plVar2 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar2 + 0x28))(plVar2);
    thunk_FUN_04172795(local_28);
    FUN_00410f20(local_30);
  }
  else {
    FUN_006809e0(*(undefined8 *)(param_1 + 0x750));
  }
  FUN_00414480(&local_58);
  return;
}

