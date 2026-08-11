/* Ghidra address: 00ce8c10 */
/* Ghidra symbol: FUN_00ce8c10 */


longlong FUN_00ce8c10(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004b26d0(local_res8,0,param_3,&PTR_FUN_00ce57e8);
  uVar2 = FUN_00451ea0(&DAT_00438260,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00ce60e0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

