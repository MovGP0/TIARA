/* Ghidra address: 01098480 */
/* Ghidra symbol: FUN_01098480 */


longlong FUN_01098480(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_98 [40];
  code *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00bc1350(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xf0) = 0;
  FUN_0041ddd0(&local_28,&PTR_PTR_01095920);
  FUN_0041ddd0(&local_30,&PTR_PTR_01095930);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,local_28,local_30);
  *(undefined8 *)(local_res8 + 0x1918) = uVar2;
  FUN_00bc0bd0(uVar2,0x808080);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1918));
  FUN_0041ddd0(&local_38,PTR_PTR_02001728);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Comment",local_38);
  *(undefined8 *)(local_res8 + 0x1920) = uVar2;
  FUN_00bc0bf0(uVar2,2);
  FUN_00bc0bd0(*(undefined8 *)(local_res8 + 0x1920),0x8000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1920));
  FUN_0041ddd0(&local_40,PTR_PTR_02004540);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Identifier",local_40);
  *(undefined8 *)(local_res8 + 0x1928) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_48,PTR_PTR_02002438);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"ReservedWord",local_48);
  *(undefined8 *)(local_res8 + 0x1930) = uVar2;
  FUN_00bc0bd0(uVar2,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1930));
  FUN_0041ddd0(&local_50,PTR_DAT_02001ff0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Number",local_50);
  *(undefined8 *)(local_res8 + 0x1938) = uVar2;
  FUN_00bc0bd0(uVar2,0x808080);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1938));
  FUN_0041ddd0(&local_58,PTR_PTR_020036d0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Space",local_58);
  *(undefined8 *)(local_res8 + 0x1940) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_60,PTR_PTR_02003c78);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"String",local_60);
  *(undefined8 *)(local_res8 + 0x1948) = uVar2;
  FUN_00bc0bd0(uVar2,0x808080);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1948));
  local_68 = local_res8;
  local_70 = FUN_00bc1c40;
  FUN_00bc2300(local_res8,&local_70);
  FUN_010962b0(local_res8);
  FUN_0041ddd0(local_res8 + 0xf8,PTR_PTR_02005570);
  *(undefined1 *)(local_res8 + 0x160) = 0;
  FUN_00414560(&local_60,8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

