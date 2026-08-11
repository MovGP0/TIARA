/* Ghidra address: 00c38640 */
/* Ghidra symbol: FUN_00c38640 */


longlong FUN_00c38640(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0065f0e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x50;
  *(undefined4 *)(local_res8 + 0x318) = 0;
  *(undefined4 *)(local_res8 + 0x31c) = 100;
  *(undefined4 *)(local_res8 + 800) = 0;
  *(undefined1 *)(local_res8 + 0x324) = 1;
  *(undefined1 *)(local_res8 + 0x325) = 1;
  *(undefined1 *)(local_res8 + 0x326) = 1;
  *(undefined4 *)(local_res8 + 0x328) = 0;
  *(undefined4 *)(local_res8 + 0x32c) = 0xffffff;
  FUN_0064cbf0(local_res8,100);
  FUN_0064cc50(local_res8,100);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

