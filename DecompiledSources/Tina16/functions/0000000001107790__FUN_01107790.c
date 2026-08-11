/* Ghidra address: 01107790 */
/* Ghidra symbol: FUN_01107790 */


longlong FUN_01107790(longlong param_1,char param_2)

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
  *(undefined8 *)(local_res8 + 0x150) = 0;
  *(undefined8 *)(local_res8 + 0x118) = 0;
  *(undefined8 *)(local_res8 + 0x58) = 0;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  *(undefined1 *)(local_res8 + 0x158) = 0;
  *(undefined2 *)(local_res8 + 0x2e) = 0xffff;
  *(undefined4 *)(local_res8 + 0x15c) = 1;
  *(undefined4 *)(local_res8 + 0x160) = 0;
  FUN_01107340(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

