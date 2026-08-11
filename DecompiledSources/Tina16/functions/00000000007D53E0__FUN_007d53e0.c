/* Ghidra address: 007d53e0 */
/* Ghidra symbol: FUN_007d53e0 */


void FUN_007d53e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_50 = auStack_98;
  local_20 = thunk_FUN_040ef593(0);
  local_28 = *(longlong **)(param_1 + 0xb8);
  uVar2 = thunk_FUN_04181813(local_20,*(undefined4 *)(param_1 + 0x94),
                             *(undefined4 *)(param_1 + 0x90));
  FUN_0060b650(local_28,uVar2);
  lVar3 = FUN_00609e10(local_28);
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),0);
  plVar4 = (longlong *)FUN_00609e10(local_28);
  uVar1 = (**(code **)(*local_28 + 0x60))(local_28);
  local_78 = (**(code **)(*local_28 + 0x48))(local_28);
  FUN_004238d0(local_60,0,0,uVar1);
  (**(code **)(*plVar4 + 0xa8))(plVar4,local_60);
  thunk_FUN_041a9b5c(0,local_20);
  local_30 = (undefined8 *)(param_1 + 0xc0);
  local_38 = *local_30;
  *local_30 = 0;
  FUN_00410f20(local_38);
  local_40 = (undefined8 *)(param_1 + 200);
  local_48 = *local_40;
  *local_40 = 0;
  FUN_00410f20(local_48);
  return;
}

