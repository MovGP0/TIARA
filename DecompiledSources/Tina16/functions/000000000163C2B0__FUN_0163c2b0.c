/* Ghidra address: 0163c2b0 */
/* Ghidra symbol: FUN_0163c2b0 */


void FUN_0163c2b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  int local_24;
  longlong *local_20;
  
  local_c0 = auStack_128;
  local_e0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_b0 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))(*(longlong **)(param_1 + 0x88));
  local_24 = 0;
  local_30 = iVar2;
  if (-1 < iVar2 + -1) {
    do {
      local_48 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                           (*(longlong **)(param_1 + 0x88),local_24);
      if (*(char *)(local_48 + 0x4a) == '\0') {
        FUN_01625e40(&local_c8,*(undefined8 *)(local_b0 + 0x638));
        FUN_01618cb0(&local_d0,*(undefined8 *)(local_48 + 0x10),0);
        FUN_01618cb0(&local_d8,*(undefined8 *)(local_48 + 0x18),0);
        local_108 = (wchar_t *)local_d0;
        local_100 = &DAT_0163c820;
        local_f8 = local_d8;
        FUN_00416cd0(&local_78,5,local_c8,&DAT_0163c810);
        local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffffffffff00);
        FUN_01627000(local_48,param_2,&local_80,&local_88);
        FUN_01626f30(local_48,param_2,&local_34,&local_38);
        local_98 = FUN_01628af0(local_80,local_88,param_2);
        if (local_98 == 0) {
          local_98 = FUN_01628af0(local_88,local_80,param_2);
          uVar1 = local_34;
          local_28 = local_34;
          local_34 = local_38;
          local_38 = uVar1;
          FUN_00414b50(&local_68,local_80);
          FUN_00414b50(&local_80,local_88);
          FUN_00414b50(&local_88,local_68);
        }
        local_a0 = FUN_0163c1d0(param_1,param_2,local_34);
        (**(code **)(*local_20 + 0x78))(local_20,local_80);
        (**(code **)(*local_20 + 0x78))(local_20,local_88);
        lVar3 = param_1;
        if (*(char *)(param_1 + 0x5b8) == '\0') {
          lVar3 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
        }
        local_a8 = lVar3;
        FUN_01634e60(local_a8,local_20);
        local_108 = (wchar_t *)((ulonglong)local_108 & 0xffffffffffffff00);
        local_60 = (longlong *)FUN_01628520(0xe,local_20,param_2,0);
        FUN_01613f20(local_60,0);
        FUN_017bf050(local_60,0,local_78);
        (**(code **)(*local_20 + 0x90))(local_20);
        FUN_0163cf20(param_2,L"PostProcessCurrents: VSOUR_ created");
        (**(code **)(*local_60 + 0x288))(local_60,&local_e0);
        FUN_016137b0(&local_e8,local_60);
        local_108 = L", CompID: ";
        local_100 = (undefined *)local_e8;
        FUN_00416cd0(&local_68,4,L"pComp^.GetLabel: ",local_e0);
        FUN_0163d260(param_2,local_68);
        *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 1;
        local_3c = *(undefined4 *)(param_2 + 0x70);
        FUN_016271b0(local_60,1,local_3c,param_2);
        local_108 = (wchar_t *)param_2;
        FUN_01629460(local_98,param_1,local_3c,local_34);
        FUN_00410f20(local_a0);
      }
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_e8,5);
  FUN_00414560(&local_88,5);
  return;
}

