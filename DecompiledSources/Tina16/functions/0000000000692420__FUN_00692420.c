/* Ghidra address: 00692420 */
/* Ghidra symbol: FUN_00692420 */


longlong FUN_00692420(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
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
  FUN_00786930(local_res8,0,param_3);
  cVar2 = FUN_006927d0(local_res8);
  if (cVar2 == '\x01') {
    *(undefined1 *)(local_res8 + 0x22) = 1;
  }
  *(undefined1 *)(local_res8 + 100) = 0;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  *(undefined8 *)(local_res8 + 0x68) = 0;
  *(undefined8 *)(local_res8 + 0x78) = 0;
  *(undefined1 *)(local_res8 + 99) = 0;
  *(undefined1 *)(local_res8 + 0x60) = 0x1a;
  *(undefined1 *)(local_res8 + 0x61) = 2;
  *(undefined1 *)(local_res8 + 0x62) = 6;
  *(undefined4 *)(local_res8 + 0x5c) = 0;
  *(undefined4 *)(local_res8 + 0x88) = 0;
  *(undefined1 *)(local_res8 + 0x8c) = 0;
  *(undefined1 *)(local_res8 + 0x8d) = 0;
  *(undefined1 *)(local_res8 + 0x8e) = 0;
  *(undefined1 *)(local_res8 + 0x8f) = 0;
  *(undefined4 *)(local_res8 + 0x90) = 0xffffffff;
  FUN_00692890(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

