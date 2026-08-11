/* Ghidra address: 00628140 */
/* Ghidra symbol: FUN_00628140 */


longlong FUN_00628140(longlong param_1,char param_2,undefined8 param_3)

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
  *(undefined8 *)(local_res8 + 8) = param_3;
  uVar2 = FUN_004b6da0(param_3);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined8 *)(local_res8 + 0x18) = *(undefined8 *)(local_res8 + 0x10);
  FUN_00419260(local_res8 + 0x88,&DAT_00406578,1,0x10000);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

