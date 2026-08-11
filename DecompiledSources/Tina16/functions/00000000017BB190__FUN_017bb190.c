/* Ghidra address: 017bb190 */
/* Ghidra symbol: FUN_017bb190 */


longlong FUN_017bb190(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  undefined1 *puVar1;
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
  FUN_00414ad0(local_res8 + 8,param_3);
  *(undefined8 *)(local_res8 + 0x10) = param_4;
  *(longlong *)(local_res8 + 0x18) = param_5;
  if (param_5 != 0) {
    FUN_004aef40(param_5,*(undefined4 *)(param_5 + 0x10));
  }
  DAT_01fa3630 = local_res8;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

