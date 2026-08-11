/* Ghidra address: 015710a0 */
/* Ghidra symbol: FUN_015710a0 */


longlong FUN_015710a0(longlong param_1,char param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
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
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 0x34) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x9a) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined4 *)(local_res8 + 0x38) = 0xffffffff;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  *(undefined4 *)(local_res8 + 0x30) = param_3;
  if ((*(int *)(local_res8 + 0x30) < 0) && (-3 < *(int *)(local_res8 + 0x30))) {
    *(undefined4 *)(local_res8 + 0x30) = 0;
  }
  *(undefined1 *)(local_res8 + 0x18) = param_4;
  *(undefined4 *)(local_res8 + 0x58) = 0;
  FUN_00414480(local_res8 + 0x10);
  *(undefined4 *)(local_res8 + 0x5c) = 0;
  FUN_00414480(local_res8 + 0x60);
  *(undefined1 *)(local_res8 + 0x99) = 0;
  FUN_00414ad0(local_res8 + 0x20,PTR_u_std_logic_01f649a0);
  FUN_00414480(local_res8 + 0x28);
  *(undefined1 *)(local_res8 + 0x98) = 0;
  *(undefined4 *)(local_res8 + 0x54) = 1;
  local_1c = 1;
  do {
    *(undefined4 *)(local_res8 + 0x6c + (longlong)local_1c * 4) = 0;
    local_1c = local_1c + 1;
  } while (local_1c != 4);
  *(undefined4 *)(local_res8 + 0x50) = 2;
  *(undefined8 *)(local_res8 + 0x90) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

