/* Ghidra address: 01847460 */
/* Ghidra symbol: FUN_01847460 */


longlong FUN_01847460(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_018472d0(local_res8,0);
  FUN_00414ad0(local_res8 + 0x20,param_3);
  *(undefined1 *)(local_res8 + 0x48) = param_4;
  FUN_00414ad0(local_res8 + 0x50,param_5);
  FUN_0046f180(&local_38);
  FUN_00461840(local_res8 + 0x60,&local_38);
  *(undefined1 *)(local_res8 + 0x28) = 1;
  FUN_0043e5a0(&local_40,*(undefined8 *)(local_res8 + 0x20));
  FUN_00414ad0(local_res8 + 0x58,local_40);
  FUN_00414480(&local_40);
  FUN_00460ba0(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

