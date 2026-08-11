/* Ghidra address: 0055aac0 */
/* Ghidra symbol: FUN_0055aac0 */


longlong FUN_0055aac0(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4)

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
  uVar2 = FUN_0055d000(&PTR_FUN_00530348,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  *(undefined1 *)(local_res8 + 0x38) = param_3;
  *(undefined1 *)(local_res8 + 8) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

