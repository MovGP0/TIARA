/* Ghidra address: 00b30f20 */
/* Ghidra symbol: FUN_00b30f20 */


longlong FUN_00b30f20(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined4 *)(local_res8 + 8) = 0;
  FUN_004144d0(local_res8 + 0x20);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_00b191b0(&LAB_00b19020,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  uVar2 = FUN_00b30bc0(&DAT_00b30438,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  *(undefined8 *)(local_res8 + 0x48) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

