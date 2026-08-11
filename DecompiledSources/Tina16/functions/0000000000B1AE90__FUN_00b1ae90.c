/* Ghidra address: 00b1ae90 */
/* Ghidra symbol: FUN_00b1ae90 */


longlong FUN_00b1ae90(longlong param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_28 = local_res8;
  local_30 = FUN_00b1aff0;
  uVar2 = FUN_00b1a490(&PTR_FUN_00b19be0,1,param_3,&local_30);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00b191b0(&DAT_00b18820,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

