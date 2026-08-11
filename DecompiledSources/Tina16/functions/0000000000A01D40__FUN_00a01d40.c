/* Ghidra address: 00a01d40 */
/* Ghidra symbol: FUN_00a01d40 */


longlong FUN_00a01d40(longlong param_1,char param_2,longlong param_3,undefined8 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
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
  local_20 = 0;
  if (param_3 != 0) {
    local_20 = *(int *)(param_3 + -4);
  }
  local_1c = local_20 * 2;
  FUN_00419260(local_res8 + 8,&DAT_009f2be0,1,(longlong)(local_1c + 2));
  if (0 < local_1c) {
    uVar2 = FUN_00416740(param_3);
    FUN_00409a70(uVar2,*(undefined8 *)(local_res8 + 8),(longlong)local_1c);
  }
  *(undefined2 *)(*(longlong *)(local_res8 + 8) + (longlong)local_1c) = 0;
  FUN_00a02a30(local_res8);
  FUN_00414ad0(local_res8 + 0x20,param_4);
  FUN_00a02aa0(local_res8,param_5,0x4b0);
  *(byte *)(local_res8 + 0x30) = *(byte *)(local_res8 + 0x30) | 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

