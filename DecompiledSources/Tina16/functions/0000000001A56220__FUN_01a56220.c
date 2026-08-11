/* Ghidra address: 01a56220 */
/* Ghidra symbol: FUN_01a56220 */


undefined1
FUN_01a56220(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined1 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 local_9c;
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined1 local_49;
  longlong *local_48;
  longlong local_40;
  undefined1 local_31;
  longlong *local_28;
  longlong *local_20;
  
  local_c0 = auStack_118;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = (wchar_t *)0x0;
  local_80 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  local_49 = 0;
  local_31 = *PTR_DAT_02003f60;
  *PTR_DAT_02003f60 = 1;
  FUN_00414b50(&local_78,&DAT_01a56af4);
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar4 = FUN_019a4600();
  local_f8 = (wchar_t *)0x0;
  local_f0 = 0;
  local_40 = FUN_01a33340(&DAT_01a310f8,1,uVar4,0);
  FUN_01a33cd0(local_40,0);
  FUN_0043fc00(local_res20);
  local_f8 = (wchar_t *)0x0;
  local_f0 = 1;
  cVar2 = FUN_01a37700(local_40,local_res10,local_res18,local_res20);
  if (cVar2 == '\0') {
    FUN_00414ad0(param_5,*(undefined8 *)(local_40 + 0xc0));
  }
  else {
    FUN_01a39160(local_40,&local_c8);
    FUN_00414ad0(param_5,local_c8);
    local_49 = 1;
  }
  cVar2 = FUN_01a40a60(param_1);
  if (cVar2 != '\0') {
    local_f8 = L"output_speech.txt";
    FUN_00416cd0(local_60,3,*(undefined8 *)(param_1 + 0x2ba0),L"\\temp\\");
    cVar2 = FUN_00440a20(local_60[0],1);
    if (cVar2 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Calc output file not found (speech)");
      FUN_004134c0(uVar4);
    }
    (**(code **)(*local_48 + 0xd8))(local_48,local_60[0]);
    (**(code **)(*local_48 + 0x38))(local_48,&local_68);
    local_f8 = L"output.txt";
    FUN_00416cd0(local_60,3,*(undefined8 *)(param_1 + 0x2ba0),L"\\temp\\");
    cVar2 = FUN_00440a20(local_60[0],1);
    if (cVar2 == '\0') {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Calc output file not found");
      FUN_004134c0(uVar4);
    }
    (**(code **)(*local_48 + 0xd8))(local_48,local_60[0]);
    (**(code **)(*local_48 + 0x38))(local_48,&local_70);
    FUN_00414ad0(param_1 + 0x820,local_70);
    *(undefined4 *)(param_1 + 0x928) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x90))(*(longlong **)(param_1 + 0x8d0));
    (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x90))(*(longlong **)(param_1 + 0x8d8));
    FUN_00414480(param_1 + 0x8b0);
    cVar2 = FUN_01a40a60(param_1);
    if (cVar2 != '\0') {
      if (0 < *(int *)(param_1 + 0x2ac8)) {
        local_f8 = (wchar_t *)(param_1 + 0x2a48);
        local_f0 = 1;
        FUN_0147c100(*(undefined8 *)(param_1 + 0x6b8),param_1 + 0x2a48,
                     *(int *)(param_1 + 0x920) + -1,0xffff);
      }
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),&local_d0);
      local_98 = local_d0;
      local_9c = 0;
      if (local_d0 != 0) {
        local_9c = *(undefined4 *)(local_d0 + -4);
      }
      *(undefined4 *)(param_1 + 0x920) = local_9c;
      FUN_01a45610(param_1,param_1 + 0x29c0);
      FUN_01a45610(param_1,param_1 + 0x2a48);
      FUN_01a40ae0(param_1);
      while( true ) {
        local_f8 = local_78;
        cVar2 = FUN_01a457c0(param_1,*(undefined8 *)(param_1 + 0x820),param_1 + 0x928,&local_80);
        if (cVar2 == '\0') break;
        iVar3 = FUN_00416db0(local_80,L"#13#10");
        if (iVar3 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0x78))
                    (*(longlong **)(param_1 + 0x8d0),local_80);
          plVar1 = *(longlong **)(param_1 + 0x8d0);
          iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_d8,iVar3 + -1);
          local_88 = FUN_00416740(local_d8);
          local_a8 = *(undefined8 **)(param_1 + 0x2b90);
          (**(code **)*local_a8)(local_a8);
          FUN_004afc10(*(undefined8 *)(param_1 + 0x2b80),local_88);
          local_20 = *(longlong **)(param_1 + 0x2b90);
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
      *(undefined4 *)(param_1 + 0x928) = 1;
      while( true ) {
        local_f8 = local_78;
        cVar2 = FUN_01a457c0(param_1,local_68,param_1 + 0x928,&local_80);
        if (cVar2 == '\0') break;
        iVar3 = FUN_00416db0(local_80,L"#13#10");
        if (iVar3 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x8d8) + 0x78))
                    (*(longlong **)(param_1 + 0x8d8),local_80);
          plVar1 = *(longlong **)(param_1 + 0x8d8);
          iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_e0,iVar3 + -1);
          local_88 = FUN_00416740(local_e0);
          local_b0 = *(undefined8 **)(param_1 + 0x2b90);
          (**(code **)*local_b0)(local_b0);
          FUN_004afc10(*(undefined8 *)(param_1 + 0x2b88),local_88);
          local_28 = *(longlong **)(param_1 + 0x2b90);
          (**(code **)(*local_28 + 8))(local_28);
        }
      }
    }
  }
  *PTR_DAT_02003f60 = local_31;
  if (local_40 != 0) {
    FUN_00410f20(local_40);
  }
  FUN_00410f20(local_48);
  FUN_00414560(&local_e0,2);
  FUN_00414480(&local_d0);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_80,5);
  FUN_00414560(&local_res10,3);
  return local_49;
}

