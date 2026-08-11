/* Ghidra address: 00687cb0 */
/* Ghidra symbol: FUN_00687cb0 */


longlong FUN_00687cb0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00687760(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xa0) = 0xa0;
  FUN_0064cbf0(local_res8,0x4b);
  FUN_0064cc50(local_res8,0x19);
  FUN_0065bce0(local_res8,1);
  lVar2 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0x4c8) = lVar2;
  *(longlong *)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_00688d10;
  lVar2 = FUN_00410e60(&PTR_FUN_00671da0,1);
  *(longlong *)(local_res8 + 0x4d8) = lVar2;
  *(longlong *)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_00688d40;
  *(undefined8 *)(local_res8 + 0x4e8) = 0;
  FUN_00414480(local_res8 + 0x4a0);
  *(undefined4 *)(local_res8 + 0x4ac) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x4b8) = 0;
  *(undefined4 *)(local_res8 + 0x4bc) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x4c0) = 0;
  *(undefined4 *)(local_res8 + 0x4d0) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4f4) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4f8) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x4fc) = 0;
  *(undefined4 *)(local_res8 + 0x500) = 0xffffffff;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

