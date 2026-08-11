/* Ghidra address: 01595fc0 */
/* Ghidra symbol: FUN_01595fc0 */


longlong FUN_01595fc0(longlong param_1,char param_2,undefined8 param_3,int param_4,
                     undefined4 param_5)

{
  undefined1 uVar1;
  int iVar2;
  longlong local_res8;
  undefined8 local_res18;
  int local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_20 = FUN_004095c0((longlong)local_res20);
  *(int *)(local_res8 + 0x18) = local_res20;
  FUN_00409e20();
  local_24 = 0;
  iVar2 = local_res20;
  if (-1 < local_res20 + -1) {
    do {
      uVar1 = FUN_00409e80(0xff);
      *(undefined1 *)(local_20 + local_24) = uVar1;
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414bf0(local_res8 + 0x20,local_res18);
  *(longlong *)(local_res8 + 0x10) = local_20;
  *(undefined4 *)(local_res8 + 8) = param_5;
  FUN_01596410(local_res8);
  FUN_004144d0(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

