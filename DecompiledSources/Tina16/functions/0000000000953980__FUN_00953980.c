/* Ghidra address: 00953980 */
/* Ghidra symbol: FUN_00953980 */


longlong FUN_00953980(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  FUN_0094c4e0(local_res8,0,param_3);
  FUN_00414b90(local_res8 + 0xa8,param_4);
  FUN_00414520(local_res8 + 0x58);
  FUN_00414b90(local_res8 + 0xb0,param_5);
  FUN_00414b90(local_res8 + 0xb8,param_6);
  FUN_00414b90(local_res8 + 0x80,param_7);
  *(undefined8 *)(local_res8 + 0x98) = 0;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  *(undefined8 *)(local_res8 + 0x88) = 0;
  *(undefined8 *)(local_res8 + 0xa0) = 1;
  *(undefined2 *)(local_res8 + 0x78) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

