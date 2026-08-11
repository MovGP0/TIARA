/* Ghidra address: 01c914a0 */
/* Ghidra symbol: FUN_01c914a0 */


void FUN_01c914a0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
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
  undefined1 *local_60;
  longlong *local_48;
  int local_40;
  char local_39;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_108;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_70 = 0;
  local_30 = 0;
  local_38 = 0;
  puVar1 = auStack_108;
  if (*(longlong *)(param_1 + 0x17c8) == 0) {
    uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined8 *)(param_1 + 0x17c8) = uVar4;
    puVar1 = local_60;
  }
  local_60 = puVar1;
  (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x90))(*(longlong **)(param_1 + 0x17c8));
  FUN_00416ba0(&local_70,*(undefined8 *)PTR_DAT_020049a0,L"\\TUTORIAL\\TUTORIAL.INI");
  FUN_01b1def0(&local_68,local_70);
  local_48 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_68);
  local_e8 = 0;
  (**(code **)(*local_48 + 0x10))(local_48,&local_80,L"Language",L"MenuRoot");
  FUN_00415dd0(&local_88,local_80,0);
  FUN_00b0d000(&local_78,local_88,0xfde9);
  FUN_004168b0(&local_30,local_78);
  if (local_30 != 0) {
    FUN_00414b50(&local_38,local_30);
    local_40 = 1;
    do {
      FUN_0043f750(&local_90,local_40);
      FUN_00416ba0(&local_30,L"Item",local_90);
      local_e8 = 0;
      (**(code **)(*local_48 + 0x10))(local_48,&local_a0,L"Root",local_30);
      FUN_00415dd0(&local_a8,local_a0,0);
      FUN_00b0d000(&local_98,local_a8,0xfde9);
      FUN_004168b0(&local_30,local_98);
      if (local_30 != 0) {
        FUN_00648780(&local_b8,local_30);
        local_e8 = local_b8;
        FUN_00416cd0(&local_b0,3,*(undefined8 *)PTR_DAT_020049a0,L"\\TUTORIAL\\");
        cVar2 = FUN_00440a20(local_b0,1);
        if (cVar2 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x78))
                    (*(longlong **)(param_1 + 0x17c8),local_30);
        }
      }
      local_40 = local_40 + 1;
    } while (local_30 != 0);
  }
  FUN_00410f20(local_48);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x28))(*(longlong **)(param_1 + 0x17c8));
  if ((iVar3 == 0) &&
     (local_20 = (longlong *)FUN_01c913e0(auStack_108,*(undefined8 *)(param_2 + 200)),
     local_20 != (longlong *)0x0)) {
    while (iVar3 = FUN_007e2ef0(local_20), 0 < iVar3) {
      iVar3 = FUN_007e2ef0(local_20);
      uVar4 = FUN_007e2f10(local_20,iVar3 + -1);
      FUN_00410f20(uVar4);
    }
    FUN_00410f20(local_20);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x28))(*(longlong **)(param_1 + 0x17c8));
  if ((iVar3 != 0) && (*PTR_DAT_020052b8 == '\0')) {
    local_20 = (longlong *)FUN_01c913e0(auStack_108,*(undefined8 *)(param_2 + 200));
    local_39 = local_20 != (longlong *)0x0;
    if (local_20 == (longlong *)0x0) {
      local_20 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
      (**(code **)(*local_20 + 0x50))(local_20,L"mnTutorials");
      *(undefined4 *)((longlong)local_20 + 0xac) = 0x476;
      iVar3 = FUN_007e2fe0(param_2);
      FUN_007e31e0(*(undefined8 *)(param_2 + 200),iVar3 + 1,local_20);
    }
    FUN_007e2c60(local_20,local_38);
    local_28 = local_20;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x28))();
    local_40 = 0;
    if (-1 < iVar3 + -1) {
      do {
        if (local_39 == '\0') {
          local_20 = (longlong *)FUN_007dd3a0(&PTR_FUN_007d94d0,1,param_1);
          FUN_0043f750(&local_c8,local_40 + 1);
          FUN_00416ba0(&local_c0,L"mnTutorial",local_c8);
          (**(code **)(*local_20 + 0x50))(local_20,local_c0);
          local_20[0x23] = param_1;
          local_20[0x22] = (longlong)FUN_01c91cf0;
          FUN_007e34c0(local_28,local_20);
        }
        else {
          local_20 = (longlong *)FUN_007e2f10(local_28,local_40);
        }
        (**(code **)(**(longlong **)(param_1 + 0x17c8) + 0x18))
                  (*(longlong **)(param_1 + 0x17c8),&local_d8,local_40);
        FUN_00648720(&local_d0,local_d8);
        FUN_007e2c60(local_20,local_d0);
        local_40 = local_40 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_d8,6);
  FUN_004144d0(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414520(&local_98);
  FUN_00414480(&local_90);
  FUN_004144d0(&local_88);
  FUN_00414480(&local_80);
  FUN_00414520(&local_78);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_38,2);
  return;
}

