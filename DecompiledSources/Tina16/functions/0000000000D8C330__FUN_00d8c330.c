/* Ghidra address: 00d8c330 */
/* Ghidra symbol: FUN_00d8c330 */


void FUN_00d8c330(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                 wchar_t *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  longlong *local_88;
  undefined1 local_7c [18];
  char local_6a;
  undefined1 local_69;
  longlong *local_68;
  longlong local_60;
  undefined8 local_54;
  ulonglong uStack_4c;
  undefined4 local_44;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_90 = auStack_d8;
  local_54 = *param_4;
  uStack_4c = param_4[1];
  local_44 = (undefined4)param_4[2];
  local_68 = (longlong *)0x0;
  local_6a = '\0';
  local_60 = 0;
  pwVar7 = L"default";
  iVar1 = FUN_00416db0(param_5,L"default");
  if (iVar1 != 0) {
    local_60 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_5);
    pwVar7 = param_5;
  }
  if (local_60 == 0) {
    local_60 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x90);
  }
  if (local_60 != 0) {
    uVar4 = (ulonglong)(byte)local_44;
    if (uVar4 < 7) {
      if (uVar4 == 6) {
        pwVar7 = L"TabRight";
        plVar5 = (longlong *)FUN_00d77610(local_60,L"TabRight");
        local_68 = plVar5;
      }
      else if (uVar4 < 4) {
        if (uVar4 == 3) {
          pwVar7 = L"TabLeft";
          plVar5 = (longlong *)FUN_00d77610(local_60,L"TabLeft");
          local_68 = plVar5;
        }
        else if (uVar4 == 0) {
          pwVar7 = L"TabTop";
          plVar5 = (longlong *)FUN_00d77610(local_60,L"TabTop");
          local_68 = plVar5;
        }
        else if (uVar4 == 1) {
          pwVar7 = L"TabTop";
          plVar5 = (longlong *)FUN_00d77610(local_60,L"TabTop");
          local_68 = plVar5;
        }
        else {
          plVar5 = (longlong *)(uVar4 - 2);
          if (plVar5 == (longlong *)0x0) {
            pwVar7 = L"TabTop";
            plVar5 = (longlong *)FUN_00d77610(local_60,L"TabTop");
            local_68 = plVar5;
          }
        }
      }
      else if (uVar4 == 4) {
        pwVar7 = L"TabLeft";
        plVar5 = (longlong *)FUN_00d77610(local_60,L"TabLeft");
        local_68 = plVar5;
      }
      else {
        plVar5 = (longlong *)(uVar4 - 5);
        if (plVar5 == (longlong *)0x0) {
          pwVar7 = L"TabLeft";
          plVar5 = (longlong *)FUN_00d77610(local_60,L"TabLeft");
          local_68 = plVar5;
        }
      }
    }
    else if (uVar4 < 10) {
      if (uVar4 == 9) {
        pwVar7 = L"TabTop";
        plVar5 = (longlong *)FUN_00d77610(local_60,L"TabTop");
        local_68 = plVar5;
      }
      else if (uVar4 == 7) {
        pwVar7 = L"TabRight";
        plVar5 = (longlong *)FUN_00d77610(local_60,L"TabRight");
        local_68 = plVar5;
      }
      else {
        plVar5 = (longlong *)(uVar4 - 8);
        if (plVar5 == (longlong *)0x0) {
          pwVar7 = L"TabRight";
          plVar5 = (longlong *)FUN_00d77610(local_60,L"TabRight");
          local_68 = plVar5;
        }
      }
    }
    else if (uVar4 == 10) {
      pwVar7 = L"TabTop";
      plVar5 = (longlong *)FUN_00d77610(local_60,L"TabTop");
      local_68 = plVar5;
    }
    else {
      plVar5 = (longlong *)(uVar4 - 0xb);
      if (plVar5 == (longlong *)0x0) {
        pwVar7 = L"TabTop";
        plVar5 = (longlong *)FUN_00d77610(local_60,L"TabTop");
        local_68 = plVar5;
      }
    }
    if (local_68 == (longlong *)0x0) {
      if (local_44._1_1_ < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)plVar5 >> 8),1) << (local_44._1_1_ & 0x1f) & 10U)
                != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        pwVar7 = L"TabActive";
        local_68 = (longlong *)FUN_00d77610(local_60,L"TabActive");
      }
      if (local_68 == (longlong *)0x0) {
        pwVar7 = L"Tab";
        local_68 = (longlong *)FUN_00d77610(local_60,&DAT_00d8cbbc);
      }
      local_6a = '\x01';
    }
    if (local_68 != (longlong *)0x0) {
      if (local_44._1_1_ == '\x02') {
        local_69 = 8;
      }
      else if ((local_44._1_1_ == '\x03') || (local_44._1_1_ == '\x04')) {
        local_69 = 7;
      }
      else if (local_44._1_1_ == '\x01') {
        local_69 = 5;
      }
      else {
        local_69 = 0;
      }
      if (local_6a != '\0') {
        if ((byte)local_44 < 0x10) {
          bVar8 = ((int)CONCAT62((int6)((ulonglong)pwVar7 >> 0x10),1) << ((byte)local_44 & 0x1f) &
                  0xff8U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          FUN_00d77b90(local_68,&local_54);
          (**(code **)(*local_68 + 0x98))(local_68,local_69);
          local_40 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
          if ((byte)((byte)local_44 - 3) < 3) {
            uVar2 = FUN_004230c0(&local_54);
            uVar3 = FUN_004230a0(&local_54);
            (**(code **)(*local_40 + 0xe0))(local_40,uVar2,uVar3);
          }
          else if ((byte)((byte)local_44 - 6) < 3) {
            uVar2 = FUN_004230c0(&local_54);
            uVar3 = FUN_004230a0(&local_54);
            (**(code **)(*local_40 + 0xe0))(local_40,uVar2,uVar3);
          }
          else if ((byte)((byte)local_44 - 9) < 3) {
            uVar2 = FUN_004230a0(&local_54);
            uVar3 = FUN_004230c0(&local_54);
            (**(code **)(*local_40 + 0xe0))(local_40,uVar2,uVar3);
          }
          local_88 = (longlong *)FUN_00609e10(local_40);
          uVar2 = FUN_00d7e9c0(*(undefined8 *)(param_1 + 0x28),0xff00000f);
          FUN_005fdab0(local_88[0x10],uVar2);
          uVar2 = (**(code **)(*local_40 + 0x60))(local_40);
          local_b8 = (**(code **)(*local_40 + 0x48))(local_40);
          FUN_00498350(local_a0,0,0,uVar2);
          (**(code **)(*local_88 + 0xa8))(local_88,local_a0);
          local_38 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
          uVar6 = FUN_00609e10(local_40);
          uVar6 = FUN_005ffa40(uVar6);
          FUN_005ffb10(local_38,uVar6);
          FUN_00d77cb0(local_68,local_7c);
          uVar2 = (**(code **)(*local_40 + 0x60))(local_40);
          local_b8 = (**(code **)(*local_40 + 0x48))(local_40);
          FUN_00423010(local_a0,0,0,uVar2);
          FUN_00d77b90(local_68,local_a0);
          (**(code **)(*local_68 + 0xa8))(local_68,local_38,&DAT_01ecf394);
          FUN_00d77b90(local_68,local_7c);
          FUN_005ffb10(local_38,0);
          local_30 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
          if ((byte)((byte)local_44 - 3) < 3) {
            uVar2 = (**(code **)(*local_40 + 0x48))(local_40);
            uVar3 = (**(code **)(*local_40 + 0x60))(local_40);
            (**(code **)(*local_30 + 0xe0))(local_30,uVar2,uVar3);
            FUN_00d592d0(local_40,local_30);
          }
          else if ((byte)((byte)local_44 - 6) < 3) {
            uVar2 = (**(code **)(*local_40 + 0x48))(local_40);
            uVar3 = (**(code **)(*local_40 + 0x60))(local_40);
            (**(code **)(*local_30 + 0xe0))(local_30,uVar2,uVar3);
            FUN_00d593a0(local_40,local_30);
          }
          else if ((byte)((byte)local_44 - 9) < 3) {
            (**(code **)(*local_30 + 0x10))(local_30,local_40);
            FUN_00d59480(local_30);
          }
          FUN_00d58810(local_30,param_3,local_54 & 0xffffffff,local_54._4_4_);
          FUN_00410f20(local_30);
          FUN_00410f20(local_38);
          FUN_00410f20(local_40);
          return;
        }
      }
      FUN_00d77b90(local_68,&local_54);
      (**(code **)(*local_68 + 0x98))(local_68,local_69);
      (**(code **)(*local_68 + 0xa8))(local_68,param_3,&DAT_01ecf394);
    }
  }
  return;
}

