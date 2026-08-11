/* Ghidra address: 007410b0 */
/* Ghidra symbol: FUN_007410b0 */


longlong FUN_007410b0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_0065f0e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x800;
  FUN_0064cbf0(local_res8,0x41);
  FUN_0064cc50(local_res8,0x41);
  lVar2 = FUN_005fd250(&PTR_FUN_005f3290,1);
  *(longlong *)(local_res8 + 0x318) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_00741490;
  lVar2 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  *(longlong *)(local_res8 + 800) = lVar2;
  *(longlong *)(lVar2 + 0x10) = local_res8;
  *(code **)(lVar2 + 8) = FUN_00741490;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

