/* Ghidra address: 019699b0 */
/* Ghidra symbol: FUN_019699b0 */


longlong FUN_019699b0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
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
  FUN_0195a380(local_res8,0,param_3);
  *(byte *)(local_res8 + 0xd0) = *(byte *)(local_res8 + 0xd0) & 0xfd;
  *(undefined1 *)(*(longlong *)(local_res8 + 0x1c0) + 0x3d) = 0xf;
  FUN_005fcd80(*(undefined8 *)(local_res8 + 0x78),L"Tahoma");
  FUN_005fce30(*(undefined8 *)(local_res8 + 0x78),8);
  FUN_0195cea0(local_res8,0xc0c0c0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

