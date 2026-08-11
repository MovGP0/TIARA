/* Ghidra address: 0177ce70 */
/* Ghidra symbol: FUN_0177ce70 */


longlong FUN_0177ce70(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00c7a400(local_res8,0,param_3);
  plVar2 = (longlong *)FUN_007e8760(&PTR_FUN_007dba80,1,local_res8);
  *(longlong **)(local_res8 + 0x3f8) = plVar2;
  (**(code **)(*plVar2 + 0x50))(plVar2,L"ppmnuPopupMenu");
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x400) = uVar3;
  *(undefined8 *)(local_res8 + 0x3b8) = *(undefined8 *)(local_res8 + 0x3f8);
  *(longlong *)(local_res8 + 0x2b0) = local_res8;
  *(code **)(local_res8 + 0x2a8) = FUN_0177d7f0;
  *(longlong *)(local_res8 + 0x158) = local_res8;
  *(code **)(local_res8 + 0x150) = FUN_0177d8f0;
  *(longlong *)(local_res8 + 0xa0) = local_res8;
  *(code **)(local_res8 + 0x98) = FUN_0177d940;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

