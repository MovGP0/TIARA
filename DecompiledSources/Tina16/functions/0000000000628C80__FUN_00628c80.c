/* Ghidra address: 00628c80 */
/* Ghidra symbol: FUN_00628c80 */


longlong FUN_00628c80(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     undefined1 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
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
  FUN_00628140(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(local_res8 + 0x88);
  *(undefined4 *)(local_res8 + 0x38) = 0;
  uVar2 = FUN_00627ce0(local_res8 + 0x30,param_4);
  FUN_00627ee0(uVar2);
  *(undefined1 *)(local_res8 + 0x90) = param_5;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

