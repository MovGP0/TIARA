/* Ghidra address: 01596170 */
/* Ghidra symbol: FUN_01596170 */


longlong FUN_01596170(longlong param_1,char param_2,undefined8 param_3,longlong param_4,int param_5,
                     undefined4 param_6)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414bf0(local_res8 + 0x20,local_res18);
  *(int *)(local_res8 + 0x18) = param_5;
  uVar1 = FUN_004095c0((longlong)param_5);
  *(undefined8 *)(local_res8 + 0x10) = uVar1;
  local_1c = 0;
  if (-1 < param_5 + -1) {
    do {
      *(undefined1 *)(*(longlong *)(local_res8 + 0x10) + (longlong)local_1c) =
           *(undefined1 *)(local_res20 + local_1c);
      local_1c = local_1c + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *(undefined4 *)(local_res8 + 8) = param_6;
  FUN_01596410(local_res8);
  FUN_004144d0(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

