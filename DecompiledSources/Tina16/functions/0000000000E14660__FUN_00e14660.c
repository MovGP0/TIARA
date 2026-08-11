/* Ghidra address: 00e14660 */
/* Ghidra symbol: FUN_00e14660 */


longlong FUN_00e14660(longlong param_1,char param_2)

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
  uVar2 = FUN_01d34560(&PTR_FUN_00e13220,1,5,5);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined1 *)(local_res8 + 0x20) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

