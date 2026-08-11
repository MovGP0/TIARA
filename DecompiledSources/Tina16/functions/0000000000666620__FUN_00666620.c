/* Ghidra address: 00666620 */
/* Ghidra symbol: FUN_00666620 */


longlong FUN_00666620(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xa8) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x94) = 1;
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined4 *)(local_res8 + 0xa0) = 500;
  *(undefined1 *)(local_res8 + 0xa4) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

