/* Ghidra address: 0114cc80 */
/* Ghidra symbol: FUN_0114cc80 */


void FUN_0114cc80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6f8));
  *(undefined8 *)(param_1 + 0x7c9) = uVar9;
  uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x700));
  *(undefined8 *)(param_1 + 0x7d1) = uVar9;
  uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x708));
  *(undefined8 *)(param_1 + 0x7d9) = uVar9;
  uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x710));
  *(undefined8 *)(param_1 + 0x7e1) = uVar9;
  uVar9 = FUN_00b90090(*(undefined8 *)(param_1 + 0x788));
  *(undefined8 *)(param_1 + 0x7e9) = uVar9;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  *(char *)(param_1 + 0x7c8) = cVar2 + '\a';
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760));
  *(undefined1 *)(param_1 + 0x7f2) = uVar3;
  *(undefined1 *)(param_1 + 0x7f3) = *(undefined1 *)(*(longlong *)(param_1 + 0x768) + 0x4a8);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790));
  *(undefined1 *)(param_1 + 0x7f4) = uVar3;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  PTR_DAT_02004010[0x819] = uVar3;
  PTR_DAT_02004010[0x82c] =
       (char)((longlong)(*(int *)(*(longlong *)(param_1 + 0x758) + 0x4a8) + 1) % 3);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))(*(longlong **)(param_1 + 0x7a8));
  if (iVar4 == 0) {
    FUN_00414ad0(PTR_DAT_02004010 + 0x823,L"<EVERYCURVE>");
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x7a8);
    uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_30,uVar5);
    FUN_00414ad0(PTR_DAT_02004010 + 0x823,local_30[0]);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  if (cVar2 == '\0') {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] & 0xfe;
  }
  else {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] | 1;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738));
  if (cVar2 == '\0') {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] & 0xfd;
  }
  else {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] | 2;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  if (cVar2 == '\0') {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] & 0xfb;
  }
  else {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] | 4;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748));
  if (cVar2 == '\0') {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] & 0xf7;
  }
  else {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] | 8;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  if (cVar2 == '\0') {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] & 0xef;
  }
  else {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] | 0x10;
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  if (cVar2 == '\0') {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] & 0xdf;
  }
  else {
    PTR_DAT_02004010[0x415] = PTR_DAT_02004010[0x415] | 0x20;
  }
  if (*(char *)(param_1 + 0x100810) == '\0') {
    puVar7 = (undefined8 *)(param_1 + 0x7c8);
    puVar8 = (undefined8 *)(PTR_DAT_02004010 + 1000);
    for (lVar6 = 5; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
    *(undefined1 *)((longlong)puVar8 + 4) = *(undefined1 *)((longlong)puVar7 + 4);
    if (*(char *)(param_1 + 0x100811) == '\0') {
      FUN_0114d810(param_1);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x508) = 0;
  }
  *(undefined1 *)(param_1 + 0x100810) = 0;
  FUN_00414480(local_30);
  return;
}

