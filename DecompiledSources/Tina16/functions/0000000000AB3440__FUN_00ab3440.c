/* Ghidra address: 00ab3440 */
/* Ghidra symbol: FUN_00ab3440 */


longlong FUN_00ab3440(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     ulonglong param_5,longlong param_6,char param_7)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong local_res8;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  longlong local_40;
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_70 = auStack_118;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar2 = auStack_118;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_70;
  }
  local_70 = puVar2;
  if (param_4 != 0) {
    FUN_00a72b50(param_4,&local_28);
    FUN_00a72920(param_4,&local_30);
  }
  local_f8 = param_5;
  local_f0 = local_28;
  local_e8 = local_30;
  FUN_00ac3120(local_res8,0,param_3,param_4);
  if (*(char *)(local_res8 + 0x40) == '\0') {
    *(undefined1 *)(local_res8 + 0x40) = 1;
  }
  uVar7 = FUN_00416740(*(undefined8 *)(local_res8 + 0xd0));
  *(undefined8 *)(local_res8 + 0xd8) = uVar7;
  uVar7 = FUN_00610ca0(&LAB_00a7db10,1);
  *(undefined8 *)(local_res8 + 0x118) = uVar7;
  uVar7 = FUN_00610ca0(&PTR_FUN_00a81f20,1);
  *(undefined8 *)(local_res8 + 0xf8) = uVar7;
  uVar7 = FUN_00610d40(&LAB_00a88c98,1,0);
  *(undefined8 *)(local_res8 + 0x100) = uVar7;
  uVar7 = FUN_00610ca0(&LAB_00a848c0,1);
  *(undefined8 *)(local_res8 + 0xf0) = uVar7;
  uVar7 = FUN_00a5b160(param_5);
  local_f8 = local_f8 & 0xffffffff00000000;
  local_20 = FUN_00a93d20(&DAT_00a7d4d0,1,local_res8,uVar7);
  FUN_00414ad0(local_20 + 0x20,*(undefined8 *)(param_5 + 0x58));
  if (param_6 != 0) {
    local_40 = *(longlong *)(param_6 + 8);
    local_44 = 0;
    if (local_40 != 0) {
      local_44 = *(int *)(local_40 + -4);
    }
    if (0 < local_44) {
      FUN_00a94360(local_20);
      FUN_00a5c040(param_5,*(undefined8 *)(local_20 + 0x40));
      FUN_00a943c0(local_20,*(longlong *)(local_20 + 0x40) + 8);
      FUN_00a72ea0(*(undefined8 *)(local_20 + 8),param_6);
      local_50 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 600);
      FUN_004ae7e0(local_50,local_20);
      if (*(char *)(*(longlong *)(local_res8 + 0x18) + 0x2c9) == '\0') {
        FUN_00a94140(local_20,*(undefined4 *)(param_6 + 0x30));
      }
    }
  }
  local_58 = *(undefined8 *)(local_res8 + 0x118);
  FUN_004ae7e0(local_58,local_20);
  local_60 = *(longlong *)(local_20 + 0x38);
  uVar1 = *(uint *)(*(longlong *)(local_60 + 0x18) + 0x28);
  uVar8 = (int)uVar1 >> 0x1f;
  uVar5 = FUN_00a54c00(param_5,(uVar1 ^ uVar8) - uVar8);
  *(undefined4 *)(local_res8 + 0xb4) = uVar5;
  if (param_7 != '\0') {
    iVar6 = FUN_00a54d10(param_5,&local_31);
    *(int *)(local_res8 + 300) = iVar6;
    if (local_31 != '\0') {
      local_68 = iVar6;
      if (0x59 < iVar6) {
        local_68 = 0x5a;
      }
      *(int *)(local_res8 + 0xb0) = local_68;
      local_64 = iVar6;
    }
  }
  FUN_00468a10(&local_88,L"right");
  cVar3 = FUN_0046f320(param_5 + 0xd8,&local_88);
  if (cVar3 == '\0') {
    FUN_00468a10(&local_a0,L"center");
    cVar3 = FUN_0046f320(param_5 + 0xd8,&local_a0);
    if (cVar3 == '\0') {
      FUN_00468a10(&local_b8,L"justify");
      cVar3 = FUN_0046f320(param_5 + 0xd8,&local_b8);
      if (cVar3 == '\0') {
        *(undefined1 *)(local_res8 + 0x120) = 1;
      }
      else {
        *(undefined1 *)(local_res8 + 0x120) = 4;
      }
    }
    else {
      *(undefined1 *)(local_res8 + 0x120) = 2;
    }
  }
  else {
    *(undefined1 *)(local_res8 + 0x120) = 3;
  }
  FUN_00468a10(&local_d0,L"break-word");
  uVar4 = FUN_0046f320(param_5 + 0x618,&local_d0);
  *(undefined1 *)(local_res8 + 0xa8) = uVar4;
  cVar3 = FUN_004113d0(local_res8,&PTR_FUN_00a92a10);
  if (cVar3 == '\0') {
    if (*(char *)(*(longlong *)(local_res8 + 0x18) + 0x309) == '\0') {
      *(undefined1 *)(local_res8 + 0x128) = 0;
    }
    else {
      *(undefined1 *)(local_res8 + 0x128) = 1;
    }
  }
  else {
    *(undefined1 *)(local_res8 + 0x128) = 2;
  }
  cVar3 = FUN_0046c350(param_5 + 0x6a8);
  if (cVar3 == '\0') {
    cVar3 = FUN_0046c390(param_5 + 0x6a8);
    if (cVar3 != '\0') {
      FUN_00467e90(&local_d8,param_5 + 0x6a8);
      FUN_00a2bdd0(local_d8,local_res8 + 0x128);
    }
  }
  else {
    uVar4 = FUN_00462650(param_5 + 0x6a8);
    *(undefined1 *)(local_res8 + 0x128) = uVar4;
  }
  FUN_00414480(&local_d8);
  FUN_00417840(&local_d0,&DAT_004013d8,4);
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

