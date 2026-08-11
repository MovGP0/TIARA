/* Ghidra address: 006e0ec0 */
/* Ghidra symbol: FUN_006e0ec0 */


longlong * FUN_006e0ec0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00652880(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) & 0xfffffffd | 0x86000;
  FUN_0064cbf0(local_res8,0x79);
  FUN_0064cc50(local_res8,0x61);
  FUN_0065bce0(local_res8,1);
  FUN_0064e0c0(local_res8,0);
  lVar2 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  local_res8[0x93] = lVar2;
  FUN_0064b200(lVar2,local_res8);
  lVar2 = (**(code **)(*local_res8 + 0x268))(local_res8);
  local_res8[0xaa] = lVar2;
  *(undefined1 *)((longlong)local_res8 + 0x491) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x52c) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x52e) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x52d) = 1;
  *(undefined1 *)(local_res8 + 0x9b) = 1;
  lVar2 = FUN_007d5160(&PTR_FUN_00643b48,1,0x20,0x20);
  local_res8[0x98] = lVar2;
  *(undefined4 *)(local_res8 + 0xa3) = 0xffffffff;
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[0xad] = lVar2;
  *(undefined1 *)(local_res8 + 0xac) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x561) = 1;
  lVar2 = FUN_00742bf0(&PTR_FUN_007334d8,1,local_res8);
  local_res8[0xdb] = lVar2;
  FUN_00742eb0(lVar2,0);
  FUN_00742ed0(local_res8[0xdb],0);
  local_28 = local_res8;
  local_30 = FUN_006e24f0;
  FUN_00742ef0(local_res8[0xdb],&local_30);
  *(undefined1 *)((longlong)local_res8 + 0x58c) = 1;
  *(undefined1 *)(local_res8 + 0xa9) = 1;
  local_28 = local_res8;
  local_30 = FUN_006e1b60;
  lVar2 = FUN_004d6210(&local_30);
  local_res8[0x96] = lVar2;
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0x9c] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006e42c0;
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0xa8] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006e42c0;
  *(undefined4 *)((longlong)local_res8 + 0x514) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x9e) = 0;
  lVar2 = local_res8[0x26];
  *(undefined1 *)(lVar2 + 0x20) = 0x12;
  *(undefined1 *)(lVar2 + 0x21) = 0x1f;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

