/* Ghidra address: 019b56d0 */
/* Ghidra symbol: FUN_019b56d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_019b56d0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_6);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  *(undefined2 *)(local_res8 + 0x10) = 0xb;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0;
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0xd0) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  *(undefined1 *)(local_res8 + 0x92) = 0;
  *(undefined1 *)(local_res8 + 0x94) = 0;
  *(undefined1 *)(local_res8 + 0xb0) = 1;
  *(undefined8 *)(local_res8 + 0xb18) = 0;
  *(undefined8 *)(local_res8 + 0xb20) = 0;
  *(undefined8 *)(local_res8 + 0xb28) = 0;
  *(undefined8 *)(local_res8 + 0xb30) = 0;
  *(undefined1 *)(local_res8 + 0xb3c) = 0;
  *(undefined1 *)(local_res8 + 0xb3d) = 0;
  *(undefined1 *)(local_res8 + 0xb3e) = 0;
  *(undefined1 *)(local_res8 + 0xb3f) = 1;
  _DAT_02110790 = 0;
  *(undefined1 *)(local_res8 + 0xe32) = 0;
  *(undefined8 *)(local_res8 + 0xe78) = param_3;
  *(undefined8 *)(local_res8 + 0xe80) = param_5;
  FUN_00414ad0(local_res8 + 0xe88,param_6);
  FUN_00414ad0(local_res8 + 0xe90,local_res20);
  uVar1 = FUN_01b12b60(&PTR_FUN_01afdc38,1);
  *(undefined8 *)(local_res8 + 0xe68) = uVar1;
  *(ushort *)(local_res8 + 0xe98) = (ushort)(byte)*PTR_DAT_02005310;
  *(undefined *)(local_res8 + 0xe9a) = *PTR_DAT_02002de8;
  FUN_0041b800(local_20);
  FUN_00414480(&local_res20);
  FUN_00414480(&param_6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

