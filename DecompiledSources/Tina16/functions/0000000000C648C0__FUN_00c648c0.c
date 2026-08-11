/* Ghidra address: 00c648c0 */
/* Ghidra symbol: FUN_00c648c0 */


longlong FUN_00c648c0(longlong param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 0x50) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined1 *)(local_res8 + 0x78) = 1;
  *(undefined1 *)(local_res8 + 0x79) = 1;
  *(undefined1 *)(local_res8 + 0x7a) = 1;
  *(undefined1 *)(local_res8 + 0x7b) = 1;
  *(undefined8 *)(local_res8 + 0x68) = 0;
  lVar2 = FUN_00410e60(&PTR_FUN_00c62e90,1);
  *(longlong *)(local_res8 + 0x58) = lVar2;
  *(undefined4 *)(lVar2 + 0xc) = 0;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(local_res8 + 0xac) = 0;
  *(undefined4 *)(local_res8 + 0xb0) = 0;
  uVar3 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

