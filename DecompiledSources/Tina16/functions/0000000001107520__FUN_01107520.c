/* Ghidra address: 01107520 */
/* Ghidra symbol: FUN_01107520 */


longlong FUN_01107520(longlong param_1,char param_2)

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
  FUN_01106eb0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x110) = 0;
  *(undefined8 *)(local_res8 + 0x118) = 0x408f400000000000;
  *(undefined8 *)(local_res8 + 0x120) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x128) = 0;
  *(undefined8 *)(local_res8 + 0x130) = 0;
  *(undefined1 *)(local_res8 + 0x149) = 1;
  *(undefined1 *)(local_res8 + 0x14a) = 0xb;
  *(undefined1 *)(local_res8 + 0x148) = 0;
  *(undefined8 *)(local_res8 + 0x150) = 0x4024000000000000;
  *(undefined8 *)(local_res8 + 0x158) = 0x412e848000000000;
  *(undefined4 *)(local_res8 + 0x160) = 0x14;
  *(undefined8 *)(local_res8 + 0x168) = 0;
  *(undefined8 *)(local_res8 + 0x170) = 0x3ff0000000000000;
  *(undefined4 *)(local_res8 + 0x178) = 10;
  *(undefined1 *)(local_res8 + 0x17c) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

