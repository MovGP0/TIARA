/* Ghidra address: 00d7eb00 */
/* Ghidra symbol: FUN_00d7eb00 */


longlong FUN_00d7eb00(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x2f0) = param_3;
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x2f8) = uVar2;
  local_19 = 0;
  do {
    uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
    uVar3 = (ulonglong)local_19;
    *(undefined8 *)(local_res8 + 8 + uVar3 * 8) = uVar2;
    FUN_005fcd80(uVar2,L"Tahoma");
    FUN_005fc860(*(undefined8 *)(local_res8 + 8 + uVar3 * 8),0);
    local_19 = local_19 + 1;
  } while (local_19 != 0x5d);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

