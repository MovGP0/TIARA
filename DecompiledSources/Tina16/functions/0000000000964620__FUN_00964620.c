/* Ghidra address: 00964620 */
/* Ghidra symbol: FUN_00964620 */


longlong FUN_00964620(longlong param_1,char param_2,longlong param_3,undefined1 param_4)

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
  FUN_009618b0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0xa9) = 0;
  *(undefined1 *)(local_res8 + 0xa8) = param_4;
  *(undefined1 *)(local_res8 + 0xaa) = 0x11;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  if (param_3 == 0) {
    *(undefined1 *)(local_res8 + 0xab) = 7;
  }
  else {
    *(undefined1 *)(local_res8 + 0xab) = 0x11;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

