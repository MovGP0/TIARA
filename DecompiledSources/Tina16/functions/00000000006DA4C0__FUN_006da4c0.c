/* Ghidra address: 006da4c0 */
/* Ghidra symbol: FUN_006da4c0 */


longlong * FUN_006da4c0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00652880(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x14) = 0;
  FUN_0064c650(local_res8,1);
  FUN_0064cc50(local_res8,0x11);
  lVar2 = (**(code **)(*local_res8 + 0x268))(local_res8);
  local_res8[0x92] = lVar2;
  lVar2 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  local_res8[0x95] = lVar2;
  FUN_0064b200(lVar2,local_res8);
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0x98] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006dc060;
  *(undefined1 *)(local_res8 + 0x97) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x4ba) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x4a1) = 0;
  *(undefined1 *)(local_res8 + 0x94) = 0;
  local_res8[0x93] = 0;
  *(undefined1 *)(local_res8 + 0xae) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x571) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x572) = 0;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

