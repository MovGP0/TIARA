/* Ghidra address: 014cee50 */
/* Ghidra symbol: FUN_014cee50 */


void FUN_014cee50(longlong param_1,double param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  wchar_t *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  wchar_t *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_60;
  int local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int local_44;
  uint local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_30[0] = 0;
  local_38 = 0;
  if (*(char *)(param_1 + 0x51c) != '\0') {
    if ((*(int *)(param_1 + 0x70) == 0) && (0.001 < param_2)) {
      FUN_00414b50(local_30,L"JS2T_INIT_ACK");
      FUN_014ce7a0(param_1,local_30[0],0,1);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
    if ((*(int *)(param_1 + 0x70) == 1) && (0.002 < param_2)) {
      FUN_00414b50(&local_38,L"Motor1");
      local_88 = L"JS2T_SETMOTOR";
      local_80 = 0x11;
      local_78 = local_38;
      local_70 = 0x11;
      local_68 = 0x1e;
      local_60 = 0;
      FUN_00442f70(local_30,L"%s %s,%d",&local_88,2);
      FUN_014ce7a0(param_1,local_30[0],0,1);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
    }
  }
  if ((*(uint *)(param_1 + 0x5c) & 1) != 0) {
    cVar1 = _JSAPP_GetCmd(*(undefined8 *)(param_1 + 0x10),0x14,&local_50,local_48,local_4c);
    if ((cVar1 != '\0') && (local_50 == 1)) {
      _JSAPP_SendCmd(*(undefined8 *)(param_1 + 0x10),0x14,0,0);
      cVar1 = _JSAPP_GetCmd(*(undefined8 *)(param_1 + 0x10),0x15,&local_3c,&local_40,&local_44);
      if (cVar1 != '\0') {
        if (local_3c == 10) {
          local_40 = local_40 + 1;
          if (((int)local_40 < 1) ||
             (*(int *)(*(longlong *)(param_1 + 0x60) + 0x10) < (int)local_40)) {
            uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid motor index: code");
            FUN_004134c0(uVar2);
          }
          local_40 = FUN_014cfb10(param_1,local_40);
          if (local_40 == 0xffffffff) {
            uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid motor index: FindMotorByLabel");
            FUN_004134c0(uVar2);
          }
          plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),local_40);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_38);
          local_a8 = L"T2JS_STOPMOTOR";
          local_a0 = 0x11;
          local_98 = local_38;
          local_90 = 0x11;
          FUN_00442f70(local_30,L"%s %s",&local_a8,1);
          FUN_014ce7a0(param_1,local_30[0],0,0);
        }
        else if (local_3c == 0xb) {
          local_40 = local_40 + 1;
          if (((int)local_40 < 1) ||
             (*(int *)(*(longlong *)(param_1 + 0x60) + 0x10) < (int)local_40)) {
            uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid motor index: code");
            FUN_004134c0(uVar2);
          }
          local_40 = FUN_014cfb10(param_1,local_40);
          if (local_40 == 0xffffffff) {
            uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid motor index: FindMotorByLabel");
            FUN_004134c0(uVar2);
          }
          plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x60),local_40);
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_38);
          if (local_44 == 1) {
            local_68 = 0xffffffc4;
          }
          else {
            local_68 = 0x3c;
          }
          local_88 = L"T2JS_ADDMOTOR";
          local_80 = 0x11;
          local_78 = local_38;
          local_70 = 0x11;
          local_60 = 0;
          FUN_00442f70(local_30,L"%s %s,%d",&local_88,2);
          FUN_014ce7a0(param_1,local_30[0],0,0);
        }
      }
    }
  }
  FUN_00414560(&local_38,2);
  return;
}

