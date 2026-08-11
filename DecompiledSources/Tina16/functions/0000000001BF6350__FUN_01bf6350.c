/* Ghidra address: 01bf6350 */
/* Ghidra symbol: FUN_01bf6350 */


longlong FUN_01bf6350(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  int local_1c;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_0061cd00(local_res8,0,param_3);
  *(byte *)(local_res8 + 0x58) = *(byte *)(local_res8 + 0x58) & 0xfe;
  uVar4 = FUN_01bf6e30(local_res8);
  *(undefined8 *)(local_res8 + 0xe0) = uVar4;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_res8 + 0x158) = plVar5;
  (**(code **)(*plVar5 + 0x60))(plVar5,PTR_u_0_3_1_3_2_6_3_9_4_12_5_12_6_17_7_01fe2170);
  iVar2 = (**(code **)(**(longlong **)(local_res8 + 0x158) + 0x28))();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_28 = *(longlong **)(local_res8 + 0x158);
      FUN_004b3cf0(local_28,&local_40,local_1c);
      FUN_004b4060(local_28,&local_38,local_40);
      iVar3 = FUN_0043fc00(local_38);
      (**(code **)(*local_28 + 0x48))(local_28,local_1c,(longlong)iVar3);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  lVar6 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x130) = lVar6;
  *(longlong *)(lVar6 + 0x20) = local_res8;
  *(code **)(lVar6 + 0x18) = FUN_01bf8d00;
  lVar6 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x100) = lVar6;
  *(longlong *)(lVar6 + 0x20) = local_res8;
  *(code **)(lVar6 + 0x18) = FUN_01bf8d00;
  lVar6 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x140) = lVar6;
  *(longlong *)(lVar6 + 0x20) = local_res8;
  *(code **)(lVar6 + 0x18) = FUN_01bf8d00;
  FUN_00414560(&local_40,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

