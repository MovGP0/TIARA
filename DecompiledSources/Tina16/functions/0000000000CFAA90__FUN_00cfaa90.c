/* Ghidra address: 00cfaa90 */
/* Ghidra symbol: FUN_00cfaa90 */


longlong FUN_00cfaa90(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00cdd8c0(local_res8,0);
  uVar2 = FUN_00cfa870(&DAT_00cf7a78,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  FUN_008b0310(&local_28);
  FUN_00cfb060(local_res8,local_28);
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

