/* Ghidra address: 00c326d0 */
/* Ghidra symbol: FUN_00c326d0 */


void FUN_00c326d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  
  local_40 = auStack_98;
  (**(code **)(*param_1 + 0x40))(param_1);
  if ((*(char *)((longlong)param_1 + 0x84) != '\0') && (param_1[7] != 0)) {
    if (((char)param_1[0xc] == '\x03') && (*(char *)((longlong)param_1 + 0x61) != '\x03')) {
      uVar1 = FUN_00609e10(param_1[0xe]);
      plVar2 = (longlong *)FUN_00609e10(param_1[0xe]);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_50);
      uVar3 = FUN_00609e10(param_1[0xf]);
      plVar2 = (longlong *)FUN_00609e10(param_1[0xf]);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_60);
      FUN_005fead0(uVar1,local_50,uVar3,local_60);
    }
    if (*(char *)((longlong)param_1 + 0x61) == '\x02') {
      FUN_00c31ec0(param_1);
    }
    else if (*(char *)((longlong)param_1 + 0x61) == '\x03') {
      uVar1 = FUN_00609e10(param_1[0xf]);
      plVar2 = (longlong *)FUN_00609e10(param_1[0xf]);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_50);
      uVar3 = FUN_00609e10(param_1[0xe]);
      plVar2 = (longlong *)FUN_00609e10(param_1[0xe]);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_60);
      FUN_005fead0(uVar1,local_50,uVar3,local_60);
    }
    local_38 = FUN_00c288b0(param_1[7]);
    if (local_38 == 0) {
      local_38 = *(longlong *)PTR_DAT_02001d50;
    }
    uVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0xe8))((longlong *)param_1[0xf]);
    local_30 = thunk_FUN_0418f5de(uVar1,local_38,0);
    uVar1 = FUN_00609e10(param_1[0xf]);
    uVar1 = FUN_005ffa40(uVar1);
    thunk_FUN_03a5de49(uVar1);
    uVar1 = FUN_00609e10(param_1[0xf]);
    plVar2 = (longlong *)FUN_00609e10(param_1[0xf]);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_50);
    local_78 = 0;
    FUN_00c2c800(param_1[7],uVar1,local_50,1);
    if (local_30 != 0) {
      uVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0xe8))((longlong *)param_1[0xf]);
      thunk_FUN_0418f5de(uVar1,local_30,0);
    }
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  return;
}

