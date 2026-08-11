/* Ghidra address: 00d7c000 */
/* Ghidra symbol: FUN_00d7c000 */


longlong FUN_00d7c000(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00d75900(local_res8,0,param_3);
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x128) = uVar2;
  FUN_005fcd80(*(undefined8 *)(local_res8 + 0x118),L"Tahoma");
  FUN_005fce30(*(undefined8 *)(local_res8 + 0x118),8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

