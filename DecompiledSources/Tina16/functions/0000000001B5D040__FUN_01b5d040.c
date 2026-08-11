/* Ghidra address: 01b5d040 */
/* Ghidra symbol: FUN_01b5d040 */


longlong FUN_01b5d040(longlong param_1,char param_2,undefined4 param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_010dbbd0(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x58) = 1;
  *(undefined1 *)(local_res8 + 0x59) = 1;
  *(undefined1 *)(local_res8 + 0x5a) = 1;
  *(undefined1 *)(local_res8 + 0x5b) = 0;
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined4 *)(local_res8 + 0x6c) = 0;
  *(undefined1 *)(local_res8 + 0x68) = 1;
  *(undefined4 *)(local_res8 + 0x70) = 0;
  *(undefined8 *)(local_res8 + 0x80) = 0;
  *(undefined8 *)(local_res8 + 0x88) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x90) = uVar2;
  *(undefined1 *)(local_res8 + 0x99) = 0;
  if (*(char *)(param_4 + 0x7fa) == '\a') {
    *(undefined1 *)(local_res8 + 0x98) = 0;
  }
  else if (*(char *)(param_4 + 0x7fa) == '\x10') {
    *(undefined1 *)(local_res8 + 0x98) = 1;
  }
  else {
    *(undefined1 *)(local_res8 + 0x98) = 0;
  }
  uVar2 = FUN_004b6930(&PTR_FUN_010d9a38,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  FUN_004b67b0(uVar2,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

