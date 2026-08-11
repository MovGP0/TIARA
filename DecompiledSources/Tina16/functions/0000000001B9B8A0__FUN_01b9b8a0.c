/* Ghidra address: 01b9b8a0 */
/* Ghidra symbol: FUN_01b9b8a0 */


void FUN_01b9b8a0(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 *local_70;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_38 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  local_40 = FUN_00605cc0(&PTR_FUN_005f86c8,1);
  local_88 = local_88 & 0xffffff00;
  local_28 = FUN_01d30b30(&DAT_01d2e8e8,1,local_38,1);
  local_20 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  FUN_0198cd90(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8),0x8002,1);
  if ((int)local_20[2] == 0) {
    FUN_01b9bb40(0,local_70);
    FUN_01b9bb90(0,local_70);
    FUN_01b9bc00(0,local_70);
  }
  else {
    local_88 = 0;
    (**(code **)(*local_20 + 0x48))(local_20,&local_28,0,0);
    cVar1 = FUN_0198c540(local_20,5,local_5c);
    if (cVar1 != '\0') {
      FUN_014a4c30(&local_28,0,0,0);
    }
    local_48 = (**(code **)(*local_20 + 0x70))(local_20,0,&local_54,&local_58);
    FUN_00606a20(local_40,local_48);
    FUN_00606c20(local_40,local_54);
    FUN_00606bd0(local_40,local_58);
    lVar2 = FUN_0198d430(local_20);
    *(undefined8 *)(lVar2 + 0x148) = 0;
    uVar3 = (**(code **)*local_20)(local_20);
    FUN_00418590(uVar3,&DAT_01984da0);
    FUN_00410f20(local_28);
    uVar3 = (**(code **)*local_38)(local_38);
    local_30 = thunk_FUN_0412a7bb(0x2002,uVar3);
    local_50 = thunk_FUN_0416a623(local_30);
    uVar3 = (**(code **)*local_38)(local_38);
    FUN_00409a70(local_38[1],local_50,uVar3);
    plVar4 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar4 + 0x30))(plVar4);
    uVar3 = FUN_006a6030();
    FUN_006a5e10(uVar3,*(undefined2 *)PTR_DAT_02001528,local_30);
    plVar4 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar4 + 0x10))(plVar4,local_40);
    plVar4 = (longlong *)FUN_006a6030();
    (**(code **)(*plVar4 + 0x28))(plVar4);
    thunk_FUN_04172795(local_30);
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
  }
  return;
}

