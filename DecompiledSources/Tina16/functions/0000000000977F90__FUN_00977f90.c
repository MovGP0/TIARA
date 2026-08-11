/* Ghidra address: 00977f90 */
/* Ghidra symbol: FUN_00977f90 */


longlong FUN_00977f90(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined1 *)(local_res8 + 0x98) = 1;
  FUN_00414480(local_res8 + 0x90);
  FUN_009784b0(local_res8);
  *(undefined1 *)(local_res8 + 0xa4) = 6;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined4 *)(local_res8 + 0xd0) = 0;
  *(undefined1 *)(local_res8 + 0x78) = 0;
  *(undefined1 *)(local_res8 + 0x79) = 0;
  *(undefined4 *)(local_res8 + 0x7c) = 0;
  *(undefined4 *)(local_res8 + 0x80) = 0;
  *(undefined4 *)(local_res8 + 0x84) = 0;
  *(undefined4 *)(local_res8 + 0x9c) = 0;
  *(undefined4 *)(local_res8 + 0xa0) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

