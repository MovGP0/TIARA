/* Ghidra address: 01541040 */
/* Ghidra symbol: FUN_01541040 */


longlong FUN_01541040(longlong param_1,char param_2,undefined4 param_3)

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
  uVar2 = FUN_01d34560(&PTR_FUN_01d33528,1,5,5);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_01d34560(&PTR_FUN_01d33528,1,5,5);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

