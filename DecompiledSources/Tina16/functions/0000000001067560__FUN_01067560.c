/* Ghidra address: 01067560 */
/* Ghidra symbol: FUN_01067560 */


longlong FUN_01067560(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_c8 [40];
  code *local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00bc1350(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xf0) = 1;
  FUN_0041ddd0(&local_28,PTR_PTR_02001478);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Assembler",local_28);
  *(undefined8 *)(local_res8 + 0x16d8) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_30,PTR_PTR_02001728);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Comment",local_30);
  *(undefined8 *)(local_res8 + 0x16e0) = uVar2;
  FUN_00bc0bf0(uVar2,2);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x16e0));
  FUN_0041ddd0(&local_38,PTR_PTR_02004540);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Identifier",local_38);
  *(undefined8 *)(local_res8 + 0x16f0) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_40,PTR_PTR_02005b80);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"IllegalChar",local_40);
  *(undefined8 *)(local_res8 + 0x16f8) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_48,PTR_PTR_02002438);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"ReservedWord",local_48);
  *(undefined8 *)(local_res8 + 0x1700) = uVar2;
  FUN_00bc0bf0(uVar2,1);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1700));
  FUN_0041ddd0(&local_50,PTR_DAT_02001ff0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Number",local_50);
  *(undefined8 *)(local_res8 + 0x1708) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_58,PTR_PTR_02003730);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Character",local_58);
  *(undefined8 *)(local_res8 + 0x1738) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_60,PTR_PTR_02003f78);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Float",local_60);
  *(undefined8 *)(local_res8 + 0x1710) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_68,PTR_PTR_02003440);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Hexadecimal",local_68);
  *(undefined8 *)(local_res8 + 0x1718) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_70,PTR_PTR_02004ab0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Octal",local_70);
  *(undefined8 *)(local_res8 + 0x1720) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_78,PTR_PTR_020036d0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Space",local_78);
  *(undefined8 *)(local_res8 + 0x1728) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_80,PTR_PTR_02003c78);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"String",local_80);
  *(undefined8 *)(local_res8 + 0x1730) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_88,PTR_PTR_02003258);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Symbol",local_88);
  *(undefined8 *)(local_res8 + 0x1740) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_90,PTR_PTR_02004538);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Preprocessor",local_90);
  *(undefined8 *)(local_res8 + 0x16e8) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  local_98 = local_res8;
  local_a0 = FUN_00bc1c40;
  FUN_00bc2300(local_res8,&local_a0);
  FUN_010673f0(local_res8);
  *(undefined1 *)(local_res8 + 0x161) = 0;
  *(undefined1 *)(local_res8 + 0x160) = 0;
  FUN_0041ddd0(local_res8 + 0xf8,PTR_PTR_020040e0);
  FUN_00414560(&local_90,0xe);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

