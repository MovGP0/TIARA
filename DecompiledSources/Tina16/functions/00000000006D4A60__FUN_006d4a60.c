/* Ghidra address: 006d4a60 */
/* Ghidra symbol: FUN_006d4a60 */


longlong FUN_006d4a60(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00652880(local_res8,0,param_3);
  FUN_0064cbf0(local_res8,0x121);
  FUN_0064cc50(local_res8,0xc1);
  FUN_0065bce0(local_res8,1);
  *(undefined4 *)(local_res8 + 0xa0) = 0x280081;
  lVar2 = FUN_004b28b0(&PTR_FUN_006d4020,1);
  *(longlong *)(local_res8 + 0x4c8) = lVar2;
  *(longlong *)(lVar2 + 0x38) = local_res8;
  uVar3 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  *(undefined8 *)(local_res8 + 0x490) = uVar3;
  FUN_0064b200(uVar3,local_res8);
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x4a0) = lVar2;
  *(longlong *)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_006d5280;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

