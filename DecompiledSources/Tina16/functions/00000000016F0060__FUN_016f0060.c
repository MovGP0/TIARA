/* Ghidra address: 016f0060 */
/* Ghidra symbol: FUN_016f0060 */


undefined8
FUN_016f0060(undefined8 param_1,longlong param_2,longlong param_3,int param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
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
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_b0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_88 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_20 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_30 = 0;
  if (param_2 != 0) {
    if (param_3 == 0) {
      if (param_4 < 0) {
        FUN_00414480(param_1);
      }
      else if (param_4 < *(int *)(param_2 + 0x30c)) {
        uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
        FUN_017ccae0(*(undefined8 *)(param_2 + 0xa8),uVar1);
        FUN_017cd0b0(*(undefined8 *)(param_2 + 0xa8),uVar1,0,0);
        if (param_5 == '\0') {
          uVar2 = FUN_00b89270();
          FUN_0041ddd0(&local_30,&PTR_PTR_016f0000);
          FUN_00b8e650(uVar2,&local_28,L"AnalMain.SNode",local_30);
          local_40 = CONCAT44(local_40._4_4_,param_4);
          local_38 = 0;
          FUN_00442f70(&local_20,local_28,&local_40,0);
          uVar2 = FUN_00b89270();
          FUN_0041ddd0(&local_58,&PTR_PTR_016f0010);
          FUN_00b8e650(uVar2,&local_50,L"AnalMain.SCompsTerms",local_58);
          FUN_019ac770(*(undefined8 *)(param_2 + 0xa8),&local_60,param_4,uVar1,0);
          local_40 = local_60;
          local_38 = 0x11;
          FUN_00442f70(&local_48,local_50,&local_40,0);
          FUN_00416cd0(param_1,3,local_20,&DAT_016f060c,local_48);
        }
        else {
          FUN_019ac770(*(undefined8 *)(param_2 + 0xa8),&local_68,param_4,uVar1,0);
          local_40 = local_68;
          local_38 = 0x11;
          FUN_00442f70(param_1,L"Voltage: %s",&local_40,0);
        }
        FUN_00410f20(uVar1);
      }
      else if (param_4 < *(int *)(param_2 + 0x30c) + *(int *)(param_2 + 0x310)) {
        if (param_5 == '\0') {
          uVar1 = FUN_00b89270();
          FUN_0041ddd0(&local_78,&PTR_PTR_016f0020);
          FUN_00b8e650(uVar1,&local_70,L"AnalMain.SInnerNode",local_78);
          FUN_016efec0(&local_80,param_2,param_4);
          local_40 = local_80;
          local_38 = 0x11;
          FUN_00442f70(param_1,local_70,&local_40,0);
        }
        else {
          FUN_016efec0(&local_88,param_2,param_4);
          local_40 = local_88;
          local_38 = 0x11;
          FUN_00442f70(param_1,L"Voltage: %s",&local_40,0);
        }
      }
      else if (param_5 == '\0') {
        uVar1 = FUN_00b89270();
        FUN_0041ddd0(&local_98,&PTR_PTR_016f0030);
        FUN_00b8e650(uVar1,&local_90,L"AnalMain.SCurrent",local_98);
        FUN_016eff60(&local_a0,param_2,param_4);
        local_40 = local_a0;
        local_38 = 0x11;
        FUN_00442f70(param_1,local_90,&local_40,0);
      }
      else {
        FUN_016eff60(&local_a8,param_2,param_4);
        local_40 = local_a8;
        local_38 = 0x11;
        FUN_00442f70(param_1,L"Current: %s",&local_40,0);
      }
    }
    else {
      uVar1 = FUN_00b89270();
      FUN_0041ddd0(&local_b8,&PTR_PTR_016f0040);
      FUN_00b8e650(uVar1,&local_b0,L"AnalMain.SComponent",local_b8);
      FUN_01b20020(&local_c0,param_3,&LAB_016f0738);
      local_40 = local_c0;
      local_38 = 0x11;
      FUN_00442f70(param_1,local_b0,&local_40,0);
    }
  }
  FUN_00414560(&local_c0,0x10);
  FUN_00414560(&local_30,3);
  return param_1;
}

