/* Ghidra address: 015b5d20 */
/* Ghidra symbol: FUN_015b5d20 */


longlong FUN_015b5d20(longlong param_1,char param_2,int param_3,undefined8 param_4,
                     undefined4 param_5,longlong param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88 [2];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_b8;
  local_78 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  *(int *)(local_res8 + 0x34) = param_3;
  *(undefined4 *)(local_res8 + 0x30) = 0;
  local_2c = 0;
  do {
    if (*(int *)(PTR_DAT_02003310 + (longlong)local_2c * 8) == param_3) {
      *(undefined4 *)(local_res8 + 0x30) =
           *(undefined4 *)(PTR_DAT_02003310 + (longlong)local_2c * 8 + 4);
      break;
    }
    local_2c = local_2c + 1;
  } while (local_2c != 0x44);
  FUN_00414b50(local_20,*(undefined8 *)
                         (PTR_PTR_020010d0 + (longlong)*(int *)(local_res8 + 0x30) * 8));
  FUN_00442f70(&local_48,local_20[0],param_4,param_5);
  FUN_00414b50(local_20,local_48);
  if ((param_6 != 0) && (*(longlong *)(param_6 + 0x10) != 0)) {
    local_70 = *(undefined8 *)(param_6 + 0x10);
    local_68 = 0x11;
    local_60 = local_20[0];
    local_58 = 0x11;
    FUN_00442f70(&local_50,L"%s: %s",&local_70,1);
    FUN_00414b50(local_20,local_50);
  }
  local_88[0] = *(undefined4 *)(local_res8 + 0x34);
  local_80 = 0;
  FUN_00442f70(&local_78,&DAT_015b6088,local_88,0);
  local_98 = CONCAT71(local_98._1_7_,1);
  FUN_00450070(&local_28,local_78,&DAT_015b609c,&DAT_015b60ac);
  local_98 = local_28;
  FUN_00416cd0(local_20,3,local_20[0],L" - Native error: ");
  FUN_0044d490(local_res8,0,local_20[0]);
  FUN_00414480(&local_78);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_28,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

