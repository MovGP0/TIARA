/* Ghidra address: 00704210 */
/* Ghidra symbol: FUN_00704210 */


longlong * FUN_00704210(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined1 auStack_68 [40];
  code *local_40;
  longlong *local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_006d3e60(0x200);
  FUN_006835c0(local_res8,0,param_3);
  local_38 = local_res8;
  local_40 = FUN_00704b00;
  lVar2 = FUN_004d6210(&local_40);
  local_res8[0xab] = lVar2;
  local_20 = (**(code **)(*local_res8 + 0x2c8))(local_res8);
  uVar3 = FUN_00706350(local_20,1,local_res8);
  (**(code **)(*local_res8 + 0x2f0))(local_res8,uVar3);
  lVar2 = local_res8[0x9e];
  *(longlong **)(lVar2 + 0x38) = local_res8;
  local_res8[0xb1] = *(longlong *)(lVar2 + 0x40);
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  local_res8[0xac] = lVar2;
  *(longlong **)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_00704670;
  *(undefined1 *)(local_res8 + 0xb0) = 0;
  *(undefined1 *)(local_res8 + 0xa8) = 2;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

