/* Ghidra address: 01978c50 */
/* Ghidra symbol: FUN_01978c50 */


longlong FUN_01978c50(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  FUN_004b67b0(uVar2,1);
  lVar3 = FUN_0184c830(&PTR_FUN_0183e740,1,0);
  *(longlong *)(local_res8 + 0x18) = lVar3;
  *(undefined1 *)(lVar3 + 0xa0) = 1;
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  FUN_004b6d10(*(undefined8 *)(local_res8 + 8),1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

