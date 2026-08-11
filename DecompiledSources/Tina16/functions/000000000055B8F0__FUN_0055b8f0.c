/* Ghidra address: 0055b8f0 */
/* Ghidra symbol: FUN_0055b8f0 */


longlong FUN_0055b8f0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_1c = 0;
  uVar2 = FUN_0055b7a0(FUN_0055b740,local_res8,0);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  *(undefined8 *)(local_res8 + 0x20) = param_4;
  *(undefined8 *)(local_res8 + 0x10) = param_3;
  FUN_0041b840(local_res8 + 0x18,param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

