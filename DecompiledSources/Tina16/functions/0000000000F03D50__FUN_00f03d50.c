/* Ghidra address: 00f03d50 */
/* Ghidra symbol: FUN_00f03d50 */


longlong FUN_00f03d50(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 8) = param_3;
  plVar3 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(longlong **)(local_res8 + 0x18) = plVar3;
  uVar4 = FUN_00f03ff0(local_res8);
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar4);
  lVar1 = *(longlong *)(local_res8 + 0x18);
  *(longlong *)(lVar1 + 0x10) = local_res8;
  *(code **)(lVar1 + 8) = FUN_00f04020;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

