/* Ghidra address: 0194ecd0 */
/* Ghidra symbol: FUN_0194ecd0 */


longlong FUN_0194ecd0(longlong param_1,char param_2,undefined8 param_3)

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
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x240) = uVar2;
  FUN_004b67b0(uVar2,1);
  *(undefined1 *)(*(longlong *)(local_res8 + 0x240) + 0x49) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x238) = uVar2;
  FUN_0194e1e0(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

