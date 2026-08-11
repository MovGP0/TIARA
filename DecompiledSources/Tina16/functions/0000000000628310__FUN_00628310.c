/* Ghidra address: 00628310 */
/* Ghidra symbol: FUN_00628310 */


longlong FUN_00628310(longlong param_1,char param_2,undefined8 param_3,byte param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00628140(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x40) = *(undefined8 *)(local_res8 + 0x88);
  local_20 = *(longlong *)(local_res8 + 0x88);
  local_28 = local_20;
  if (local_20 != 0) {
    local_28 = *(longlong *)(local_20 + -8);
  }
  *(undefined4 *)(local_res8 + 0x48) = (undefined4)local_28;
  local_48 = 8;
  local_40 = 0;
  uVar2 = FUN_00627ca0(local_res8 + 0x30,(longlong)(char)(&DAT_01df1930)[param_4],8,param_5);
  FUN_00627d00(uVar2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

