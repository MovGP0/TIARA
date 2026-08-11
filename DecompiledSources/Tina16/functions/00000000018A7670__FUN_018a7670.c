/* Ghidra address: 018a7670 */
/* Ghidra symbol: FUN_018a7670 */


longlong FUN_018a7670(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_40 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_0197c330(local_res8,0,param_3);
  DAT_02110690 = 0x3ff0000000000000;
  *(undefined1 *)(local_res8 + 0x571) = 0;
  *(undefined1 *)(local_res8 + 0x570) = 0;
  *(undefined1 *)(local_res8 + 0x588) = 0;
  uVar2 = FUN_007e8760(&PTR_FUN_007dba80,1,local_res8);
  *(undefined8 *)(local_res8 + 0x520) = uVar2;
  uVar3 = FUN_0180bfb0();
  uVar3 = FUN_0180a040(uVar3);
  FUN_007e6a70(uVar2,uVar3);
  local_20 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(local_res8 + 0x520));
  FUN_018ad710(local_res8);
  FUN_007e34c0(*(undefined8 *)(*(longlong *)(local_res8 + 0x520) + 0x80),local_20);
  FUN_0180bfe0(&local_48,0x259);
  FUN_007e2c60(local_20,local_48);
  FUN_007e2fb0(local_20,0xd);
  *(longlong *)(local_20 + 0x118) = local_res8;
  *(code **)(local_20 + 0x110) = FUN_018a8c70;
  local_20 = FUN_007dd3a0(&PTR_FUN_007d94d0,1,*(undefined8 *)(local_res8 + 0x520));
  FUN_007e34c0(*(undefined8 *)(*(longlong *)(local_res8 + 0x520) + 0x80),local_20);
  FUN_0180bfe0(&local_50,600);
  FUN_007e2c60(local_20,local_50);
  FUN_007e2fb0(local_20,0xe);
  *(longlong *)(local_20 + 0x118) = local_res8;
  *(code **)(local_20 + 0x110) = FUN_018a8cb0;
  uVar2 = FUN_007d5080(&PTR_FUN_006441f8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x580) = uVar2;
  FUN_007d55b0(uVar2,0x10);
  FUN_007d5610(*(undefined8 *)(local_res8 + 0x580),0x10);
  uVar2 = FUN_006d4a60(&PTR_FUN_006ac6a0,1,local_res8);
  *(undefined8 *)(local_res8 + 0x568) = uVar2;
  local_28 = *(longlong **)(local_res8 + 0x568);
  (**(code **)(*local_28 + 0x130))(local_28,local_res8);
  FUN_0064c650(local_28,1);
  FUN_0064dbe0(local_28,0);
  FUN_0064cc50(*(undefined8 *)(local_res8 + 0x568),0x16);
  FUN_006d51f0(*(undefined8 *)(local_res8 + 0x568),*(undefined8 *)(local_res8 + 0x580));
  local_28[0x9e] = local_res8;
  local_28[0x9d] = (longlong)FUN_018ad060;
  local_28[0x30] = local_res8;
  local_28[0x2f] = (longlong)FUN_018ad1e0;
  FUN_00659460(local_28,1);
  lVar4 = FUN_0189a910(&PTR_FUN_01897b40,1,local_res8);
  *(longlong *)(local_res8 + 0x500) = lVar4;
  (**(code **)(**(longlong **)(lVar4 + 0x4b8) + 0x230))(*(longlong **)(lVar4 + 0x4b8),0);
  lVar4 = *(longlong *)(*(longlong *)(local_res8 + 0x500) + 0x4b8);
  *(longlong *)(lVar4 + 0x4d0) = local_res8;
  *(code **)(lVar4 + 0x4c8) = FUN_018a50c0;
  local_30 = *(longlong **)(local_res8 + 0x500);
  (**(code **)(*local_30 + 0x130))(local_30,local_res8);
  FUN_0064c650(local_30,3);
  FUN_006e21a0(*(undefined8 *)(*(longlong *)(local_res8 + 0x500) + 0x4e8),0);
  FUN_00743910(local_30,0);
  FUN_0065d610(local_30,3);
  lVar4 = local_30[0x9d];
  *(longlong *)(lVar4 + 0x200) = local_res8;
  *(code **)(lVar4 + 0x1f8) = FUN_018ac080;
  FUN_0064dd50(local_30,*(undefined8 *)(local_res8 + 0x520));
  plVar5 = (longlong *)FUN_0074b800(&PTR_FUN_0073d4a8,1,local_res8);
  *(longlong **)(local_res8 + 0x510) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,local_res8);
  FUN_0064c650(*(undefined8 *)(local_res8 + 0x510),4);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x510),0);
  lVar4 = *(longlong *)(local_res8 + 0x510);
  *(longlong *)(lVar4 + 0x398) = local_res8;
  *(code **)(lVar4 + 0x390) = FUN_018a8c60;
  uVar2 = FUN_0180bfb0();
  uVar2 = FUN_0180a040(uVar2);
  FUN_0189a560(*(undefined8 *)(*(longlong *)(local_res8 + 0x500) + 0x4b8),uVar2);
  FUN_0180bfe0(&local_58,0x1015);
  local_88._0_1_ = 3;
  local_80 = 0xffffffff;
  uVar2 = FUN_0189a020(*(undefined8 *)(*(longlong *)(local_res8 + 0x500) + 0x4b8),0x21,local_58,0);
  *(undefined8 *)(local_res8 + 0x4c8) = uVar2;
  FUN_0180bfe0(&local_60,0x259);
  local_88._0_1_ = 0;
  local_80 = 0xffffffff;
  FUN_0189a020(*(undefined8 *)(*(longlong *)(local_res8 + 0x500) + 0x4b8),0xd,local_60,0xd);
  FUN_0180bfe0(&local_68,600);
  local_88 = (uint)local_88._1_3_ << 8;
  local_80 = 0xffffffff;
  FUN_0189a020(*(undefined8 *)(*(longlong *)(local_res8 + 0x500) + 0x4b8),0xe,local_68,0xe);
  if ((*(ushort *)(local_res8 + 0x34) & 0x10) == 0) {
    uVar2 = FUN_0181a5c0(&PTR_FUN_01893e20,1,local_res8);
    *(undefined8 *)(local_res8 + 0x508) = uVar2;
    FUN_018a9960(local_res8,0);
    FUN_0064c650(*(undefined8 *)(local_res8 + 0x508),4);
    FUN_0064b380(*(undefined8 *)(*(longlong *)(local_res8 + 0x508) + 0xd0),3,0x32);
  }
  plVar5 = (longlong *)FUN_018a54b0(&PTR_FUN_018a37b8,1,local_res8);
  *(longlong **)(local_res8 + 0x540) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,local_res8);
  FUN_0064c650(*(undefined8 *)(local_res8 + 0x540),3);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x540),0);
  lVar4 = *(longlong *)(local_res8 + 0x540);
  *(undefined8 *)(lVar4 + 0x548) = 0x3fb999999999999a;
  *(undefined1 *)(lVar4 + 0x508) = 1;
  *(longlong *)(lVar4 + 0x538) = local_res8;
  plVar5 = (longlong *)FUN_0074b800(&PTR_FUN_0073d4a8,1,local_res8);
  *(longlong **)(local_res8 + 0x538) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,local_res8);
  FUN_0064c650(*(undefined8 *)(local_res8 + 0x538),3);
  FUN_0064cbf0(*(undefined8 *)(local_res8 + 0x538),4);
  FUN_0064cb30(*(undefined8 *)(local_res8 + 0x538),
               *(int *)(*(longlong *)(local_res8 + 0x500) + 0x98) + 1);
  lVar4 = *(longlong *)(local_res8 + 0x538);
  *(longlong *)(lVar4 + 0x398) = local_res8;
  *(code **)(lVar4 + 0x390) = FUN_018a8c60;
  plVar5 = (longlong *)FUN_018a54b0(&PTR_FUN_018a37b8,1,local_res8);
  *(longlong **)(local_res8 + 0x550) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,local_res8);
  FUN_0064c650(*(undefined8 *)(local_res8 + 0x550),5);
  *(longlong *)(*(longlong *)(local_res8 + 0x550) + 0x538) = local_res8;
  plVar5 = (longlong *)FUN_00742f60(&PTR_FUN_00733e50,1,local_res8);
  *(longlong **)(local_res8 + 0x4e8) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,local_res8);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x4e8),0);
  local_88 = 0;
  (**(code **)(**(longlong **)(local_res8 + 0x4e8) + 400))(*(longlong **)(local_res8 + 0x4e8),0,0,0)
  ;
  plVar5 = (longlong *)FUN_0067eb90(&PTR_FUN_00669e80,1,*(undefined8 *)(local_res8 + 0x4e8));
  *(longlong **)(local_res8 + 0x4e0) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,*(undefined8 *)(local_res8 + 0x4e8));
  (**(code **)(**(longlong **)(local_res8 + 0x4e0) + 0x118))(*(longlong **)(local_res8 + 0x4e0),0);
  FUN_0067fce0(*(undefined8 *)(local_res8 + 0x4e0),2);
  local_88 = 0x14;
  (**(code **)(**(longlong **)(local_res8 + 0x4e0) + 400))
            (*(longlong **)(local_res8 + 0x4e0),4,0x14,0xff);
  plVar5 = (longlong *)FUN_00687cb0(&PTR_FUN_00673008,1,*(undefined8 *)(local_res8 + 0x4e8));
  *(longlong **)(local_res8 + 0x4c0) = plVar5;
  (**(code **)(*plVar5 + 0x130))(plVar5,*(undefined8 *)(local_res8 + 0x4e8));
  local_88 = 0x19;
  (**(code **)(**(longlong **)(local_res8 + 0x4c0) + 400))
            (*(longlong **)(local_res8 + 0x4c0),0x5c,0x2c,0x4b);
  uVar2 = FUN_0180bfb0();
  FUN_01809b60(uVar2,&local_70,L"clCancel");
  FUN_0064de00(*(undefined8 *)(local_res8 + 0x4c0),local_70);
  FUN_0064dbe0(*(undefined8 *)(local_res8 + 0x4c0),0);
  lVar4 = *(longlong *)(local_res8 + 0x4c0);
  *(longlong *)(lVar4 + 0x200) = local_res8;
  *(code **)(lVar4 + 0x1f8) = FUN_018ac8e0;
  *(undefined1 *)(local_res8 + 0x4ba) = 1;
  *(undefined4 *)(local_res8 + 0x528) = 1;
  *(undefined1 *)(local_res8 + 0x532) = 3;
  *(undefined8 *)(local_res8 + 0x558) = 0x3ff0000000000000;
  *(undefined1 *)(local_res8 + 0x560) = 0;
  *(undefined4 *)(local_res8 + 0x518) = 0xff000005;
  *(undefined1 *)(local_res8 + 0x498) = 1;
  uVar2 = FUN_018b07d0(&PTR_FUN_0189ee08,1,local_res8);
  *(undefined8 *)(local_res8 + 0x578) = uVar2;
  uVar2 = FUN_0197c220();
  uVar2 = FUN_0197e980(uVar2,0,*(undefined8 *)(local_res8 + 0x550));
  *(undefined8 *)(local_res8 + 0x4a8) = uVar2;
  FUN_0064cbf0(local_res8,100);
  FUN_0064cc50(local_res8,100);
  *(undefined4 *)(local_res8 + 0x52c) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x58a) = 1;
  *(undefined1 *)(local_res8 + 0x58b) = 1;
  FUN_00414560(&local_70,6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

