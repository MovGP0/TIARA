/* Ghidra address: 01119b00 */
/* Ghidra symbol: FUN_01119b00 */


longlong FUN_01119b00(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_88 [40];
  code *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00bc1350(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xf0) = 0;
  FUN_0041ddd0(&local_28,PTR_PTR_02001728);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Comment",local_28);
  *(undefined8 *)(local_res8 + 0x958) = uVar2;
  FUN_00bc0bf0(uVar2,2);
  FUN_00bc0bd0(*(undefined8 *)(local_res8 + 0x958),0x8000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x958));
  FUN_0041ddd0(&local_30,PTR_PTR_02004540);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Identifier",local_30);
  *(undefined8 *)(local_res8 + 0x960) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_38,PTR_PTR_02002438);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"ReservedWord",local_38);
  *(undefined8 *)(local_res8 + 0x968) = uVar2;
  FUN_00bc0bf0(uVar2,1);
  FUN_00bc0bd0(*(undefined8 *)(local_res8 + 0x968),0x800000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x968));
  FUN_0041ddd0(&local_40,PTR_DAT_02001ff0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Number",local_40);
  *(undefined8 *)(local_res8 + 0x970) = uVar2;
  FUN_00bc0bd0(uVar2,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x970));
  FUN_0041ddd0(&local_48,PTR_PTR_020036d0);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Space",local_48);
  *(undefined8 *)(local_res8 + 0x978) = uVar2;
  FUN_00bc1c10(local_res8,uVar2);
  FUN_0041ddd0(&local_50,PTR_PTR_02003c78);
  uVar2 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"String",local_50);
  *(undefined8 *)(local_res8 + 0x980) = uVar2;
  FUN_00bc0bd0(uVar2,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x980));
  local_58 = local_res8;
  local_60 = FUN_00bc1c40;
  FUN_00bc2300(local_res8,&local_60);
  FUN_01118620(local_res8);
  FUN_0041ddd0(local_res8 + 0xf8,PTR_PTR_020043e8);
  *(undefined1 *)(local_res8 + 0x160) = 0;
  FUN_00414560(&local_50,6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

