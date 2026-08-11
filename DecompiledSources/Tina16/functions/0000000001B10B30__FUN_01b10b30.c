/* Ghidra address: 01b10b30 */
/* Ghidra symbol: FUN_01b10b30 */


longlong FUN_01b10b30(longlong param_1,char param_2)

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
  *(undefined4 *)(local_res8 + 0x18) = 1000;
  *(undefined4 *)(local_res8 + 0x10) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x14) = 1000;
  uVar2 = FUN_00409570(8000);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

