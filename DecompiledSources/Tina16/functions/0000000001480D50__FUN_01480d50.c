/* Ghidra address: 01480d50 */
/* Ghidra symbol: FUN_01480d50 */


undefined1 FUN_01480d50(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_e8 [36];
  int local_c4;
  int local_c0 [2];
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  bool local_9a;
  bool local_99;
  longlong local_98;
  undefined8 local_90 [2];
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  uint local_54;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  longlong *local_20;
  
  local_b0 = auStack_e8;
  local_68 = (undefined8 *)0x0;
  local_70 = 0;
  local_80 = (undefined8 *)0x0;
  local_90[0] = 0;
  local_29 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  cVar1 = FUN_004113d0(param_1,&LAB_00f23b78);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Root JSON must be an object");
    FUN_004134c0(uVar3);
  }
  local_38 = FUN_004113f0(param_1,&LAB_00f23b78);
  local_40 = FUN_014860a0(local_38,L"circuit");
  if (local_40 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"\"circuit\" object not found");
    FUN_004134c0(uVar3);
  }
  local_50 = FUN_014860c0(local_40,L"components");
  if (local_50 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"\"components\" array not found");
    FUN_004134c0(uVar3);
  }
  local_48 = FUN_014860a0(local_40,L"metadata");
  if (local_48 == 0) {
    local_48 = FUN_00f309b0(&LAB_00f23b78,1);
    FUN_00f30e70(local_40,L"metadata",local_48);
  }
  local_28 = FUN_00853840(&PTR_FUN_008521f8,1,0);
  local_78 = FUN_00f33100(&LAB_00f256b8,1);
  local_58 = 1;
  iVar2 = *(int *)(*(longlong *)(local_50 + 0x10) + 0x10);
  local_c4 = iVar2 + -1;
  local_54 = 0;
  if (-1 < local_c4) {
    do {
      local_c4 = iVar2;
      local_98 = *(longlong *)(local_50 + 0x10);
      if (*(uint *)(local_98 + 0x10) <= local_54) {
        FUN_00594f90();
      }
      local_60 = FUN_004113f0(*(undefined8 *)
                               (*(longlong *)(local_98 + 8) + (longlong)(int)local_54 * 8),
                              &LAB_00f23b78);
      FUN_014861c0(local_60,&local_68,&DAT_01481400);
      uVar3 = FUN_00854410(local_28);
      local_20 = (longlong *)FUN_00854560(uVar3);
      do {
        cVar1 = thunk_FUN_00854703(local_20);
        if (cVar1 == '\0') goto code_r0x0148113a;
        FUN_008545b0(local_20,&local_80);
        cVar1 = FUN_0147b780(local_68,local_80);
        if (cVar1 == '\0') {
          if (local_68 == local_80) {
            local_99 = true;
          }
          else if ((local_68 == (undefined8 *)0x0) || (local_80 == (undefined8 *)0x0)) {
            local_99 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_68,local_80);
            local_99 = iVar2 == 0;
          }
          local_9a = local_99;
        }
        else {
          local_9a = true;
        }
      } while (local_9a == false);
      local_c0[0] = local_58;
      local_b8 = 0;
      FUN_00442f70(&local_70,L"DuplID%d",local_c0,0);
      local_58 = local_58 + 1;
      FUN_00f31ff0(local_60,&DAT_01481400);
      FUN_00f30ec0(local_60,&DAT_01481400,local_70);
      uVar3 = FUN_00f309b0(&LAB_00f23b78,1);
      uVar3 = FUN_00f30ec0(uVar3,L"original",local_68);
      local_a8 = FUN_00f30ec0(uVar3,&DAT_01481454,local_70);
      FUN_00f335b0(local_78,local_a8);
      iVar2 = (**(code **)(*param_2 + 0xb0))(param_2,local_68);
      if (iVar2 < 0) {
        (**(code **)(*param_2 + 0x78))(param_2,local_68);
      }
      local_29 = 1;
code_r0x0148113a:
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
      FUN_014861c0(local_60,local_90,&DAT_01481400);
      cVar1 = FUN_004575a0(local_90,L"DuplID",0);
      if (cVar1 == '\0') {
        FUN_00853e30(local_28,local_68,local_68);
      }
      local_54 = local_54 + 1;
      local_c4 = local_c4 + -1;
      iVar2 = local_c4;
    } while (local_c4 != 0);
  }
  if (*(int *)(*(longlong *)(local_78 + 0x10) + 0x10) < 1) {
    FUN_00410f20(local_78);
  }
  else {
    FUN_00f30e70(local_48,L"renamed_ids",local_78);
  }
  FUN_00410f20(local_28);
  FUN_00414480(local_90);
  FUN_00414480(&local_80);
  FUN_00414560(&local_70,2);
  return local_29;
}

