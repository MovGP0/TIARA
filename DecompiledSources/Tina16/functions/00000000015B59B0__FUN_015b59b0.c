/* Ghidra address: 015b59b0 */
/* Ghidra symbol: FUN_015b59b0 */


longlong FUN_015b59b0(longlong param_1,char param_2,int param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_80 [2];
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_b8;
  local_70 = 0;
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
  if ((param_4 != 0) && (*(longlong *)(param_4 + 0x10) != 0)) {
    local_68 = *(undefined8 *)(param_4 + 0x10);
    local_60 = 0x11;
    local_58 = local_20[0];
    local_50 = 0x11;
    FUN_00442f70(&local_48,L"%s: %s",&local_68,1);
    FUN_00414b50(local_20,local_48);
  }
  local_80[0] = *(undefined4 *)(local_res8 + 0x34);
  local_78 = 0;
  FUN_00442f70(&local_70,&DAT_015b5cb8,local_80,0);
  local_98 = CONCAT71(local_98._1_7_,1);
  FUN_00450070(&local_28,local_70,&DAT_015b5ccc,&DAT_015b5cdc);
  local_98 = local_28;
  FUN_00416cd0(local_20,3,local_20[0],L" - Native error: ");
  FUN_0044d490(local_res8,0,local_20[0]);
  FUN_00414480(&local_70);
  FUN_00414480(&local_48);
  FUN_00414560(&local_28,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

