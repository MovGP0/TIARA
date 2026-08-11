/* Ghidra address: 00ace830 */
/* Ghidra symbol: FUN_00ace830 */


longlong FUN_00ace830(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
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
  FUN_00aca160(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x148) = *(undefined8 *)(param_4 + 0x148);
  *(undefined1 *)(local_res8 + 0x150) = *(undefined1 *)(param_4 + 0x150);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

