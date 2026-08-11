/* Ghidra address: 00c25430 */
/* Ghidra symbol: FUN_00c25430 */


longlong FUN_00c25430(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4)

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
  FUN_00c24e60(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x40) = param_4;
  *(undefined4 *)(local_res8 + 0x44) = 0;
  uVar2 = FUN_004095c0((longlong)*(int *)(local_res8 + 0x40));
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  *(undefined1 *)(local_res8 + 0x48) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

