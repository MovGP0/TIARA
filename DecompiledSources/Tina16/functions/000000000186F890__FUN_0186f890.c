/* Ghidra address: 0186f890 */
/* Ghidra symbol: FUN_0186f890 */


longlong * FUN_0186f890(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_0197be20(local_res8,0,param_3,param_4);
  (**(code **)(*local_res8 + 200))(local_res8);
  lVar1 = local_res8[0xe];
  *(longlong **)(lVar1 + 0x3d0) = local_res8;
  *(code **)(lVar1 + 0x3c8) = FUN_0186fa00;
  local_20 = (longlong *)local_res8[0xe];
  FUN_0064dbe0(local_20,0);
  FUN_00682f00(local_20,0);
  local_20[0x96] = (longlong)local_res8;
  local_20[0x95] = (longlong)FUN_0186fe70;
  local_20[0x80] = (longlong)local_res8;
  local_20[0x7f] = (longlong)FUN_0186fe40;
  local_20[0x7e] = (longlong)local_res8;
  local_20[0x7d] = (longlong)FUN_0186fe10;
  (**(code **)(*local_20 + 0x130))(local_20,local_res8[3]);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

