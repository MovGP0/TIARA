/* Ghidra address: 006fad90 */
/* Ghidra symbol: FUN_006fad90 */


longlong FUN_006fad90(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_40 [16];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0069f9a0(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xa0) = 0x2100ab;
  FUN_0064cbf0(local_res8,0x96);
  FUN_0064cc50(local_res8,0x1d);
  FUN_0064c650(local_res8,1);
  FUN_0069fa90(local_res8,0);
  *(undefined4 *)(local_res8 + 0x4a4) = 0x17;
  *(undefined4 *)(local_res8 + 0x4a8) = 0x16;
  *(undefined1 *)(local_res8 + 0x4c9) = 0;
  *(undefined1 *)(local_res8 + 0x4ca) = 0;
  *(undefined1 *)(local_res8 + 0x51c) = 1;
  *(undefined1 *)(local_res8 + 0x4e6) = 1;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x4b0) = uVar4;
  uVar4 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  *(undefined8 *)(local_res8 + 0x4c0) = uVar4;
  FUN_0064b200(uVar4,local_res8);
  lVar5 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x4f0) = lVar5;
  *(longlong *)(lVar5 + 0x20) = local_res8;
  *(code **)(lVar5 + 0x18) = FUN_006fcfd0;
  lVar5 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x500) = lVar5;
  *(longlong *)(lVar5 + 0x20) = local_res8;
  *(code **)(lVar5 + 0x18) = FUN_006fd1d0;
  lVar5 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x510) = lVar5;
  *(longlong *)(lVar5 + 0x20) = local_res8;
  *(code **)(lVar5 + 0x18) = FUN_006fd2c0;
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x520) = uVar4;
  local_20 = *(longlong **)(local_res8 + 0x520);
  (**(code **)(*local_20 + 0x88))(local_20,1);
  (**(code **)(*local_20 + 0x70))(local_20,1);
  lVar5 = FUN_00609e10(local_20);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),0xff00000f);
  plVar6 = (longlong *)FUN_00609e10(local_20);
  local_58 = 1;
  FUN_004238d0(local_40,0,0,1);
  (**(code **)(*plVar6 + 0xa8))(plVar6,local_40);
  *(undefined ***)(local_res8 + 0x128) = &PTR_FUN_0069f520;
  plVar6 = (longlong *)FUN_00777cd0();
  uVar2 = (**(code **)(*plVar6 + 0x98))(plVar6);
  *(undefined1 *)(local_res8 + 0x4e4) = uVar2;
  uVar4 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 0x498) = uVar4;
  FUN_00701790(local_res8,0xff000005);
  uVar3 = FUN_00635930(0xff00000f,0xffffffe7);
  FUN_00701750(local_res8,uVar3);
  *(undefined4 *)(local_res8 + 0x4d8) = 0xefd3c6;
  FUN_006fcac0(local_res8,1);
  FUN_007016c0(local_res8,3);
  FUN_00702d00(local_res8,1);
  FUN_00701710(local_res8,0);
  *(undefined4 *)(local_res8 + 0x4e0) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

