/* Ghidra address: 01a35410 */
/* Ghidra symbol: FUN_01a35410 */


undefined8 FUN_01a35410(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_1398 [32];
  wchar_t *local_1378;
  undefined8 local_1360;
  undefined8 local_1358;
  undefined8 local_1350;
  undefined8 local_1348;
  undefined8 local_1340 [22];
  undefined8 local_128f;
  undefined8 local_a08;
  undefined8 local_a00 [22];
  undefined8 local_94f;
  undefined1 local_398;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 local_b0 [8];
  int local_a8;
  double local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  longlong *local_20;
  
  local_398 = 0;
  local_1398[0] = 0;
  local_c0 = local_1398;
  local_1360 = 0;
  local_1358 = 0;
  local_1350 = 0;
  local_1348 = 0;
  local_a08 = 0;
  puVar2 = local_1340;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_c8 = 0;
  puVar2 = local_a00;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  FUN_00417580(local_b0,&DAT_01a30988);
  local_28 = FUN_00f309b0(&LAB_00f23b78,1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a35ab0(param_1,local_a00);
  FUN_00441920(&local_c8,local_94f);
  FUN_0043e1a0(&local_70,local_c8);
  if (param_3 < 0) {
    local_80 = FUN_01a335f0(param_1,local_b0,1);
    FUN_00f30e70(local_28,L"circuit_no_gens",*(undefined8 *)(param_1 + 0x78));
    FUN_00f30e70(local_28,L"request",local_80);
  }
  else {
    FUN_00417c40(local_b0,&PTR_u_ohm_1_t_TSC_01fc6d48 + (longlong)param_3 * 5,&DAT_01a30988);
    local_80 = FUN_01a335f0(param_1,local_b0,0);
    local_88 = FUN_01a32530(local_b0);
    FUN_00f30e70(local_28,L"circuit_no_gens",*(undefined8 *)(param_1 + 0x78));
    FUN_00f30e70(local_28,L"request",local_80);
    if (local_98 != 0.0) {
      FUN_00f30e70(local_28,L"expected",local_88);
    }
  }
  FUN_00416ba0(&local_60,*(undefined8 *)(param_1 + 0x50),L"\\data");
  FUN_00f2d1d0(local_28,&local_58);
  (**(code **)(*local_20 + 0x78))(local_20,local_58);
  FUN_01a35ab0(param_1,local_1340);
  FUN_00441920(&local_a08,local_128f);
  FUN_0043e1a0(&local_68,local_a08);
  local_1378 = (wchar_t *)CONCAT71(local_1378._1_7_,1);
  FUN_00450070(&local_1348,local_68,L".tsc",0);
  FUN_00414b50(&local_68,local_1348);
  if (param_3 < 0) {
    FUN_00414b50(local_40,L"temp.json");
  }
  else if (local_a8 < 1) {
    FUN_00416ba0(local_40,local_68,L".json");
  }
  else {
    FUN_0043f750(&local_1350,local_a8);
    local_1378 = L".json";
    FUN_00416cd0(local_40,3,local_68,local_1350);
  }
  local_1378 = (wchar_t *)local_40[0];
  FUN_00416cd0(&local_1358,3,local_60,&DAT_01a35aac);
  (**(code **)(*local_20 + 0x100))(local_20,local_1358);
  local_1378 = L"temp.json";
  FUN_00416cd0(&local_1360,3,local_60,&DAT_01a35aac);
  (**(code **)(*local_20 + 0x100))(local_20,local_1360);
  FUN_00414ad0(param_1 + 200,local_40[0]);
  (**(code **)(*local_20 + 0x90))(local_20);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_1360,4);
  FUN_00417740(local_1340,&DAT_01d0d0b8);
  FUN_00414480(&local_a08);
  FUN_00417740(local_a00,&DAT_01d0d0b8);
  FUN_00414480(&local_c8);
  FUN_00417740(local_b0,&DAT_01a30988);
  FUN_00414560(&local_78,8);
  return param_2;
}

