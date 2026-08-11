/* Ghidra address: 00b5aa70 */
/* Ghidra symbol: FUN_00b5aa70 */


longlong FUN_00b5aa70(longlong param_1,char param_2)

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
  uVar2 = FUN_00410e60(&LAB_00b251f8,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  *(undefined4 *)(local_res8 + 0x10) = 0;
  *(undefined4 *)(local_res8 + 0x14) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

