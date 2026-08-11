/* Ghidra address: 00faf560 */
/* Ghidra symbol: FUN_00faf560 */


void FUN_00faf560(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  FUN_0043e130(local_20,*(undefined8 *)(param_1 + 0xbd8));
  iVar1 = FUN_004170c0(L"ATTINY",local_20[0],1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_38,*(undefined8 *)(param_1 + 0xbd8));
    iVar1 = FUN_004170c0(L"ATMEGA",local_38,1);
    if (iVar1 == 0) {
      FUN_0043e130(&local_40,*(undefined8 *)(param_1 + 0xbd8));
      iVar1 = FUN_004170c0(&DAT_00fafbf4,local_40,1);
      if (iVar1 == 0) {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_60,PTR_PTR_02002a30);
        FUN_00b8e650(uVar2,&local_58,L"HDLStrings.Msg_IT_Sense0",local_60);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_58);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin PD2");
        goto LAB_00faf7c6;
      }
    }
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_50,PTR_PTR_02002a30);
    FUN_00b8e650(uVar2,&local_48,L"HDLStrings.Msg_IT_Sense0",local_50);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_48);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin PD0");
  }
  else {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_30,PTR_PTR_02002a30);
    FUN_00b8e650(uVar2,&local_28,L"HDLStrings.Msg_IT_Sense0",local_30);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_28);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin PD6");
  }
LAB_00faf7c6:
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x9f8));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))(*(longlong **)(param_1 + 0x6b0),0);
  }
  FUN_0043e130(&local_68,*(undefined8 *)(param_1 + 0xbd8));
  iVar1 = FUN_004170c0(L"ATTINY",local_68,1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_80,*(undefined8 *)(param_1 + 0xbd8));
    iVar1 = FUN_004170c0(L"ATMEGA",local_80,1);
    if (iVar1 == 0) {
      FUN_0043e130(&local_88,*(undefined8 *)(param_1 + 0xbd8));
      iVar1 = FUN_004170c0(&DAT_00fafbf4,local_88,1);
      if (iVar1 == 0) {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_98,PTR_PTR_02002a30);
        FUN_00b8e650(uVar2,&local_90,L"HDLStrings.Msg_IT_Sense0",local_98);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_90);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin PD2");
        goto code_r0x00fafb16;
      }
    }
    if (*(char *)(param_1 + 0x731) == '\x01') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),*(uint *)(param_1 + 0x9f8) & 3);
    }
    if (*(char *)(param_1 + 0x731) == '\x02') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0xc) >> 2);
    }
    if (*(char *)(param_1 + 0x731) == '\x11') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0x30) >> 4);
    }
    if (*(char *)(param_1 + 0x731) == '\x12') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0xc0) >> 6);
    }
    if (*(char *)(param_1 + 0x731) == '\x13') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0x300) >> 8);
    }
    if (*(char *)(param_1 + 0x731) == '\x14') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0xfc00) >> 10);
    }
    if (*(char *)(param_1 + 0x731) == '\x15') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0x3000) >> 0xc);
    }
    if (*(char *)(param_1 + 0x731) == '\x16') {
      (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x9f8) & 0xc000) >> 0xe);
    }
  }
  else {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_78,PTR_PTR_02002a30);
    FUN_00b8e650(uVar2,&local_70,L"HDLStrings.Msg_IT_Sense0",local_78);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_70);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin PB6");
  }
code_r0x00fafb16:
  FUN_00414560(&local_98,0x10);
  return;
}

