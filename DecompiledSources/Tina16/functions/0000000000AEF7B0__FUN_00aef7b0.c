/* Ghidra address: 00aef7b0 */
/* Ghidra symbol: FUN_00aef7b0 */


longlong * FUN_00aef7b0(longlong *param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00a76c90(local_res8,0,param_3);
  cVar3 = FUN_004113d0(param_3,&PTR_FUN_00ae9c00);
  if (cVar3 != '\0') {
    local_res8[0xed] = param_3;
  }
  *(undefined4 *)(local_res8 + 0x14) = 0xab;
  *(ushort *)(local_res8 + 0x114) = *(ushort *)(local_res8 + 0x114) | 4;
  FUN_0064cc50(local_res8,0x96);
  FUN_0064cbf0(local_res8,0x96);
  FUN_00af6f90(local_res8,0xfffc);
  lVar4 = FUN_00742f60(&PTR_FUN_00733e50,1,local_res8);
  local_res8[0xe7] = lVar4;
  FUN_00743850(lVar4,0);
  FUN_00743880(local_res8[0xe7],0);
  FUN_0064c650(local_res8[0xe7],5);
  (**(code **)(*(longlong *)local_res8[0xe7] + 0x230))((longlong *)local_res8[0xe7],0);
  plVar1 = (longlong *)local_res8[0xe7];
  *(uint *)(plVar1 + 0x14) = *(uint *)(plVar1 + 0x14) | 0x20000;
  (**(code **)(*plVar1 + 0x130))(plVar1,local_res8);
  lVar4 = FUN_00aff590(&PTR_FUN_00ae8c90,1,local_res8,local_res8);
  local_res8[0xe8] = lVar4;
  FUN_0064df70(lVar4,0);
  (**(code **)(*(longlong *)local_res8[0xe8] + 0x130))
            ((longlong *)local_res8[0xe8],local_res8[0xe7]);
  FUN_00743880(local_res8[0xe8],0);
  FUN_00743850(local_res8[0xe8],0);
  FUN_0065bb80(local_res8[0xe8],0);
  lVar4 = local_res8[0xe8];
  *(longlong **)(lVar4 + 0x160) = local_res8;
  *(undefined8 *)(lVar4 + 0x158) = *(undefined8 *)(*local_res8 + 0x480);
  *(longlong **)(lVar4 + 0x170) = local_res8;
  *(undefined8 *)(lVar4 + 0x168) = *(undefined8 *)(*local_res8 + 0x488);
  *(longlong **)(lVar4 + 0x180) = local_res8;
  *(undefined8 *)(lVar4 + 0x178) = *(undefined8 *)(*local_res8 + 0x490);
  *(longlong **)(lVar4 + 0x260) = local_res8;
  *(code **)(lVar4 + 600) = FUN_00af4640;
  FUN_00652570(lVar4,local_res8[0x26]);
  lVar4 = local_res8[0xe8];
  *(longlong **)(lVar4 + 0x290) = local_res8;
  *(code **)(lVar4 + 0x288) = FUN_00af2880;
  lVar4 = FUN_0068e2d0(&PTR_FUN_00679048,1,local_res8);
  local_res8[0xeb] = lVar4;
  FUN_0068e690(lVar4,1);
  lVar4 = local_res8[0xeb];
  *(undefined2 *)(lVar4 + 0x4a8) = 0x10;
  *(longlong **)(lVar4 + 0x4c8) = local_res8;
  *(code **)(lVar4 + 0x4c0) = FUN_00af2730;
  FUN_0064dbe0(lVar4,0);
  FUN_0065bce0(local_res8[0xeb],0);
  *(undefined4 *)(local_res8 + 0xec) = *(undefined4 *)(local_res8[0xeb] + 0x98);
  (**(code **)(*(longlong *)local_res8[0xeb] + 0x130))
            ((longlong *)local_res8[0xeb],local_res8[0xe7]);
  lVar4 = FUN_0068e2d0(&PTR_FUN_00679048,1,local_res8);
  local_res8[0xea] = lVar4;
  FUN_0068e690(lVar4,0);
  lVar4 = local_res8[0xea];
  *(undefined2 *)(lVar4 + 0x4a8) = 0xf;
  *(longlong **)(lVar4 + 0x4c8) = local_res8;
  *(code **)(lVar4 + 0x4c0) = FUN_00af2660;
  FUN_0064dbe0(lVar4,0);
  FUN_0065bce0(local_res8[0xea],0);
  (**(code **)(*(longlong *)local_res8[0xea] + 0x130))
            ((longlong *)local_res8[0xea],local_res8[0xe7]);
  *(undefined1 *)((longlong)local_res8 + 0x799) = 3;
  lVar4 = FUN_00aa5b50(&PTR_FUN_00a90568,1,local_res8,local_res8[0xe8]);
  local_res8[0x116] = lVar4;
  *(longlong **)(lVar4 + 0x250) = local_res8;
  *(code **)(lVar4 + 0x248) = FUN_00afc670;
  *(longlong **)(lVar4 + 0x180) = local_res8;
  *(code **)(lVar4 + 0x178) = FUN_00afbe10;
  *(undefined1 *)(lVar4 + 0x91) = 1;
  *(longlong **)(lVar4 + 0xf0) = local_res8;
  *(undefined8 *)(lVar4 + 0xe8) = *(undefined8 *)(*local_res8 + 0x470);
  local_res8[0x122] = *(longlong *)(lVar4 + 0x298);
  FUN_00afea00(local_res8,0x14);
  lVar4 = FUN_00affbd0(&DAT_00ae9a18,1);
  local_res8[0x115] = lVar4;
  lVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0xee] = lVar4;
  lVar4 = FUN_00610ca0(&PTR_FUN_0060fb80,1);
  local_res8[0xef] = lVar4;
  lVar4 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  local_res8[0xe9] = lVar4;
  FUN_00742eb0(lVar4,0);
  FUN_00742ed0(local_res8[0xe9],200);
  local_28 = local_res8;
  local_30 = FUN_00af3440;
  FUN_00742ef0(local_res8[0xe9],&local_30);
  lVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x11e] = lVar4;
  lVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x124] = lVar4;
  lVar4 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  local_res8[0x125] = lVar4;
  FUN_00742eb0(lVar4,0);
  FUN_00742ed0(local_res8[0x125],100);
  local_28 = local_res8;
  local_30 = FUN_00af5a30;
  FUN_00742ef0(local_res8[0x125],&local_30);
  *(ushort *)(local_res8 + 0x114) = *(ushort *)(local_res8 + 0x114) & 0xfffb;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

