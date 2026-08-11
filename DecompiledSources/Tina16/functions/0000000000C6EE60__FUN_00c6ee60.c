/* Ghidra address: 00c6ee60 */
/* Ghidra symbol: FUN_00c6ee60 */


void FUN_00c6ee60(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_c0;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  char local_69;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_48;
  int local_3c;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_e8;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = FUN_005ea3c0(&DAT_005e7878,1);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  cVar1 = FUN_005ea880(local_30,*(undefined8 *)(param_1 + 0x10),1);
  if (cVar1 != '\0') {
    FUN_005eb0d0(local_30,local_38);
    iVar2 = (**(code **)(*local_38 + 0x28))();
    local_3c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,&local_88,local_3c);
        FUN_005eacf0(local_30,local_88);
        local_3c = local_3c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_58 = *(longlong *)(param_1 + 0x20);
    iVar2 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
    local_b4 = iVar2 + -1;
    local_3c = 0;
    if (-1 < local_b4) {
      do {
        local_b4 = iVar2;
        FUN_005ea630(local_30);
        FUN_00414480(&local_20);
        local_60 = *(undefined8 *)(param_1 + 0x10);
        FUN_0044f8b0(&local_20,local_60);
        FUN_0043f750(&local_98,local_3c);
        local_c8 = L"Place_";
        local_c0 = local_98;
        FUN_00416cd0(&local_90,4,local_20,&DAT_00c6f380);
        FUN_005ea710(local_30,local_90);
        FUN_00414480(&local_20);
        FUN_00414480(&local_28);
        local_68 = *(undefined8 *)(param_1 + 0x10);
        FUN_0044f8b0(&local_28,local_68);
        FUN_0043f750(&local_a8,local_3c);
        local_c8 = L"Place_";
        local_c0 = local_a8;
        FUN_00416cd0(&local_a0,4,local_28,&DAT_00c6f380);
        local_69 = FUN_005ea880(local_30,local_a0,0);
        FUN_00414480(&local_28);
        if (local_69 != '\0') {
          local_48 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x20),local_3c);
          FUN_00c6fa30(local_48,&local_b0);
          FUN_005eb630(local_30,L"Name",local_b0);
          FUN_005eb630(local_30,L"Path",*(undefined8 *)(local_48 + 0x30));
          FUN_005eb630(local_30,L"RegPath",*(undefined8 *)(local_48 + 0x48));
          FUN_005eb630(local_30,L"IconDll",*(undefined8 *)(local_48 + 0x28));
          FUN_005eba20(local_30,L"Icon",*(undefined4 *)(local_48 + 0x18));
          FUN_005eba20(local_30,L"IconHot",*(undefined4 *)(local_48 + 0x1c));
          FUN_005eb630(local_30,L"Hint",*(undefined8 *)(local_48 + 0x20));
          FUN_005eba20(local_30,L"SpecFolder",
                       *(undefined4 *)(PTR_DAT_02001b20 + (ulonglong)*(byte *)(local_48 + 0x40) * 4)
                      );
          FUN_005eba90(local_30,L"AutoCaption",*(undefined1 *)(local_48 + 0x50));
        }
        local_3c = local_3c + 1;
        local_b4 = local_b4 + -1;
        iVar2 = local_b4;
      } while (local_b4 != 0);
    }
  }
  FUN_005ea630(local_30);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_b0,6);
  FUN_00414560(&local_28,2);
  return;
}

