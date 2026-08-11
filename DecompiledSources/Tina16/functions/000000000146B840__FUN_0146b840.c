/* Ghidra address: 0146b840 */
/* Ghidra symbol: FUN_0146b840 */


void FUN_0146b840(longlong param_1)

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
  local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x878) + 0x78);
  FUN_005b84f0(&local_10,local_20,&DAT_0146b968,0);
  FUN_00414b50(&local_18,local_10);
  FUN_00414480(&local_10);
  local_48 = L",tdl://analysis.tr)";
  FUN_00416cd0(&local_38,3,&DAT_0146b978,local_18);
  FUN_014695a0(param_1,local_38);
  FUN_00414480(&local_38);
  FUN_00414560(&local_18,2);
  return;
}

