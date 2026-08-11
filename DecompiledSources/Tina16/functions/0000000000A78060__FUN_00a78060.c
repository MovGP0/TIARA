/* Ghidra address: 00a78060 */
/* Ghidra symbol: FUN_00a78060 */


longlong FUN_00a78060(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_006e6120(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x4d8) = 0xff;
  *(undefined4 *)(local_res8 + 0x4dc) = 0xffff;
  *(undefined8 *)(local_res8 + 0x4c0) = 0x10000000000000;
  *(undefined8 *)(local_res8 + 0x4c8) = 0x7fefffffffffffff;
  *(undefined8 *)(local_res8 + 0x4d0) = 0x4049000000000000;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

