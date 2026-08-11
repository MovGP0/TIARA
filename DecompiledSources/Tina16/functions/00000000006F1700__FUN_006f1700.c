/* Ghidra address: 006f1700 */
/* Ghidra symbol: FUN_006f1700 */


longlong * FUN_006f1700(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  FUN_006655a0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) & 0xfffffffd | 0x86000;
  FUN_0064cbf0(local_res8,0xfa);
  FUN_0064cc50(local_res8,0x96);
  FUN_006f3280(local_res8,1);
  (**(code **)(*local_res8 + 0x330))(local_res8,0);
  FUN_0064e0c0(local_res8,0);
  FUN_0065bce0(local_res8,1);
  FUN_006f3850(local_res8,1);
  FUN_006f3360(local_res8,1);
  FUN_006f32a0(local_res8,1);
  lVar2 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  local_res8[0x93] = lVar2;
  FUN_0064b200(lVar2,local_res8);
  *(undefined4 *)((longlong)local_res8 + 0x54c) = 0xffffffff;
  uVar3 = (**(code **)(*local_res8 + 800))(local_res8);
  lVar2 = FUN_006eda50(uVar3,1,local_res8);
  local_res8[0xa0] = lVar2;
  lVar2 = FUN_00707e40(&PTR_FUN_006c2a08,1,local_res8);
  local_res8[0xee] = lVar2;
  lVar2 = (**(code **)(*local_res8 + 0x2c8))(local_res8);
  local_res8[0x9c] = lVar2;
  lVar2 = (**(code **)(*local_res8 + 0x2c0))(local_res8);
  local_res8[0xb2] = lVar2;
  *(undefined1 *)(local_res8 + 0xef) = 0;
  lVar2 = FUN_006f1490(&PTR_FUN_006c5258,1,local_res8);
  local_res8[0x9e] = lVar2;
  lVar2 = FUN_004b26d0(&PTR_FUN_006c4f08,1,local_res8,&PTR_FUN_006c4bc0);
  local_res8[0xb3] = lVar2;
  *(undefined1 *)(local_res8 + 0xb4) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x5a1) = 0;
  *(undefined4 *)(local_res8 + 0xb6) = 0;
  *(undefined4 *)(local_res8 + 0xac) = 0xffffffff;
  lVar2 = FUN_007d5160(&PTR_FUN_00643b48,1,0x20,0x20);
  local_res8[0x9a] = lVar2;
  local_28 = local_res8;
  local_30 = FUN_006f2bb0;
  lVar2 = FUN_004d6210(&local_30);
  local_res8[0xf0] = lVar2;
  local_28 = local_res8;
  local_30 = FUN_006f2930;
  lVar2 = FUN_004d6210(&local_30);
  local_res8[0xf1] = lVar2;
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0xad] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006f2490;
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0xaf] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006f2490;
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0xae] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006f2490;
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0xb0] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006f2490;
  *(undefined4 *)(local_res8 + 0x96) = 0xffffffff;
  *(undefined1 *)((longlong)local_res8 + 0x5ac) = 0;
  *(byte *)((longlong)local_res8 + 0xfc) = *(byte *)((longlong)local_res8 + 0xfc) | 4;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

