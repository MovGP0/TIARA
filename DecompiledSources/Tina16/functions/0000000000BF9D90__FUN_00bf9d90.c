/* Ghidra address: 00bf9d90 */
/* Ghidra symbol: FUN_00bf9d90 */


void FUN_00bf9d90(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  char local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  char *local_48;
  char local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  char local_21;
  undefined8 local_20;
  
  local_50 = auStack_b8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  cVar1 = FUN_00bff8b0(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
    FUN_00c08780(param_1);
    local_21 = 0;
    local_39 = *(char *)((longlong)param_1 + 0x5f4);
    uVar2 = FUN_006a6030();
    cVar1 = FUN_006a5ff0(uVar2,(undefined2)DAT_02019b30);
    if (cVar1 != '\0') {
      plVar3 = (longlong *)FUN_006a6030();
      (**(code **)(*plVar3 + 0x30))(plVar3);
      uVar2 = FUN_006a6030();
      local_20 = FUN_006a5da0(uVar2,(undefined2)DAT_02019b30);
      local_48 = (char *)thunk_FUN_0416a623(local_20);
      if (local_48 != (char *)0x0) {
        local_39 = *local_48;
      }
      thunk_FUN_04172795(local_20);
      plVar3 = (longlong *)FUN_006a6030();
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    local_58 = FUN_00bf2b30(param_1);
    local_60 = FUN_00bf2b90(param_1);
    local_98 = 0;
    local_90 = '\0';
    FUN_00bd0e70(param_1[0xaa],0xc,&local_58,&local_60);
    local_21 = '\x01';
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 == '\0') {
      FUN_00c086e0(param_1,*(undefined1 *)((longlong)param_1 + 0x5f4));
    }
    else {
      FUN_00bf2ed0(param_1,&local_68);
      local_98 = local_68;
      local_90 = *(char *)((longlong)param_1 + 0x5f5);
      FUN_00bd0e70(param_1[0xaa],4,(longlong)param_1 + 0x4b4,(longlong)param_1 + 0x4bc);
    }
    cVar1 = FUN_00bf2c80(param_1);
    if (cVar1 == '\0') {
      local_30 = FUN_00bfaa10(param_1);
    }
    else {
      local_30 = FUN_00bf2b30(param_1);
      local_38 = FUN_00bf2b90(param_1);
      *(undefined8 *)((longlong)param_1 + 0x4b4) = local_30;
      *(undefined8 *)((longlong)param_1 + 0x4bc) = local_38;
      if (*(char *)((longlong)param_1 + 0x5f5) == '\x01') {
        local_30 = CONCAT44(local_30._4_4_,1);
      }
    }
    cVar1 = local_39;
    FUN_00bd1a50(&local_70);
    uVar2 = FUN_00416740(local_70);
    FUN_00bfcaf0(param_1,cVar1,uVar2,1);
    local_38 = FUN_00bf2b90(param_1);
    if (local_39 == '\0') {
      FUN_00bf2ed0(param_1,&local_78);
      local_98 = local_78;
      local_90 = cVar1;
      FUN_00bd0e70(param_1[0xaa],1,&local_30,&local_38);
    }
    else if ((local_39 != '\x02') && (local_39 == '\x01')) {
      if (*(int *)((longlong)param_1 + 0x4c4) == 1) {
        local_58 = FUN_00bb7750(1,local_30._4_4_);
        local_60 = FUN_00bb7750((int)param_1[0x9a],local_38._4_4_ + -1);
        FUN_00bf2ed0(param_1,&local_80);
        local_98 = local_80;
        local_90 = '\x01';
        FUN_00bd0e70(param_1[0xaa],1,&local_58,&local_60);
      }
      else {
        local_58 = FUN_00bb7750(1,local_30._4_4_);
        FUN_00bf2ed0(param_1,&local_88);
        local_98 = local_88;
        local_90 = '\0';
        FUN_00bd0e70(param_1[0xaa],1,&local_58,&local_38);
      }
    }
    if (local_21 != '\0') {
      local_58 = FUN_00bf2b30(param_1);
      local_60 = FUN_00bf2b90(param_1);
      local_98 = 0;
      local_90 = '\0';
      FUN_00bd0e70(param_1[0xaa],0xd,&local_58,&local_60);
    }
    FUN_00c087b0(param_1);
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x400) != 0) {
      local_28 = *(undefined4 *)((longlong)param_1 + 0x514);
      *(undefined4 *)((longlong)param_1 + 0x514) = 0;
      FUN_00bfd160(param_1);
      *(undefined4 *)((longlong)param_1 + 0x514) = local_28;
    }
    FUN_00c03710(param_1);
    FUN_00c0a950(param_1,0x80);
    (**(code **)(*param_1 + 0x2f8))(param_1,1);
  }
  FUN_00414560(&local_88,5);
  return;
}

