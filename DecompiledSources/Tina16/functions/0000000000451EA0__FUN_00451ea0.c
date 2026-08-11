/* Ghidra address: 00451ea0 */
/* Ghidra symbol: FUN_00451ea0 */


longlong FUN_00451ea0(longlong param_1,char param_2)

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
  *(undefined4 *)(local_res8 + 0x18) = 0xffff;
  uVar2 = thunk_FUN_0416e139(0,0xffffffff,0xffffffff,0);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = thunk_FUN_0416e139(0,0,0,0);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  *(undefined4 *)(local_res8 + 0x30) = 0xffffffff;
  uVar2 = FUN_00410e60(&DAT_00437f28,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

