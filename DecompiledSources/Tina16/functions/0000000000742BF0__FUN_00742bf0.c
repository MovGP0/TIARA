/* Ghidra address: 00742bf0 */
/* Ghidra symbol: FUN_00742bf0 */


longlong FUN_00742bf0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x98) = 1;
  *(undefined4 *)(local_res8 + 0x78) = 1000;
  local_28 = local_res8;
  local_30 = FUN_00742d40;
  uVar2 = FUN_004d6440(&local_30);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

