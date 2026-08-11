/* Ghidra address: 01432900 */
/* Ghidra symbol: FUN_01432900 */


longlong FUN_01432900(longlong param_1,char param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00b08760(local_res8,0,local_20,param_4);
  *(undefined1 *)(local_res8 + 0x28) = 2;
  *(undefined1 *)(local_res8 + 0x38) = 1;
  *(longlong *)(local_res8 + 8) = param_3;
  FUN_00414480(local_res8 + 0x78);
  FUN_00414480(local_res8 + 0x80);
  *(undefined4 *)(local_res8 + 0x90) = 0;
  local_28 = FUN_004113f0(*(undefined8 *)(param_3 + 0x1a8),&PTR_FUN_01763148);
  if (param_4 == 0) {
    FUN_00414ad0(local_res8 + 0x78,*(undefined8 *)(local_28 + 0x140));
  }
  else if (param_4 == 1) {
    FUN_00414ad0(local_res8 + 0x78,*(undefined8 *)(local_28 + 0x138));
    FUN_00414ad0(local_res8 + 0x80,*(undefined8 *)(local_28 + 0x130));
  }
  else if (param_4 == 2) {
    FUN_00414ad0(local_res8 + 0x78,*(undefined8 *)(local_28 + 0x140));
  }
  *(longlong *)(local_res8 + 0x70) = param_3;
  FUN_015f4380(&local_38,param_3,0);
  FUN_00414ad0(local_res8 + 0x88,local_38);
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

