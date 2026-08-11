/* Ghidra address: 00788130 */
/* Ghidra symbol: FUN_00788130 */


longlong * FUN_00788130(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined1 *)(local_res8 + 8) = 0;
  *(undefined1 *)(local_res8 + 0xb) = 0;
  local_res8[3] = 0;
  local_res8[1] = param_3;
  local_res8[4] = 0;
  local_res8[2] = 0;
  local_res8[7] = 0;
  lVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  local_res8[9] = lVar2;
  FUN_00788d90(local_res8,0);
  *(undefined1 *)((longlong)local_res8 + 0x41) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x2c) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x2d) = 0;
  FUN_00788d30(local_res8,0);
  *(undefined1 *)((longlong)local_res8 + 0x2a) = 0;
  *(undefined1 *)(local_res8 + 5) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x2b) = 0;
  if (param_3 != 0) {
    local_28 = local_res8;
    local_30 = *(undefined8 *)(*local_res8 + 0x38);
    lVar2 = FUN_004d6210(&local_30);
    local_res8[2] = lVar2;
    lVar2 = FUN_00787880(&PTR_FUN_0075ad10,1,param_3);
    local_res8[3] = lVar2;
    lVar2 = FUN_00788000(lVar2);
    local_res8[4] = lVar2;
    if (0 < local_res8[4]) {
      FUN_00788060(local_res8[3],local_res8[2]);
      lVar2 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
      local_res8[7] = lVar2;
      (**(code **)(*local_res8 + 0x48))(local_res8);
    }
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

