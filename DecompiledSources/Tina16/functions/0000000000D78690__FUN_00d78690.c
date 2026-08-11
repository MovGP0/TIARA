/* Ghidra address: 00d78690 */
/* Ghidra symbol: FUN_00d78690 */


longlong FUN_00d78690(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_00d75900(local_res8,0,param_3);
  uVar2 = FUN_00410e60(&PTR_FUN_00d56720,1);
  *(undefined8 *)(local_res8 + 0x120) = uVar2;
  *(undefined1 *)(local_res8 + 299) = 1;
  *(undefined1 *)(local_res8 + 0x12a) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

