/* Ghidra address: 0186a830 */
/* Ghidra symbol: FUN_0186a830 */


longlong FUN_0186a830(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_28 = local_res8;
  local_30 = FUN_0186a920;
  uVar2 = FUN_004d6440(&local_30);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

