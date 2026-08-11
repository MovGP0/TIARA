/* Ghidra address: 014a74d0 */
/* Ghidra symbol: FUN_014a74d0 */


longlong FUN_014a74d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                     undefined1 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_res20;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_76;
  undefined1 local_75;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_90 = auStack_f8;
  local_98 = 0;
  local_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_48 = 0;
  local_28 = 0;
  FUN_00414480(&local_50);
  local_75 = 0;
  local_76 = 0;
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_60);
  FUN_00414b50(&local_70,local_res8);
  FUN_004414c0(&local_58,local_res8,L".lock#");
  cVar3 = FUN_00440a20(local_res8,1);
  if (cVar3 != '\0') {
    local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    lVar5 = FUN_01b22280(local_res8);
    if (0x300000 < lVar5) {
      FUN_0044d440();
    }
    FUN_004b9f40(local_20,local_res8);
    local_d8 = local_res8;
    local_d0 = local_60;
    local_c8 = local_58;
    local_c0 = &local_50;
    local_b8 = &local_75;
    local_b0 = &local_76;
    local_a8 = &local_38;
    local_28 = FUN_014a7b70(&local_res10,local_20,param_5,local_res20);
    if (local_res10 != 0) {
      FUN_012beeb0(*(undefined8 *)(local_res10 + 0xd8));
      FUN_0198c3b0(local_res10);
      FUN_019a53e0(local_res10,0);
      FUN_019a4ba0(local_res10,0);
      FUN_019a53e0(local_res10,0);
      uVar4 = FUN_014a7030(local_res8,local_res10);
      *(undefined1 *)(local_res10 + 0x218) = uVar4;
      FUN_00414ad0(local_res10 + 0x543,local_70);
      FUN_00414ad0(local_res10 + 0x360,local_70);
      *(undefined8 *)(local_res10 + 0x242) = 0x6975637269432409;
      *(undefined2 *)(local_res10 + 0x24a) = 0x2474;
      local_48 = local_res10;
      FUN_00417c40(PTR_DAT_02004010,local_res10 + 0x492,&DAT_01d0d0b8);
    }
    if ((local_20 != local_28) && (local_28 != 0)) {
      cVar3 = FUN_004113d0(local_28,&PTR_FUN_0047c498);
      if (cVar3 != '\0') {
        FUN_00414b50(&local_30,*(undefined8 *)(local_28 + 0x10));
      }
    }
    FUN_00410f20(local_28);
    if (local_30 != 0) {
      FUN_004412f0(local_30);
    }
    FUN_014a72f0(&local_98,local_50,2);
    FUN_00414b50(&local_50,local_98);
    local_74 = FUN_0043fc50(local_50,0x50);
    if ((local_74 < 0x47) && (local_48 != 0)) {
      FUN_015fc210(local_48 + 0x492,0);
      puVar2 = PTR_DAT_02004010;
      puVar1 = (undefined8 *)(PTR_DAT_02004010 + 0x8b1);
      *(undefined8 *)(PTR_DAT_02004010 + 0x8a9) = *(undefined8 *)(local_48 + 0xd3b);
      *puVar1 = *(undefined8 *)(local_48 + 0xd43);
      *(undefined2 *)(puVar2 + 0x8b9) = *(undefined2 *)(local_48 + 0xd4b);
      puVar2[0x8bb] = *(undefined1 *)(local_48 + 0xd4d);
    }
  }
  FUN_00414480(&local_98);
  FUN_00414560(&local_70,5);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res8);
  return local_48;
}

