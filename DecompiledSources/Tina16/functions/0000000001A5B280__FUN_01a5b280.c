/* Ghidra address: 01a5b280 */
/* Ghidra symbol: FUN_01a5b280 */


void FUN_01a5b280(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_res10;
  longlong local_res18;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  ushort local_160;
  undefined1 *local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_120;
  undefined1 local_cc [44];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  longlong local_28;
  
  local_130 = auStack_188;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_38[0] = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  *(undefined1 *)(param_1 + 0x811) = 1;
  local_28 = 0;
  local_120 = 0;
  uVar2 = FUN_019a4600();
  uVar2 = FUN_019c7500(&DAT_019bfa70,1,uVar2);
  *(undefined8 *)(param_1 + 0x2ad8) = uVar2;
  if (*(char *)(param_1 + 0x293c) != '\0') {
    FUN_01a3c270(*(undefined8 *)(param_1 + 0x2960));
  }
  if (*(char *)(param_1 + 0x293c) != '\0') {
    cVar1 = FUN_01a3c270(*(undefined8 *)(param_1 + 0x2960));
    if ((cVar1 != '\0') && (local_res10 == 0)) {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"This model can not use for image recognition without netlist");
      FUN_004134c0(uVar2);
    }
  }
  cVar1 = FUN_01a3c410(*(undefined8 *)(param_1 + 0x2960));
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"Allowed models for image recognition: gpt-5,qwen3-vl:235b-cloud,OpenRouter: qwen/qwen-vl-plus,OpenRouter: anthropic/claude-3.5-sonnet"
                        );
    FUN_004134c0(uVar2);
  }
  uVar2 = FUN_019a4600();
  local_168 = (wchar_t *)((ulonglong)local_168 & 0xffffffffffffff00);
  local_160 = 0;
  local_158 = local_cc;
  FUN_014b7d50(0,uVar2,1,0);
  if ((local_res10 == 0) && (*(char *)(param_1 + 0x293c) == '\0')) {
    uVar2 = FUN_019a4600();
    FUN_00416ba0(&local_138,*(undefined8 *)PTR_DAT_02005010,L"\\graph.json");
    local_168 = (wchar_t *)0x0;
    local_160 = local_160 & 0xff00;
    FUN_019c42e0(*(undefined8 *)(param_1 + 0x2ad8),uVar2,param_1 + 0x800,local_138);
  }
  else if (local_res10 != 0) {
    FUN_00416ba0(local_38,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\");
    FUN_00416ba0(&local_140,local_38[0],L"graph.json");
    local_120 = FUN_019dc380(local_res10,local_140);
    FUN_00416ba0(&local_148,local_38[0],L"graph.json");
    FUN_0147d130(local_148,param_1 + 0x800);
  }
  if (local_res18 == 0) {
    local_168 = L"circuit.jpg";
    FUN_00416cd0(param_1 + 0x2b38,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a5ba88);
    uVar2 = FUN_019a4600();
    FUN_01b25a80(uVar2,*(undefined8 *)(param_1 + 0x2b38),0x14);
  }
  else {
    FUN_00414ad0(param_1 + 0x2b38,local_res18);
  }
  FUN_00414ad0(param_1 + 0x2b30,local_res10);
  *(undefined1 *)(param_1 + 0x293d) = 1;
  if (*(char *)(param_1 + 0x293c) == '\0') {
    uVar2 = FUN_019a4600();
    *(undefined8 *)(param_1 + 11000) = uVar2;
  }
  else {
    *(undefined8 *)(param_1 + 11000) = local_120;
  }
  FUN_01a47dd0(param_1,0,0);
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  FUN_00414560(&local_148,3);
  FUN_00414560(&local_a0,0xe);
  FUN_00414560(&local_res10,2);
  return;
}

