/* Ghidra address: 00744e50 */
/* Ghidra symbol: FUN_00744e50 */


longlong FUN_00744e50(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00742f60(local_res8,0,param_3);
  uVar2 = FUN_00746510(&PTR_FUN_007379f8,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4b0) = uVar2;
  uVar2 = FUN_00746790(&PTR_FUN_00737c00,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4b8) = uVar2;
  uVar2 = FUN_00746f40(&PTR_FUN_00738258,1,local_res8);
  *(undefined8 *)(local_res8 + 0x4c0) = uVar2;
  *(undefined1 *)(local_res8 + 0x4c8) = 1;
  FUN_007465c0(*(undefined8 *)(local_res8 + 0x4b0));
  FUN_007465c0(*(undefined8 *)(local_res8 + 0x4b0));
  FUN_00746840(*(undefined8 *)(local_res8 + 0x4b8));
  FUN_00746840(*(undefined8 *)(local_res8 + 0x4b8));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

