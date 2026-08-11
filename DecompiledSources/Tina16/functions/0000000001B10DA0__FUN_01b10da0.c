/* Ghidra address: 01b10da0 */
/* Ghidra symbol: FUN_01b10da0 */


longlong FUN_01b10da0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
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
  *(undefined8 *)(local_res8 + 8) = param_3;
  *(undefined4 *)(local_res8 + 0x18) = 1;
  *(undefined4 *)(local_res8 + 0x1c) = 1000;
  puVar2 = (undefined8 *)FUN_00409570(8000);
  *(undefined8 **)(local_res8 + 0x10) = puVar2;
  *puVar2 = param_4;
  *(undefined8 *)(local_res8 + 0x20) = param_5;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

