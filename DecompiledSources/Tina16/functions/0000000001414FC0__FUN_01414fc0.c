/* Ghidra address: 01414fc0 */
/* Ghidra symbol: FUN_01414fc0 */


void FUN_01414fc0(longlong param_1)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x128))(*(longlong **)(param_1 + 0x750),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),0);
  *(undefined1 *)(param_1 + 0x780) = 0;
  if (*(char *)(param_1 + 0x781) == '\0') {
    FUN_00414480(local_20);
  }
  else {
    FUN_00414b50(local_20,L"<assigned>");
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),local_20[0]);
  if (*(char *)(param_1 + 0x782) == '\0') {
    FUN_00414480(local_20);
  }
  else {
    FUN_00414b50(local_20,L"<assigned>");
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x738),local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x728),local_20[0]);
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))(*(longlong **)(param_1 + 0x778),1);
  FUN_0043fba0(&local_38,0x1300000,8);
  FUN_00416ba0(local_30,&DAT_0141520c,local_38);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x758),local_30[0]);
  FUN_0043fba0(&local_48,L"",8);
  FUN_00416ba0(&local_40,&DAT_0141520c,local_48);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x760),local_40);
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  return;
}

