/* Ghidra address: 018530c0 */
/* Ghidra symbol: FUN_018530c0 */


longlong FUN_018530c0(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 *param_6,int param_7,longlong param_8)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined4 *)(local_res8 + 8) = param_3;
  *(undefined4 *)(local_res8 + 0xc) = param_4;
  *(undefined4 *)(local_res8 + 0x10) = param_5;
  *(undefined8 *)(local_res8 + 0x14) = *param_6;
  *(undefined8 *)(local_res8 + 0x1c) = param_6[1];
  if (param_8 == 0) {
    FUN_00419430(local_res8 + 0x28,&DAT_01852278);
  }
  else {
    FUN_00419260(local_res8 + 0x28,&DAT_01852278,1,(longlong)param_7);
    FUN_00409a70(param_8,*(undefined8 *)(local_res8 + 0x28),(longlong)(param_7 * 4));
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

