/* Ghidra address: 01b8bb50 */
/* Ghidra symbol: FUN_01b8bb50 */


undefined1 FUN_01b8bb50(longlong param_1)

{
  undefined1 auStack_178 [32];
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  undefined1 local_31;
  undefined8 local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_50 = auStack_178;
  local_58 = 0;
  local_20 = 0;
  local_30 = FUN_017105e0(0);
  local_40 = FUN_0171af00(&DAT_0170d528,1,local_30);
  FUN_0043e130(&local_58,*(undefined8 *)(param_1 + 0x108));
  FUN_00416910(local_158,local_58,0xff);
  local_20 = FUN_0171b840(local_40,local_158,0,&local_31);
  FUN_00410f20(local_40);
  FUN_01710700(local_30);
  local_21 = local_20 != 0;
  if (local_20 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x10))(*(longlong **)(param_1 + 0x110),local_20)
    ;
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_58);
  return local_21;
}

