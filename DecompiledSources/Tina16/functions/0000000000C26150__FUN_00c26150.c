/* Ghidra address: 00c26150 */
/* Ghidra symbol: FUN_00c26150 */


longlong FUN_00c26150(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  lVar2 = FUN_00c25430(&PTR_FUN_00c25160,1,param_3,DAT_01e9f55c);
  *(longlong *)(local_res8 + 0x18) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_00c262b0;
  *(undefined4 *)(local_res8 + 0x120) = 0;
  *(undefined4 *)(local_res8 + 0x124) = 0;
  *(undefined4 *)(local_res8 + 0x128) = 2;
  *(undefined1 *)(local_res8 + 300) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

