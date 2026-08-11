/* Ghidra address: 01101370 */
/* Ghidra symbol: FUN_01101370 */


longlong FUN_01101370(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined1 *)(local_res8 + 0x138) = 0;
  *(undefined8 *)(local_res8 + 0x158) = 0;
  *(undefined4 *)(local_res8 + 0x110) = 0;
  *(undefined8 *)(local_res8 + 0x140) = 0x3ff0000000000000;
  *(undefined8 *)(local_res8 + 0x148) = 0xbff0000000000000;
  *(undefined4 *)(local_res8 + 0x128) = 0;
  *(undefined8 *)(local_res8 + 0x168) = 0xc6293e5939a08cea;
  *(undefined4 *)(local_res8 + 0x160) = 0;
  *(undefined8 *)(local_res8 + 0x170) = 0;
  *(undefined1 *)(local_res8 + 0x180) = 0;
  *(undefined1 *)(local_res8 + 0x181) = 0;
  *(undefined8 *)(local_res8 + 0x188) = 0;
  *(undefined8 *)(local_res8 + 400) = 0;
  *(undefined8 *)(local_res8 + 0x198) = 0;
  FUN_01ab2610(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

