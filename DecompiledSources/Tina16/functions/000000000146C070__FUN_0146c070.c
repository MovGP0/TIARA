/* Ghidra address: 0146c070 */
/* Ghidra symbol: FUN_0146c070 */


void FUN_0146c070(longlong param_1)

{
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x890) + 0x78);
  FUN_005b84f0(&local_10,local_20,&DAT_0146c198,0);
  FUN_00414b50(&local_18,local_10);
  FUN_00414480(&local_10);
  local_48 = L",tdl://analysis.dig)";
  FUN_00416cd0(&local_38,3,&DAT_0146c1a8,local_18);
  FUN_014695a0(param_1,local_38);
  FUN_00414480(&local_38);
  FUN_00414560(&local_18,2);
  return;
}

