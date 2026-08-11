/* Ghidra address: 01544140 */
/* Ghidra symbol: FUN_01544140 */


longlong FUN_01544140(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

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
  uVar2 = FUN_01d34560(&PTR_FUN_0153e138,1,5,5);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined4 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x30) = param_4;
  uVar2 = FUN_01d34560(&PTR_FUN_01d33528,1,5,5);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

