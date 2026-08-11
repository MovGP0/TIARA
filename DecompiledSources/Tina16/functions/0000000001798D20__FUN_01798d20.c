/* Ghidra address: 01798d20 */
/* Ghidra symbol: FUN_01798d20 */


void FUN_01798d20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_58 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_88 = 0;
  local_20 = FUN_01d30b30(&DAT_01d2e8e8,1,local_58,1);
  local_28 = (longlong *)FUN_00c3c560(&PTR_FUN_00c39d20,1);
  FUN_01797160(param_1,local_28,1);
  *(undefined4 *)(local_28 + 1) = *(undefined4 *)(param_1 + 0xcb0);
  cVar1 = FUN_00c3cb20(local_28);
  if (cVar1 == '\0') {
    (**(code **)(*local_28 + 0x40))(local_28,local_20);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
    uVar2 = (**(code **)*local_58)(local_58);
    local_30 = thunk_FUN_0412a7bb(2,uVar2);
    local_38 = thunk_FUN_0412a7bb(2,0x18);
    local_60 = thunk_FUN_0416a623(local_30);
    local_68 = thunk_FUN_0416a623(local_38);
    uVar2 = (**(code **)*local_58)(local_58);
    FUN_00409a70(local_58[1],local_60,uVar2);
    FUN_00409a70(local_50,local_68,0x18);
    plVar3 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar3 + 0x30))(plVar3);
    uVar2 = FUN_006a6030();
    FUN_006a5e10(uVar2,DAT_01fa0ba0,local_30);
    uVar2 = FUN_006a6030();
    FUN_006a5e10(uVar2,3,local_38);
    plVar3 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar3 + 0x28))(plVar3);
    thunk_FUN_04172795(local_30);
    thunk_FUN_04172795(local_38);
    FUN_00410f20(local_58);
  }
  else {
    FUN_01798f50(0,local_70);
    FUN_01798fc0(0,local_70);
  }
  return;
}

