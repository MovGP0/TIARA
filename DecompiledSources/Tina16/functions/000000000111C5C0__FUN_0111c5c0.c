/* Ghidra address: 0111c5c0 */
/* Ghidra symbol: FUN_0111c5c0 */


longlong FUN_0111c5c0(longlong param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
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
  puVar2 = auStack_c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00bc1350(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xf0) = 1;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x168) = uVar3;
  FUN_004b67b0(uVar3,1);
  plVar1 = *(longlong **)(local_res8 + 0x168);
  *(undefined1 *)((longlong)plVar1 + 0x49) = 2;
  uVar3 = FUN_0111c190(local_res8);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar3);
  plVar1 = *(longlong **)(local_res8 + 0x168);
  if ((char)plVar1[9] == '\0') {
    (**(code **)(*plVar1 + 0x148))(plVar1);
  }
  uVar3 = FUN_00bc5120(&PTR_FUN_00bc29f0,1);
  *(undefined8 *)(local_res8 + 0x1e0) = uVar3;
  FUN_00bc53d0(uVar3,
               L"^(def|class|while|for|if|else|elif|try|except|with|(async[ \\t]+def)|(async[ \\t]+with)|(async[ \\t]+for))\\b"
              );
  *(undefined1 *)(local_res8 + 0x162) = 2;
  FUN_0041ddd0(&local_28,PTR_PTR_02001728);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Comment",local_28);
  *(undefined8 *)(local_res8 + 0x1c0) = uVar3;
  FUN_00bc0bd0(uVar3,0x808080);
  FUN_00bc0bf0(*(undefined8 *)(local_res8 + 0x1c0),2);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1c0));
  FUN_0041ddd0(&local_30,PTR_PTR_02004540);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Identifier",local_30);
  *(undefined8 *)(local_res8 + 0x1c8) = uVar3;
  FUN_00bc1c10(local_res8,uVar3);
  FUN_0041ddd0(&local_38,PTR_PTR_02002438);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"ReservedWord",local_38);
  *(undefined8 *)(local_res8 + 0x1a0) = uVar3;
  FUN_00bc0bf0(uVar3,1);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1a0));
  FUN_0041ddd0(&local_40,PTR_PTR_020032a0);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"NonreservedKeyword",local_40);
  *(undefined8 *)(local_res8 + 0x1a8) = uVar3;
  FUN_00bc0bd0(uVar3,0x800000);
  FUN_00bc0bf0(*(undefined8 *)(local_res8 + 0x1a8),1);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1a8));
  FUN_0041ddd0(&local_48,PTR_PTR_02005368);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"SystemFunctionsAndVariables",local_48);
  *(undefined8 *)(local_res8 + 0x1b0) = uVar3;
  FUN_00bc0bf0(uVar3,1);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1b0));
  FUN_0041ddd0(&local_50,PTR_DAT_02001ff0);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Number",local_50);
  *(undefined8 *)(local_res8 + 0x180) = uVar3;
  FUN_00bc0bd0(uVar3,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x180));
  FUN_0041ddd0(&local_58,PTR_PTR_02003440);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Hexadecimal",local_58);
  *(undefined8 *)(local_res8 + 0x188) = uVar3;
  FUN_00bc0bd0(uVar3,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x188));
  FUN_0041ddd0(&local_60,PTR_PTR_02004ab0);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Octal",local_60);
  *(undefined8 *)(local_res8 + 400) = uVar3;
  FUN_00bc0bd0(uVar3,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 400));
  FUN_0041ddd0(&local_68,PTR_PTR_02003f78);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Float",local_68);
  *(undefined8 *)(local_res8 + 0x198) = uVar3;
  FUN_00bc0bd0(uVar3,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x198));
  FUN_0041ddd0(&local_70,PTR_PTR_020036d0);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Space",local_70);
  *(undefined8 *)(local_res8 + 0x1d0) = uVar3;
  FUN_00bc1c10(local_res8,uVar3);
  FUN_0041ddd0(&local_78,PTR_PTR_02003c78);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"String",local_78);
  *(undefined8 *)(local_res8 + 0x170) = uVar3;
  FUN_00bc0bd0(uVar3,0xff0000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x170));
  FUN_0041ddd0(&local_80,PTR_PTR_02003780);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Documentation",local_80);
  *(undefined8 *)(local_res8 + 0x178) = uVar3;
  FUN_00bc0bd0(uVar3,FUN_00808000);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x178));
  FUN_0041ddd0(&local_88,PTR_PTR_02003258);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"Symbol",local_88);
  *(undefined8 *)(local_res8 + 0x1b8) = uVar3;
  FUN_00bc1c10(local_res8,uVar3);
  FUN_0041ddd0(&local_90,PTR_PTR_020048f0);
  uVar3 = FUN_00bbfc10(&PTR_FUN_00bbd348,1,L"SyntaxError",local_90);
  *(undefined8 *)(local_res8 + 0x1d8) = uVar3;
  FUN_00bc0bd0(uVar3,0xff);
  FUN_00bc1c10(local_res8,*(undefined8 *)(local_res8 + 0x1d8));
  local_98 = local_res8;
  local_a0 = FUN_00bc1c40;
  FUN_00bc2300(local_res8,&local_a0);
  FUN_0041ddd0(local_res8 + 0xf8,PTR_PTR_02005c50);
  FUN_00414560(&local_90,0xe);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

