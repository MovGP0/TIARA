/* Ghidra address: 017463e0 */
/* Ghidra symbol: FUN_017463e0 */


longlong FUN_017463e0(longlong param_1,char param_2,undefined8 param_3,int param_4)

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
  FUN_0173ce20(local_res8,0,param_3);
  *(int *)(local_res8 + 0x3c) = param_4;
  *(undefined4 *)(local_res8 + 0x40) = 0x10;
  *(undefined4 *)(local_res8 + 0x44) = 0x10;
  *(undefined4 *)(local_res8 + 0x48) = 0x20;
  *(int *)(local_res8 + 0x4c) = param_4 << 4;
  *(undefined4 *)(local_res8 + 0x50) = 0x10;
  *(undefined4 *)(local_res8 + 0x54) = 8;
  *(undefined4 *)(local_res8 + 0x58) = 0x10;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

