/* Ghidra address: 00c72150 */
/* Ghidra symbol: FUN_00c72150 */


longlong FUN_00c72150(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  lVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(longlong *)(local_res8 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x20) = local_res8;
  *(code **)(lVar2 + 0x18) = FUN_00c72350;
  *(undefined4 *)(local_res8 + 0x28) = 0x8080;
  *(undefined1 *)(local_res8 + 0x2c) = 1;
  local_19 = 0;
  do {
    *(undefined4 *)(local_res8 + 0x18 + (ulonglong)local_19 * 4) = 0xffffffff;
    local_19 = local_19 + 1;
  } while (local_19 != 4);
  if (DAT_01ea71e0 == 0) {
    DAT_01ea71e0 = FUN_00c71f80(&DAT_00c71748,1);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

