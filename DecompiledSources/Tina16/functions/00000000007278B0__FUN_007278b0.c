/* Ghidra address: 007278b0 */
/* Ghidra symbol: FUN_007278b0 */


longlong FUN_007278b0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004d22d0(local_res8,0,param_3);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xb0) = uVar2;
  *(undefined4 *)(local_res8 + 0xb8) = 1;
  uVar2 = FUN_004b1b60(&PTR_FUN_0071cb58,1,&PTR_FUN_0071c7a8);
  *(undefined8 *)(local_res8 + 0xc0) = uVar2;
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined4 *)(local_res8 + 0xd8) = 0;
  uVar2 = FUN_004b1b60(&PTR_FUN_0071d2a0,1,&PTR_FUN_0071ce20);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  FUN_0041b800(local_res8 + 0xe0);
  FUN_0041b800(local_res8 + 0xe8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

