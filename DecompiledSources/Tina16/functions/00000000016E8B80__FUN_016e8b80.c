/* Ghidra address: 016e8b80 */
/* Ghidra symbol: FUN_016e8b80 */


longlong FUN_016e8b80(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined1 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_7;
  FUN_016e2d40(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x68) = 0xbff0000000000000;
  *(undefined8 *)(local_res8 + 0x70) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

