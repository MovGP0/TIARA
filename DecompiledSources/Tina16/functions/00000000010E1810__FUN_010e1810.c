/* Ghidra address: 010e1810 */
/* Ghidra symbol: FUN_010e1810 */


longlong FUN_010e1810(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined1 param_5,undefined1 param_6,undefined1 param_7)

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
  *(undefined4 *)(local_res8 + 0x7e8) = param_4;
  *(undefined1 *)(local_res8 + 0x7f9) = param_5;
  *(undefined1 *)(local_res8 + 0x7fa) = param_6;
  *(undefined1 *)(local_res8 + 0x860) = param_7;
  *(undefined8 *)(local_res8 + 0x8d8) = 0;
  FUN_01aebe10(local_res8,0,param_3);
  FUN_0065b830(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

