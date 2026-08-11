/* Ghidra address: 01bd5500 */
/* Ghidra symbol: FUN_01bd5500 */


longlong FUN_01bd5500(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_01bff680(local_res8,0,param_3);
  FUN_0064c650(local_res8,0);
  *(undefined1 *)(local_res8 + 0xff) = 1;
  *(undefined1 *)(local_res8 + 0x548) = 0;
  *(undefined4 *)(local_res8 + 0x550) = 0;
  *(undefined1 *)(local_res8 + 0x538) = 0;
  *(undefined4 *)(local_res8 + 0x54c) = 0x7d;
  *(undefined8 *)(local_res8 + 0x560) = 0;
  *(undefined8 *)(local_res8 + 0x568) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

