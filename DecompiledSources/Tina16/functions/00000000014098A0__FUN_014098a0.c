/* Ghidra address: 014098a0 */
/* Ghidra symbol: FUN_014098a0 */


longlong FUN_014098a0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5,longlong param_6)

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
  *(undefined8 *)(local_res8 + 0x6f8) = param_4;
  *(undefined4 *)(local_res8 + 0x700) = param_5;
  uVar2 = FUN_01d34560(&PTR_FUN_014084a8,1,5,5);
  *(undefined8 *)(local_res8 + 0x728) = uVar2;
  *(longlong *)(local_res8 + 0x748) = param_6;
  *(bool *)(local_res8 + 0x711) = param_6 != 0;
  FUN_007fc180(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

