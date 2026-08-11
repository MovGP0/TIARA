/* Ghidra address: 010dbbd0 */
/* Ghidra symbol: FUN_010dbbd0 */


longlong FUN_010dbbd0(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x10) = param_4;
  lVar2 = FUN_004113f0(param_4,&PTR_FUN_010dee68);
  *(undefined8 *)(local_res8 + 0x50) = *(undefined8 *)(lVar2 + 0x8c0);
  *(undefined4 *)(local_res8 + 0x18) = param_3;
  uVar3 = FUN_004b6930(&PTR_FUN_010d9a38,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  FUN_004b67b0(uVar3,0);
  *(undefined4 *)(local_res8 + 0x1c) = 0;
  *(undefined1 *)(local_res8 + 0x23) = 0;
  *(undefined1 *)(local_res8 + 0x20) = 1;
  *(undefined1 *)(local_res8 + 0x22) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

