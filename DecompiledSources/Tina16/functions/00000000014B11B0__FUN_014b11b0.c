/* Ghidra address: 014b11b0 */
/* Ghidra symbol: FUN_014b11b0 */


longlong FUN_014b11b0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_98 [32];
  code *local_78;
  longlong local_70;
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
  
  local_20 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00bc1350(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xf0) = 0;
  FUN_0041ddd0(&local_28,PTR_PTR_02001728);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Comment",local_28);
  *(undefined8 *)(local_res8 + 0x418) = uVar2;
  FUN_00bc0bf0(uVar2,2);
  FUN_00bc0bd0(*(undefined8 *)(local_res8 + 0x418),0x8000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x418));
  FUN_0041ddd0(&local_30,PTR_PTR_02004540);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Identifier",local_30);
  *(undefined8 *)(local_res8 + 0x420) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_38,PTR_PTR_02002438);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"ReservedWord",local_38);
  *(undefined8 *)(local_res8 + 0x428) = uVar2;
  FUN_00bc0bd0(uVar2,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x428));
  FUN_0041ddd0(&local_40,PTR_DAT_02001ff0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Number",local_40);
  *(undefined8 *)(local_res8 + 0x430) = uVar2;
  FUN_00bc0bd0(uVar2,0xff);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x430));
  FUN_0041ddd0(&local_48,PTR_PTR_02003470);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Operator",local_48);
  *(undefined8 *)(local_res8 + 0x438) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_50,&PTR_PTR_014b0208);
  FUN_0041ddd0(&local_58,&PTR_PTR_014b0218);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,local_50,local_58);
  *(undefined8 *)(local_res8 + 0x440) = uVar2;
  FUN_00bc0bd0(uVar2,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x440));
  FUN_0041ddd0(&local_60,PTR_PTR_020036d0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Space",local_60);
  *(undefined8 *)(local_res8 + 0x448) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_68,PTR_PTR_02003c78);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"String",local_68);
  *(undefined8 *)(local_res8 + 0x450) = uVar2;
  FUN_00bc0bd0(uVar2,&DAT_00ff00ff);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x450));
  local_70 = local_res8;
  local_78 = FUN_00bc1c40;
  FUN_00bc2300(local_res8,&local_78);
  FUN_014b04d0(local_res8);
  FUN_0041ddd0(local_res8 + 0xf8,PTR_PTR_02005bb0);
  *(undefined1 *)(local_res8 + 0x160) = 0;
  FUN_00414560(&local_68,9);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

