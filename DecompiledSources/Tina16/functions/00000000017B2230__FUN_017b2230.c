/* Ghidra address: 017b2230 */
/* Ghidra symbol: FUN_017b2230 */


longlong FUN_017b2230(longlong param_1,char param_2,undefined1 param_3,undefined8 *param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  *(undefined1 *)(local_res8 + 0x50) = param_3;
  *(undefined8 *)(local_res8 + 0x18) = *param_4;
  *(undefined8 *)(local_res8 + 0x48) = param_4[1];
  *(undefined4 *)(local_res8 + 0x54) = param_5;
  *(undefined4 *)(local_res8 + 0x58) = param_6;
  *(undefined4 *)(local_res8 + 0x5c) = param_7;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

