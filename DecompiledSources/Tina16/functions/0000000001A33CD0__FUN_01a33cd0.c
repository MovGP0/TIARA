/* Ghidra address: 01a33cd0 */
/* Ghidra symbol: FUN_01a33cd0 */


void FUN_01a33cd0(longlong param_1,char param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined1 local_98;
  wchar_t *local_90;
  undefined1 local_88;
  wchar_t *local_80;
  undefined1 local_78;
  undefined8 local_70;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_c0 = 0;
  local_70 = 0;
  local_a8 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  FUN_010d56f0(&local_10);
  local_a0 = L"tpack_t";
  local_98 = 0x11;
  local_90 = L"run_circuit_solver";
  local_88 = 0x11;
  local_80 = L"run_circuit_solver";
  local_78 = 0x11;
  FUN_00442f70(&local_70,L"from %s import %s as %s",&local_a0,2);
  local_b8 = L"run_circuit_solver";
  local_b0 = 0x11;
  FUN_00442f70(&local_a8,L"%s.run()",&local_b8,0);
  FUN_00416cd0(&local_60,4,local_70,&DAT_01a3401c,local_a8,&DAT_01a3401c);
  uVar3 = FUN_013b5bb0(&DAT_013b55b8,1,local_60,*(undefined8 *)(param_1 + 0x18),
                       *(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  FUN_013b5e30(uVar3);
  if (param_2 != '\0') {
    cVar1 = FUN_01a33190(L"DevelDir",&local_64);
    if ((cVar1 != '\0') && (local_64 == 1)) {
      uVar2 = 1;
      goto LAB_01a33e9c;
    }
  }
  uVar2 = 0;
LAB_01a33e9c:
  *(undefined1 *)(param_1 + 0xa0) = uVar2;
  FUN_00414ad0(param_1 + 0x58,L"c:\\Attila\\Devel Files\\Projects\\Python\\graphtheory");
  if (*(char *)(param_1 + 0xa0) == '\0') {
    FUN_015fca00(&local_c0,0,0);
    FUN_00414ad0(param_1 + 0x50,local_c0);
  }
  else {
    FUN_00414ad0(param_1 + 0x50,L"c:\\Attila\\Devel Files\\Projects\\Python\\graphtheory");
  }
  FUN_00414480(&local_c0);
  FUN_00414480(&local_a8);
  FUN_00414480(&local_70);
  FUN_00414560(&local_60,0xb);
  return;
}

