/* Ghidra address: 01574ae0 */
/* Ghidra symbol: FUN_01574ae0 */


longlong FUN_01574ae0(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  *(undefined4 *)(local_res8 + 8) = param_3;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined1 *)(local_res8 + 0x3a) = 0;
  *(undefined1 *)(local_res8 + 0x3b) = 0;
  FUN_00414ad0(local_res8 + 0x40,*(undefined8 *)PTR_PTR_02001278);
  *(undefined1 *)(local_res8 + 0x38) = 0;
  *(undefined1 *)(local_res8 + 0x39) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  *(undefined1 *)(local_res8 + 0x49) = 0;
  *(undefined4 *)(local_res8 + 0x4c) = 0;
  *(undefined1 *)(local_res8 + 0x4a) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

