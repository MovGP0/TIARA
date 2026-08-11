/* Ghidra address: 00a084a0 */
/* Ghidra symbol: FUN_00a084a0 */


longlong FUN_00a084a0(longlong param_1,char param_2)

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
  FUN_009ec850(local_res8,0,0);
  *(undefined1 *)(local_res8 + 0x99) = 1;
  *(undefined4 *)(local_res8 + 0x8c) = 1;
  uVar2 = FUN_00410e60(&PTR_FUN_00a07a58,1);
  *(undefined8 *)(local_res8 + 0xb8) = uVar2;
  *(undefined4 *)(local_res8 + 0xc0) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

