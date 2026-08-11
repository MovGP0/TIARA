/* Ghidra address: 01b0f8a0 */
/* Ghidra symbol: FUN_01b0f8a0 */


longlong FUN_01b0f8a0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined8 *)(local_res8 + 0x30) = param_3;
  *(undefined8 *)(local_res8 + 0x38) = param_4;
  local_1c = 0;
  do {
    uVar2 = FUN_0082ccd0(&PTR_FUN_00825200,1);
    *(undefined8 *)(local_res8 + 0x18 + (longlong)local_1c * 8) = uVar2;
    local_1c = local_1c + 1;
  } while (local_1c != 2);
  *(undefined4 *)(local_res8 + 8) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0xc) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0x3ff0000000000000;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

