/* Ghidra address: 0074ae30 */
/* Ghidra symbol: FUN_0074ae30 */


longlong FUN_0074ae30(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0067dfb0(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0xa0) = 0x400a0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x498) = uVar2;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(local_res8 + 0x4a0) = lVar3;
  *(longlong *)(lVar3 + 0x58) = local_res8;
  *(code **)(lVar3 + 0x50) = FUN_0074b310;
  *(undefined4 *)(local_res8 + 0x4a8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4ac) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

