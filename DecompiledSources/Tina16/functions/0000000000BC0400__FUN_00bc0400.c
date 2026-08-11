/* Ghidra address: 00bc0400 */
/* Ghidra symbol: FUN_00bc0400 */


undefined1 FUN_00bc0400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  local_11 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,param_2);
  local_78 = local_res20;
  FUN_00416cd0(&local_58,3,local_res18,&DAT_00bc094c);
  cVar1 = FUN_005eaa60(local_10,local_58);
  if (cVar1 == '\0') {
code_r0x00bc0845:
    FUN_00410f20(local_10);
  }
  else {
    cVar1 = FUN_005ebec0(local_10,L"Foreground Color");
    if (cVar1 == '\0') {
      cVar1 = FUN_005ebec0(local_10,L"Foreground Color New");
      if (cVar1 != '\0') {
        FUN_005eb6d0(local_10,&local_60,L"Foreground Color New");
        local_18 = FUN_005fbf60(local_60);
        goto LAB_00bc0576;
      }
    }
    else {
      iVar2 = FUN_005eba50(local_10,L"Foreground Color");
      local_18 = *(undefined4 *)(&DAT_01e9989c + (longlong)iVar2 * 4);
LAB_00bc0576:
      cVar1 = FUN_005ebec0(local_10,L"Background Color");
      if (cVar1 == '\0') {
        cVar1 = FUN_005ebec0(local_10,L"Background Color New");
        if (cVar1 == '\0') goto LAB_00bc0837;
        FUN_005eb6d0(local_10,&local_68,L"Background Color New");
        local_1c = FUN_005fbf60(local_68);
      }
      else {
        iVar2 = FUN_005eba50(local_10,L"Background Color");
        local_1c = *(undefined4 *)(&DAT_01e9989c + (longlong)iVar2 * 4);
      }
      cVar1 = FUN_005ebec0(local_10,L"Bold");
      if (cVar1 != '\0') {
        FUN_005eb6d0(local_10,&local_28,L"Bold");
        cVar1 = FUN_005ebec0(local_10,L"Italic");
        if (cVar1 != '\0') {
          FUN_005eb6d0(local_10,&local_30,L"Italic");
          cVar1 = FUN_005ebec0(local_10,L"Underline");
          if (cVar1 != '\0') {
            FUN_005eb6d0(local_10,&local_38,L"Underline");
            cVar1 = FUN_005ebec0(local_10,L"Default Foreground");
            if (cVar1 != '\0') {
              FUN_005eb6d0(local_10,&local_40,L"Default Foreground");
              cVar1 = FUN_005ebec0(local_10,L"Default Background");
              if (cVar1 != '\0') {
                FUN_005eb6d0(local_10,&local_48,L"Default Background");
                cVar1 = FUN_00bc0330(auStack_98,local_48);
                if (cVar1 == '\0') {
                  FUN_00bc0b80(*(undefined8 *)(param_1 + 0x40),local_1c);
                }
                else {
                  FUN_00bc0b80(*(undefined8 *)(param_1 + 0x40),0xff000005);
                }
                cVar1 = FUN_00bc0330(auStack_98,local_40);
                if (cVar1 == '\0') {
                  FUN_00bc0bd0(*(undefined8 *)(param_1 + 0x40),local_18);
                }
                else {
                  FUN_00bc0bd0(*(undefined8 *)(param_1 + 0x40),0xff000008);
                }
                FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),0);
                cVar1 = FUN_00bc0330(auStack_98,local_28);
                if (cVar1 != '\0') {
                  FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),
                               *(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) | 1);
                }
                cVar1 = FUN_00bc0330(auStack_98,local_30);
                if (cVar1 != '\0') {
                  FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),
                               *(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) | 2);
                }
                cVar1 = FUN_00bc0330(auStack_98,local_38);
                if (cVar1 != '\0') {
                  FUN_00bc0bf0(*(undefined8 *)(param_1 + 0x40),
                               *(byte *)(*(longlong *)(param_1 + 0x40) + 0x28) | 4);
                }
                local_11 = 1;
                FUN_005ea630(local_10);
                goto code_r0x00bc0845;
              }
            }
          }
        }
      }
    }
LAB_00bc0837:
    FUN_00bc08b0(0,local_50);
    FUN_00bc08d0(0,local_50);
  }
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_48,5);
  FUN_00414560(&local_res18,2);
  return local_11;
}

