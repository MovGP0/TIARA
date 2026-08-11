/* Ghidra address: 00a52400 */
/* Ghidra symbol: FUN_00a52400 */


longlong FUN_00a52400(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(int *)(local_res8 + 0x750) = DAT_020146f8;
  DAT_020146f8 = DAT_020146f8 + 1;
  *(undefined4 *)(local_res8 + 0x68) = 0x1fffffff;
  local_19 = 0x12;
  do {
    FUN_00468530(local_res8 + 0x78 + (ulonglong)local_19 * 0x18,0xff439eb2,0xfffffffffffffffc);
    local_19 = local_19 + 1;
  } while (local_19 != 0x2e);
  FUN_00468530(local_res8 + 0x528,0,1);
  *(undefined1 *)(local_res8 + 0x30) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

