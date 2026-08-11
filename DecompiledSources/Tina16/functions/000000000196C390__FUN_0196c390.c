/* Ghidra address: 0196c390 */
/* Ghidra symbol: FUN_0196c390 */


longlong FUN_0196c390(longlong param_1,char param_2)

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
  FUN_0196c550(local_res8);
  *(undefined4 *)(local_res8 + 0xc) = 10;
  *(undefined1 *)(local_res8 + 0x10) = 1;
  *(undefined1 *)(local_res8 + 0x21) = 0;
  *(undefined1 *)(local_res8 + 0x20) = 0;
  FUN_00414480(local_res8 + 0x28);
  *(undefined1 *)(local_res8 + 0x31) = 1;
  *(undefined1 *)(local_res8 + 0x30) = 0;
  *(undefined1 *)(local_res8 + 9) = 1;
  *(undefined8 *)(local_res8 + 0x38) = 0x3c670ef54646d497;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

