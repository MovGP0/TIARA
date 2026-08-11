/* Ghidra address: 01d44bd0 */
/* Ghidra symbol: FUN_01d44bd0 */


longlong FUN_01d44bd0(longlong param_1,char param_2)

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
  *(undefined4 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0xc) = 3;
  *(undefined8 *)(local_res8 + 0x18) = 0x3f9eb851eb851eb8;
  *(undefined4 *)(local_res8 + 0x10) = 100;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

