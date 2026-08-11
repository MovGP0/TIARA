/* Ghidra address: 017b1980 */
/* Ghidra symbol: FUN_017b1980 */


longlong FUN_017b1980(longlong param_1,char param_2,undefined8 *param_3,undefined4 param_4,
                     undefined4 param_5)

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
  FUN_017b58f0(local_res8,0);
  *(undefined8 *)(local_res8 + 0x18) = *param_3;
  *(undefined8 *)(local_res8 + 0x48) = param_3[1];
  *(undefined4 *)(local_res8 + 0x50) = param_4;
  *(undefined4 *)(local_res8 + 0x54) = param_5;
  *(undefined1 *)(local_res8 + 0x58) = 0;
  *(undefined2 *)(local_res8 + 0x59) = 100;
  *(undefined4 *)(local_res8 + 0x5b) = 0xfffffffe;
  *(undefined1 *)(local_res8 + 0x5f) = 3;
  *(undefined2 *)(local_res8 + 0x60) = 100;
  *(undefined4 *)(local_res8 + 0x62) = 0xfffffffe;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

