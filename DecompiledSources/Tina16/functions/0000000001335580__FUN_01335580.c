/* Ghidra address: 01335580 */
/* Ghidra symbol: FUN_01335580 */


void FUN_01335580(longlong param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_b8;
  local_50 = 0;
  local_48 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  FUN_005b85d0(&local_48,&DAT_01335848,(longlong)*(char *)(param_1 + 0x728));
  FUN_00416ba0(&local_30,L"##0.",local_48);
  if (*(double *)(param_1 + 0x718) == 0.0) {
    FUN_00414b50(&local_18,&LAB_01335858);
  }
  else {
    FUN_00414480(&local_10);
    local_38 = (*(double *)(param_1 + 0x720) / *(double *)(param_1 + 0x718)) * 100.0;
    FUN_004485a0(&local_10,local_30,local_38,PTR_DAT_02004830);
    FUN_00414b50(&local_18,local_10);
    FUN_00414480(&local_10);
  }
  local_98 = 1;
  FUN_00b8fd60(&local_20,*(undefined8 *)(param_1 + 0x718),*(undefined1 *)(param_1 + 0x728),0);
  local_98 = 1;
  FUN_00b8fd60(&local_28,*(undefined8 *)(param_1 + 0x720),*(undefined1 *)(param_1 + 0x728),0);
  local_80 = local_18;
  local_78 = 0x11;
  local_70 = local_20;
  local_68 = 0x11;
  local_60 = local_28;
  local_58 = 0x11;
  FUN_00442f70(&local_50,*(undefined8 *)(param_1 + 0x6f8),&local_80,2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_50);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,5);
  return;
}

