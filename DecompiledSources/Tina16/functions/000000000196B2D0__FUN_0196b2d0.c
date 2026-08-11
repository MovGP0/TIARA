/* Ghidra address: 0196b2d0 */
/* Ghidra symbol: FUN_0196b2d0 */


longlong * FUN_0196b2d0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0197ca70(local_res8,0,param_3);
  lVar2 = FUN_019665f0(&PTR_FUN_01929d50,1,0);
  local_res8[0x2d] = lVar2;
  FUN_0195cea0(lVar2,DAT_01fb7dcc);
  FUN_01966bf0(local_res8[0x2d],2,0);
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0x32] = lVar2;
  *(undefined1 *)((longlong)local_res8 + 0x1b1) = 0;
  (**(code **)(*local_res8 + 0x278))(local_res8,9);
  *(undefined4 *)(local_res8 + 0x2e) = 7;
  *(undefined4 *)((longlong)local_res8 + 0x174) = 7;
  FUN_00414ad0(local_res8 + 0x20,L"Page");
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[0x48] = lVar2;
  lVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_res8[0x49] = lVar2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  *(undefined1 *)(local_res8 + 0x3b) = 1;
  *(undefined1 *)(local_res8 + 0x41) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x209) = 1;
  *(undefined1 *)((longlong)local_res8 + 0x20a) = 1;
  *(undefined1 *)(local_res8 + 0x42) = 1;
  *(undefined2 *)(local_res8 + 0x44) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x20c) = 1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

