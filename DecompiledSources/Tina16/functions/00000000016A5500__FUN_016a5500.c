/* Ghidra address: 016a5500 */
/* Ghidra symbol: FUN_016a5500 */


longlong FUN_016a5500(longlong param_1,char param_2,longlong param_3)

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
  FUN_016a4d80(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined1 *)(local_res8 + 0x30) = *(undefined1 *)(param_3 + 0x30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

