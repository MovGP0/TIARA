/* Ghidra address: 00fafc70 */
/* Ghidra symbol: FUN_00fafc70 */


void FUN_00fafc70(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x6e0) = 0;
  FUN_0064cf60(param_1,0x49e);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x9f8));
  FUN_0043e130(local_20,*(undefined8 *)(param_1 + 0xbd8));
  iVar1 = FUN_004170c0(L"ATTINY",local_20[0],1);
  if (iVar1 == 0) {
    FUN_0043e130(&local_38,*(undefined8 *)(param_1 + 0xbd8));
    iVar1 = FUN_004170c0(L"ATMEGA",local_38,1);
    if (iVar1 == 0) {
      FUN_0043e130(&local_40,*(undefined8 *)(param_1 + 0xbd8));
      iVar1 = FUN_004170c0(&DAT_00faff84,local_40,1);
      if (iVar1 == 0) {
        uVar2 = FUN_00b89270();
        FUN_0041ddd0(&local_60,PTR_PTR_02002a30);
        FUN_00b8e650(uVar2,&local_58,L"HDLStrings.Msg_IT_Sense0",local_60);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_58);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin PD2");
        goto code_r0x00fafe9c;
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
code_r0x00fafe9c:
  FUN_00414560(&local_60,9);
  return;
}

