/* Ghidra address: 01704d80 */
/* Ghidra symbol: FUN_01704d80 */


undefined1 FUN_01704d80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  wchar_t *local_30;
  undefined1 local_21;
  
  local_70 = auStack_f8;
  local_c0 = (undefined4 *)0x0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_30 = (wchar_t *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_21 = 0;
  local_d8 = L"hdlmacros.dat";
  FUN_00416cd0(&local_30,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01705500);
  cVar1 = FUN_00440a20(local_30,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02005798);
    FUN_00b8e650(uVar2,&local_80,L"HDLStrings.Msg_FileNotFound",local_88);
    local_d8 = local_30;
    FUN_00416cd0(&local_78,3,local_80,&DAT_0170557c);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),local_30);
  local_58 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                       (*(longlong **)(param_1 + 8),L"# Categories");
  local_5c = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                       (*(longlong **)(param_1 + 8),L"# Descriptions");
  local_60 = (**(code **)(**(longlong **)(param_1 + 8) + 0xb0))
                       (*(longlong **)(param_1 + 8),L"# Devices");
  if (((local_58 == -1) || (local_5c == -1)) || (local_60 == -1)) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_98,PTR_PTR_02004de8);
    FUN_00b8e650(uVar2,&local_90,L"HDLStrings.Msg_SyntaxError",local_98);
    FUN_01704b80(param_1,local_90,local_30);
  }
  local_4c = local_58 + 1;
  if (local_4c <= local_5c + -1) {
    iVar3 = ((local_5c + -1) - local_4c) + 1;
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),&local_38,local_4c);
      if (local_38 != 0) {
        local_54 = 1;
        local_50 = FUN_015f0030(local_38,&local_54);
        if (local_50 == -1) {
          uVar2 = FUN_00b89270();
          FUN_0041ddd0(&local_a8,PTR_PTR_02004de8);
          FUN_00b8e650(uVar2,&local_a0,L"HDLStrings.Msg_SyntaxError",local_a8);
          FUN_01704b80(param_1,local_a0,local_30);
        }
        FUN_015ef8b0(local_38,&local_54);
        FUN_015ef9a0(local_38,&local_54);
        FUN_01704c50(auStack_f8,&local_b0,local_38,&local_54);
        FUN_00414b50(&local_40,local_b0);
        uVar2 = FUN_01704720(&DAT_01703e48,1,local_50,local_40);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),uVar2);
      }
      local_4c = local_4c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_4c = local_5c + 1;
  if (local_4c <= local_60 + -1) {
    iVar3 = ((local_60 + -1) - local_4c) + 1;
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),&local_38,local_4c);
      if (local_38 != 0) {
        local_54 = 1;
        FUN_015f02d0(&local_40,local_38,&local_54);
        FUN_015ef8b0(local_38,&local_54);
        FUN_015ef9a0(local_38,&local_54);
        FUN_015ef8b0(local_38,&local_54);
        FUN_015ef9a0(local_38,&local_54);
        FUN_01704c50(auStack_f8,&local_b8,local_38,&local_54);
        FUN_00414b50(&local_48,local_b8);
        uVar2 = FUN_01704810(&DAT_01704010,1,local_40,local_48);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar2);
      }
      local_4c = local_4c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  local_4c = local_60 + 1;
  if (local_4c <= iVar3 + -1) {
    iVar3 = ((iVar3 + -1) - local_4c) + 1;
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),&local_38,local_4c);
      if (local_38 != 0) {
        cVar1 = FUN_015ef810(local_38);
        if (cVar1 == '\0') {
          local_54 = 1;
          FUN_015f02d0(&local_40,local_38,&local_54);
          FUN_015ef8b0(local_38,&local_54);
          FUN_015ef9a0(local_38,&local_54);
          FUN_015ef8b0(local_38,&local_54);
          FUN_015f02d0(&local_48,local_38,&local_54);
          FUN_015ef8b0(local_38,&local_54);
          FUN_015ef9a0(local_38,&local_54);
          FUN_015ef8b0(local_38,&local_54);
          local_50 = FUN_015f0030(local_38,&local_54);
          if (local_50 == -1) {
            uVar2 = FUN_00b89270();
            FUN_0041ddd0(&local_c8,PTR_PTR_02004de8);
            FUN_00b8e650(uVar2,&local_c0,L"HDLStrings.Msg_SyntaxError",local_c8);
            FUN_01704b80(param_1,local_c0,local_30);
          }
          local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,local_50);
          uVar2 = FUN_01704910(&DAT_017041f0,1,local_40,local_48);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar2);
        }
      }
      local_4c = local_4c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_c8,0xb);
  FUN_00414560(&local_48,4);
  return local_21;
}

